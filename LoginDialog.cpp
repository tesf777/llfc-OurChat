#include "LoginDialog.h"

LoginDialog::LoginDialog(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	//���л��ź�
	connect(ui.register_btn,&QPushButton::clicked,this,&LoginDialog::SwitchReg);
}

LoginDialog::~LoginDialog()
{}
