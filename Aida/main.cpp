#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.resize(440,620);
    w.setWindowTitle("Aida");
    w.setWindowIcon(QIcon(":/new/img/images.jpg"));
    w.show();

    return a.exec();
}
