#include "MainWindow.h"
#include <qmessagebox.h>



MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent)
{
	_qTextToSpeech = new QTextToSpeech(this);
	_qClipboard = QGuiApplication::clipboard();
	_templateWindow = new TemplateWindow(this);
	ui.setupUi(this);

	// Make engine selection list
	ui.engineData->addItem("Default", "default");
	foreach(QString engine, QTextToSpeech::availableEngines())
	{
		ui.engineData->addItem(engine, engine);
	}
	ui.engineData->setCurrentIndex(0);

	// Make connection beetwen interface objects and main window.
	//// Connect main field.
	connect(ui.multiplyChangeButton, &QRadioButton::toggled, this, &MainWindow::onToggleMultiplyChangeButton);
	connect(ui.translateButton, &QPushButton::clicked, this, &MainWindow::onClickTranslateButton);
	connect(ui.copyButton, &QPushButton::clicked, this, &MainWindow::onClickCopyButton);
	connect(ui.pasteButton, &QPushButton::clicked, this, &MainWindow::onClickPasteButton);
	connect(ui.voiceMenuButton, &QPushButton::clicked, this, &MainWindow::onClickVoiceMenuButton);

	//// Connect Speak Menu.
	connect(ui.speakButton, &QPushButton::clicked, this, &MainWindow::onSpeak);
	connect(ui.engineData, static_cast<void (QComboBox::*)(int)>(&QComboBox::currentIndexChanged), this, &MainWindow::onEngineSelected);
	connect(ui.volumeSlider, &QSlider::valueChanged, this, &MainWindow::onVolumeChange);
	connect(ui.rateSlider, &QSlider::valueChanged, this, &MainWindow::onRateChange);
	connect(ui.pitchSlider, &QSlider::valueChanged, this, &MainWindow::onPitchChange);

	//
	connect(ui.actionShow, &QAction::triggered, this, &MainWindow::onShowTemplateWindow);

	// Sets sliders to normal position.
	ui.volumeSlider->setSliderPosition(ui.volumeSlider->maximum()/2);
	ui.rateSlider->setSliderPosition(0);;
	
	// Select default engine.
	onEngineSelected(0);

	// Hide voice menu and multiply change input field.
	onClickVoiceMenuButton();
	onToggleMultiplyChangeButton(false);

}

void MainWindow::onClickTranslateButton()
{
	// Original text from left textEdit.
	QString originalText = ui.textEdit->toPlainText();
	QVector<QString> findVector;
	findVector.push_back(ui.findLine->text());
	QString replace = ui.replaceLine->text();
	if (replace.isEmpty() || findVector.first().isEmpty())
	{
		ui.textBrowser->setText(originalText);
		return;
	}
		
	{
		// If user toggle on multiply change program must separate find line
		bool isChecked = ui.multiplyChangeButton->isChecked();
		if (isChecked)
		{
			// Separator string
			QString separator = ui.separatorLine->text();
			// Check if separator is exist.
			if (separator.isEmpty())
			{
				QMessageBox::information(this, "Warning!", "Separator line is empty!\nInput separator or toggle off Multiply Changes.");
				return;
			}
			int step = separator.length();
			int endIndex = 0;
			int beginIndex = 0;
			while (beginIndex != -1)
			{
				// Find our separator in find line.
				beginIndex = findVector.first().indexOf(separator, endIndex);
				// If is no more separators just push left piece of find line.
				if (beginIndex == -1)
					findVector.push_back(findVector.first().right(findVector.first().length() - endIndex));
				// If we founded one just extract find piece.
				else
					findVector.push_back(findVector.first().mid(endIndex, beginIndex-endIndex));
				// Jump through separator
				endIndex = beginIndex + step;			
			}
			/*debug print
			for (auto& s : findVector)
			{
				qDebug(qUtf8Printable(s));
			}*/
			// Remove original find line coz it's usefull.
			findVector.removeFirst();
		}
	}
	
	// Aho-Corasick algrotihm might be work better but weird things with abc size makes me cry.
	// Also bad idea to keep int array with size of UTF-8 max capacity for each node in tree.
	int lenght = originalText.length();
	for (int i = 0; i < lenght; i++)
	{
		for (auto& f : findVector)
		{
			int subLenght = f.length();
			bool isEquals = true;
			for (int j = 0; j < subLenght; j++)
			{
				if (originalText[i + j] != f[j])
				{
					isEquals = false;
					break;
				}

			}
			if (isEquals)
			{
				originalText.remove(i, subLenght);
				originalText.insert(i, replace);
				lenght = originalText.length();
				i += replace.length() - 1;
				break;
			}
		}
	}
	ui.textBrowser->setText(originalText);
}


MainWindow::~MainWindow()
{
	delete _qTextToSpeech;
	delete _templateWindow;
}

void MainWindow::onClickCopyButton()
{
	_qClipboard->setText(ui.textBrowser->toPlainText());
}

void MainWindow::onClickPasteButton()
{
	ui.textEdit->setText(_qClipboard->text());
}

void MainWindow::onToggleMultiplyChangeButton(bool isToggled)
{
	// Disable and Hide separator line if multiply change button is not checked.
	bool isChecked = ui.multiplyChangeButton->isChecked();
	ui.separatorLine->setHidden(!isChecked);
	
	/* is right way or not?
	ui.separatorLine->setEnabled(isToggled);
	ui.separatorLine->setHidden(!isToggled);*/
}

void MainWindow::onClickVoiceMenuButton()
{
	static bool lastCondition = ui.voiceMenuLayout->isHidden();
	lastCondition = !lastCondition;
	ui.voiceMenuLayout->setHidden(lastCondition);
	ui.voiceMenuLine->setHidden(lastCondition);
	
}

void MainWindow::onEngineSelected(int index)
{
	QString engineName = ui.engineData->itemData(index).toString();
	delete _qTextToSpeech;
	if (engineName == "default")
		_qTextToSpeech = new QTextToSpeech(this);
	else
		_qTextToSpeech = new QTextToSpeech(engineName, this);

	// Populate language combo box.
	disconnect(ui.languageData, static_cast<void (QComboBox::*)(int)>(&QComboBox::currentIndexChanged), this, &MainWindow::onLocaleSelected);
	ui.languageData->clear();
	QVector<QLocale> locales = _qTextToSpeech->availableLocales();
	foreach(const QLocale &locale, locales)
	{
		QVariant localeVariant(locale);
		QString language = QLocale::languageToString(locale.language());
		ui.languageData->addItem(language, localeVariant);
	}

	// Set settings.
	onVolumeChange(ui.volumeSlider->value());
	onRateChange(ui.rateSlider->value());
	onPitchChange(ui.pitchSlider->value());

	// Make reconnect to new engine.
	connect(ui.languageData, static_cast<void (QComboBox::*)(int)>(&QComboBox::currentIndexChanged), this, &MainWindow::onLocaleSelected);
	connect(ui.resumeButton, &QPushButton::clicked, _qTextToSpeech, &QTextToSpeech::resume);
	connect(ui.stopButton, &QPushButton::clicked, _qTextToSpeech, &QTextToSpeech::stop);
	connect(ui.pauseButton, &QPushButton::clicked, _qTextToSpeech, &QTextToSpeech::pause);
	connect(_qTextToSpeech, &QTextToSpeech::stateChanged, this, &MainWindow::onStateChange);

	// Popuate abailable voices to voice's combo box.
	disconnect(ui.voiceData, static_cast<void (QComboBox::*)(int)>(&QComboBox::currentIndexChanged), this, &MainWindow::onVoiceSelected);
	ui.voiceData->clear();
	_voices = _qTextToSpeech->availableVoices();
	QVoice currentVoice = _qTextToSpeech->voice();
	foreach(const QVoice &voice, _voices)
	{
		ui.voiceData->addItem(voice.name());
		if (voice.name() == currentVoice.name())
			ui.voiceData->setCurrentIndex(ui.voiceData->count() - 1);
	}
	connect(ui.voiceData, static_cast<void (QComboBox::*)(int)>(&QComboBox::currentIndexChanged), this, &MainWindow::onVoiceSelected);
}
void MainWindow::onSpeak()
{
	QString text = ui.textBrowser->toPlainText();
	_qTextToSpeech->say(ui.textBrowser->toPlainText());
	//if(ui.textBrowser->toPlainText()!)
}

void MainWindow::onStateChange(QTextToSpeech::State state)
{
	if (state == QTextToSpeech::Speaking) 
		ui.statusBar->showMessage("Speech started...");
	else if (state == QTextToSpeech::Ready)
		ui.statusBar->showMessage("Speech stopped...", 2000);
	else if (state == QTextToSpeech::Paused)
		ui.statusBar->showMessage("Speech paused...");
	else
		ui.statusBar->showMessage("Speech error!");
	
	ui.pauseButton->setEnabled(state == QTextToSpeech::State::Speaking);	
	ui.resumeButton->setEnabled(state == QTextToSpeech::State::Paused);
	ui.stopButton->setEnabled(state == QTextToSpeech::State::Speaking ||
		state == QTextToSpeech::State::Paused);
}

void MainWindow::onVoiceSelected(int index)
{
	_qTextToSpeech->setVoice(_voices.at(index));
}

void MainWindow::onVolumeChange(int value)
{
	_qTextToSpeech->setVolume(value / 100.0f);
}

void MainWindow::onRateChange(int value)
{
	_qTextToSpeech->setRate(value / 10.0f);
}

void MainWindow::onPitchChange(int value)
{
	_qTextToSpeech->setPitch(value / 10.0f);
}


void MainWindow::onLocaleSelected(int index)
{
	QLocale locale = ui.languageData->itemData(index).toLocale();
	_qTextToSpeech->setLocale(locale);
}

void MainWindow::onShowTemplateWindow()
{
	_templateWindow->show();
}

