/********************************************************************************
** Form generated from reading UI file 'TemplateWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEMPLATEWINDOW_H
#define UI_TEMPLATEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TemplateWindow
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *TemplateWindow)
    {
        if (TemplateWindow->objectName().isEmpty())
            TemplateWindow->setObjectName(QString::fromUtf8("TemplateWindow"));
        TemplateWindow->resize(400, 300);
        pushButton = new QPushButton(TemplateWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 60, 93, 28));

        retranslateUi(TemplateWindow);

        QMetaObject::connectSlotsByName(TemplateWindow);
    } // setupUi

    void retranslateUi(QWidget *TemplateWindow)
    {
        TemplateWindow->setWindowTitle(QApplication::translate("TemplateWindow", "TemplateWindow", nullptr));
        pushButton->setText(QApplication::translate("TemplateWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TemplateWindow: public Ui_TemplateWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMPLATEWINDOW_H
