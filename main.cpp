#include "OurChat.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    OurChat w;
    w.show();
    return a.exec();
}
