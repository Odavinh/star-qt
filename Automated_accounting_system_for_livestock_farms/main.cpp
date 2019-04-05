#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QApplication::setOrganizationName("49");
    QApplication::setApplicationName("AAS");
    QApplication::setApplicationVersion("1.03");
    MainWindow w;
    w.show();

    return a.exec();
}
