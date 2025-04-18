#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_OurChat.h"
#include "LoginDialog.h"
#include "RegisterDialog.h"

class OurChat : public QMainWindow
{
    Q_OBJECT

public:
    OurChat(QWidget *parent = nullptr);
    ~OurChat();
public slots:
    void SlotSwitchReg();
private:
    Ui::OurChatClass ui;
    LoginDialog* _login_dialog;
    RegisterDialog* _register_dialog;
};
