#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MainWindow.h"
#include "TemplateWindow.h"

#include <QtWidgets/Qdialog>
#include <qdebug.h>
#include <QtTextToSpeech/qtexttospeech.h>
#include <qaudiorecorder.h>
#include <qclipboard.h>

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = Q_NULLPTR);
	~MainWindow();
	
public slots:
	void onClickTranslateButton();
	void onClickCopyButton();
	void onClickPasteButton();
	void onToggleMultiplyChangeButton(bool isToggled);
	void onClickVoiceMenuButton();
	void onEngineSelected(int index);
	void onSpeak();
	void onStateChange(QTextToSpeech::State state);
	void onVoiceSelected(int index);
	void onVolumeChange(int value);
	void onRateChange(int value);
	void onPitchChange(int value);
	void onLocaleSelected(int index);
	void onShowTemplateWindow();
private:
	Ui::MainWindowClass ui;
	QTextToSpeech* _qTextToSpeech;
	QVector<QVoice> _voices;
	QClipboard* _qClipboard;
	TemplateWindow* _templateWindow;
};
