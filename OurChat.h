#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_OurChat.h"

class OurChat : public QMainWindow
{
    Q_OBJECT

public:
    OurChat(QWidget *parent = nullptr);
    ~OurChat();

private:
    Ui::OurChatClass ui;
};
