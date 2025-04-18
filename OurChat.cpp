#include "OurChat.h"


OurChat::OurChat(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    _login_dialog = new LoginDialog();
    setCentralWidget(_login_dialog);
    _login_dialog->show();

    _register_dialog = new RegisterDialog();
    // 创建并注册消息链接
    connect(_login_dialog,&LoginDialog::SwitchReg , this, &OurChat::SlotSwitchReg);
}

OurChat::~OurChat()
{
    //if (_login_dialog)
    //{
    //    delete _login_dialog;
    //    _login_dialog = nullptr;
    //}
    //if (_register_dialog)
    //{
    //    delete _register_dialog;
    //    _register_dialog = nullptr;
    //}
}

void OurChat::SlotSwitchReg()
{
    setCentralWidget(_register_dialog);
    _login_dialog->hide();
    _register_dialog->show();
}
