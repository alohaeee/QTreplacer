/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionPrint;
    QAction *actionExit;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionCut;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionMost_Popular;
    QAction *actionShow;
    QAction *actionAdd;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *translateButton;
    QPushButton *copyButton;
    QPushButton *pasteButton;
    QPushButton *voiceMenuButton;
    QHBoxLayout *horizontalLayout_6;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *findLine;
    QLineEdit *replaceLine;
    QFrame *line;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QRadioButton *multiplyChangeButton;
    QLineEdit *separatorLine;
    QLabel *label_3;
    QLabel *label_4;
    QTextBrowser *textBrowser;
    QFrame *voiceMenuLine;
    QWidget *voiceMenuLayout;
    QVBoxLayout *s;
    QLabel *label_9;
    QFrame *line_3;
    QPushButton *speakButton;
    QPushButton *pauseButton;
    QPushButton *resumeButton;
    QPushButton *stopButton;
    QLabel *label_5;
    QComboBox *engineData;
    QLabel *label_6;
    QComboBox *voiceData;
    QLabel *label_8;
    QComboBox *languageData;
    QLabel *label_7;
    QSlider *volumeSlider;
    QLabel *label_10;
    QSlider *rateSlider;
    QLabel *label_11;
    QSlider *pitchSlider;
    QMenuBar *menuBar;
    QMenu *menuNew;
    QMenu *menuEdit;
    QMenu *menuTemplate;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QString::fromUtf8("MainWindowClass"));
        MainWindowClass->resize(782, 656);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindowClass->sizePolicy().hasHeightForWidth());
        MainWindowClass->setSizePolicy(sizePolicy);
        actionNew = new QAction(MainWindowClass);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionNew->setCheckable(true);
        actionOpen = new QAction(MainWindowClass);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(MainWindowClass);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionPrint = new QAction(MainWindowClass);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        actionExit = new QAction(MainWindowClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionCopy = new QAction(MainWindowClass);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imgs/Resources/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon);
        actionPaste = new QAction(MainWindowClass);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imgs/Resources/paste1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon1);
        actionCut = new QAction(MainWindowClass);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionUndo = new QAction(MainWindowClass);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionRedo = new QAction(MainWindowClass);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionMost_Popular = new QAction(MainWindowClass);
        actionMost_Popular->setObjectName(QString::fromUtf8("actionMost_Popular"));
        actionShow = new QAction(MainWindowClass);
        actionShow->setObjectName(QString::fromUtf8("actionShow"));
        actionAdd = new QAction(MainWindowClass);
        actionAdd->setObjectName(QString::fromUtf8("actionAdd"));
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(60);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout->setContentsMargins(-1, 80, -1, 80);
        translateButton = new QPushButton(centralWidget);
        translateButton->setObjectName(QString::fromUtf8("translateButton"));
        translateButton->setMaximumSize(QSize(93, 28));

        verticalLayout->addWidget(translateButton);

        copyButton = new QPushButton(centralWidget);
        copyButton->setObjectName(QString::fromUtf8("copyButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(copyButton->sizePolicy().hasHeightForWidth());
        copyButton->setSizePolicy(sizePolicy1);
        copyButton->setMinimumSize(QSize(93, 28));
        copyButton->setMaximumSize(QSize(93, 28));
        copyButton->setLayoutDirection(Qt::LeftToRight);

        verticalLayout->addWidget(copyButton);

        pasteButton = new QPushButton(centralWidget);
        pasteButton->setObjectName(QString::fromUtf8("pasteButton"));
        pasteButton->setMaximumSize(QSize(93, 28));

        verticalLayout->addWidget(pasteButton);

        voiceMenuButton = new QPushButton(centralWidget);
        voiceMenuButton->setObjectName(QString::fromUtf8("voiceMenuButton"));

        verticalLayout->addWidget(voiceMenuButton);


        gridLayout->addLayout(verticalLayout, 6, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));

        gridLayout->addLayout(horizontalLayout_6, 9, 2, 1, 1);

        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 8, 2, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(14);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);


        gridLayout->addLayout(horizontalLayout_4, 11, 0, 1, 3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        findLine = new QLineEdit(centralWidget);
        findLine->setObjectName(QString::fromUtf8("findLine"));

        horizontalLayout_3->addWidget(findLine);

        replaceLine = new QLineEdit(centralWidget);
        replaceLine->setObjectName(QString::fromUtf8("replaceLine"));

        horizontalLayout_3->addWidget(replaceLine);


        gridLayout->addLayout(horizontalLayout_3, 15, 0, 2, 3);

        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 7, 0, 1, 3);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 6, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(18);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, 47, -1);
        multiplyChangeButton = new QRadioButton(centralWidget);
        multiplyChangeButton->setObjectName(QString::fromUtf8("multiplyChangeButton"));

        horizontalLayout->addWidget(multiplyChangeButton);

        separatorLine = new QLineEdit(centralWidget);
        separatorLine->setObjectName(QString::fromUtf8("separatorLine"));
        separatorLine->setEnabled(true);

        horizontalLayout->addWidget(separatorLine);


        gridLayout->addLayout(horizontalLayout, 9, 0, 1, 2);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 2, 1, 1);

        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout->addWidget(textBrowser, 6, 2, 1, 1);

        voiceMenuLine = new QFrame(centralWidget);
        voiceMenuLine->setObjectName(QString::fromUtf8("voiceMenuLine"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(voiceMenuLine->sizePolicy().hasHeightForWidth());
        voiceMenuLine->setSizePolicy(sizePolicy2);
        voiceMenuLine->setSizeIncrement(QSize(0, 0));
        voiceMenuLine->setBaseSize(QSize(0, 0));
        voiceMenuLine->setFocusPolicy(Qt::NoFocus);
        voiceMenuLine->setLayoutDirection(Qt::LeftToRight);
        voiceMenuLine->setFrameShadow(QFrame::Sunken);
        voiceMenuLine->setFrameShape(QFrame::VLine);

        gridLayout->addWidget(voiceMenuLine, 2, 3, 15, 1);

        voiceMenuLayout = new QWidget(centralWidget);
        voiceMenuLayout->setObjectName(QString::fromUtf8("voiceMenuLayout"));
        s = new QVBoxLayout(voiceMenuLayout);
        s->setSpacing(6);
        s->setContentsMargins(11, 11, 11, 11);
        s->setObjectName(QString::fromUtf8("s"));
        s->setSizeConstraint(QLayout::SetNoConstraint);
        s->setContentsMargins(-1, -1, -1, 1);
        label_9 = new QLabel(voiceMenuLayout);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy3);
        QFont font;
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        label_9->setFont(font);
        label_9->setScaledContents(false);
        label_9->setAlignment(Qt::AlignCenter);

        s->addWidget(label_9);

        line_3 = new QFrame(voiceMenuLayout);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        s->addWidget(line_3);

        speakButton = new QPushButton(voiceMenuLayout);
        speakButton->setObjectName(QString::fromUtf8("speakButton"));

        s->addWidget(speakButton);

        pauseButton = new QPushButton(voiceMenuLayout);
        pauseButton->setObjectName(QString::fromUtf8("pauseButton"));
        pauseButton->setEnabled(false);

        s->addWidget(pauseButton);

        resumeButton = new QPushButton(voiceMenuLayout);
        resumeButton->setObjectName(QString::fromUtf8("resumeButton"));
        resumeButton->setEnabled(false);

        s->addWidget(resumeButton);

        stopButton = new QPushButton(voiceMenuLayout);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setEnabled(false);

        s->addWidget(stopButton);

        label_5 = new QLabel(voiceMenuLayout);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy3.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy3);

        s->addWidget(label_5);

        engineData = new QComboBox(voiceMenuLayout);
        engineData->setObjectName(QString::fromUtf8("engineData"));

        s->addWidget(engineData);

        label_6 = new QLabel(voiceMenuLayout);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy3.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy3);

        s->addWidget(label_6);

        voiceData = new QComboBox(voiceMenuLayout);
        voiceData->setObjectName(QString::fromUtf8("voiceData"));

        s->addWidget(voiceData);

        label_8 = new QLabel(voiceMenuLayout);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy3.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy3);
        label_8->setMinimumSize(QSize(0, 20));

        s->addWidget(label_8);

        languageData = new QComboBox(voiceMenuLayout);
        languageData->setObjectName(QString::fromUtf8("languageData"));

        s->addWidget(languageData);

        label_7 = new QLabel(voiceMenuLayout);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy3.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy3);
        label_7->setMinimumSize(QSize(100, 20));
        label_7->setLineWidth(1);

        s->addWidget(label_7);

        volumeSlider = new QSlider(voiceMenuLayout);
        volumeSlider->setObjectName(QString::fromUtf8("volumeSlider"));
        volumeSlider->setOrientation(Qt::Horizontal);

        s->addWidget(volumeSlider);

        label_10 = new QLabel(voiceMenuLayout);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy3.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy3);

        s->addWidget(label_10);

        rateSlider = new QSlider(voiceMenuLayout);
        rateSlider->setObjectName(QString::fromUtf8("rateSlider"));
        rateSlider->setMinimum(-100);
        rateSlider->setMaximum(99);
        rateSlider->setOrientation(Qt::Horizontal);

        s->addWidget(rateSlider);

        label_11 = new QLabel(voiceMenuLayout);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy3.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy3);

        s->addWidget(label_11);

        pitchSlider = new QSlider(voiceMenuLayout);
        pitchSlider->setObjectName(QString::fromUtf8("pitchSlider"));
        pitchSlider->setOrientation(Qt::Horizontal);

        s->addWidget(pitchSlider);


        gridLayout->addWidget(voiceMenuLayout, 2, 4, 15, 1);

        MainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindowClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 782, 26));
        menuNew = new QMenu(menuBar);
        menuNew->setObjectName(QString::fromUtf8("menuNew"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuTemplate = new QMenu(menuBar);
        menuTemplate->setObjectName(QString::fromUtf8("menuTemplate"));
        MainWindowClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindowClass->setStatusBar(statusBar);

        menuBar->addAction(menuNew->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuTemplate->menuAction());
        menuNew->addAction(actionNew);
        menuNew->addAction(actionOpen);
        menuNew->addAction(actionSave);
        menuNew->addAction(actionPrint);
        menuNew->addAction(actionExit);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuTemplate->addAction(actionShow);
        menuTemplate->addAction(actionMost_Popular);
        menuTemplate->addAction(actionAdd);

        retranslateUi(MainWindowClass);

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "MainWindow", nullptr));
        actionNew->setText(QApplication::translate("MainWindowClass", "New", nullptr));
        actionOpen->setText(QApplication::translate("MainWindowClass", "Open", nullptr));
        actionSave->setText(QApplication::translate("MainWindowClass", "Save as", nullptr));
        actionPrint->setText(QApplication::translate("MainWindowClass", "Print", nullptr));
        actionExit->setText(QApplication::translate("MainWindowClass", "Exit", nullptr));
        actionCopy->setText(QApplication::translate("MainWindowClass", "Copy", nullptr));
        actionPaste->setText(QApplication::translate("MainWindowClass", "Paste", nullptr));
        actionCut->setText(QApplication::translate("MainWindowClass", "Cut", nullptr));
        actionUndo->setText(QApplication::translate("MainWindowClass", "Undo", nullptr));
        actionRedo->setText(QApplication::translate("MainWindowClass", "Redo", nullptr));
        actionMost_Popular->setText(QApplication::translate("MainWindowClass", "Most Popular", nullptr));
        actionShow->setText(QApplication::translate("MainWindowClass", "Show", nullptr));
        actionAdd->setText(QApplication::translate("MainWindowClass", "Add Current Separator", nullptr));
        translateButton->setText(QApplication::translate("MainWindowClass", "Translate", nullptr));
        copyButton->setText(QApplication::translate("MainWindowClass", "Copy", nullptr));
        pasteButton->setText(QApplication::translate("MainWindowClass", "Paste", nullptr));
        voiceMenuButton->setText(QApplication::translate("MainWindowClass", "Voice Menu", nullptr));
        label->setText(QApplication::translate("MainWindowClass", "Find", nullptr));
        label_2->setText(QApplication::translate("MainWindowClass", "Replace", nullptr));
        multiplyChangeButton->setText(QApplication::translate("MainWindowClass", "Multiply change", nullptr));
        separatorLine->setPlaceholderText(QApplication::translate("MainWindowClass", "Input separator", nullptr));
        label_3->setText(QApplication::translate("MainWindowClass", "Input", nullptr));
        label_4->setText(QApplication::translate("MainWindowClass", "Result", nullptr));
        label_9->setText(QApplication::translate("MainWindowClass", "Voice Menu", nullptr));
        speakButton->setText(QApplication::translate("MainWindowClass", "Speak", nullptr));
        pauseButton->setText(QApplication::translate("MainWindowClass", "Pause", nullptr));
        resumeButton->setText(QApplication::translate("MainWindowClass", "Resume", nullptr));
        stopButton->setText(QApplication::translate("MainWindowClass", "Stop", nullptr));
        label_5->setText(QApplication::translate("MainWindowClass", "Engine:", nullptr));
        label_6->setText(QApplication::translate("MainWindowClass", "Voice Name:", nullptr));
        label_8->setText(QApplication::translate("MainWindowClass", "Language:", nullptr));
        label_7->setText(QApplication::translate("MainWindowClass", "Volume:", nullptr));
        label_10->setText(QApplication::translate("MainWindowClass", "Rate:", nullptr));
        label_11->setText(QApplication::translate("MainWindowClass", "Pitch:", nullptr));
        menuNew->setTitle(QApplication::translate("MainWindowClass", "File", nullptr));
        menuEdit->setTitle(QApplication::translate("MainWindowClass", "Edit", nullptr));
        menuTemplate->setTitle(QApplication::translate("MainWindowClass", "Template", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
