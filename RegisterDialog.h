#pragma once

#include <QDialog>
#include "ui_RegisterDialog.h"

class RegisterDialog : public QDialog
{
	Q_OBJECT

public:
	RegisterDialog(QWidget *parent = nullptr);
	~RegisterDialog();

private:
	Ui::RegisterDialogClass ui;
};
