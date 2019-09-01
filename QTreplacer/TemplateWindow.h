#pragma once

#include <QWidget>
#include "ui_TemplateWindow.h"
#include <qdialog.h>

class TemplateWindow : public QDialog
{
	Q_OBJECT

public:
	TemplateWindow(QWidget *parent = Q_NULLPTR);
	~TemplateWindow();

private:
	Ui::TemplateWindow ui;
};
