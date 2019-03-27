#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <show_database.h>
#include<QMessageBox>
#include"qsettings.h"
#include"settings.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_Button_db_clicked();

    void on_ButtonExit_clicked();

    void on_infoButton_clicked();

    void on_ButtonWindowSetings_clicked();

private:
    Ui::MainWindow *ui;
    Show_Database *dataBase;
    Settings *settings;

    int isConectDB;

    QString *driverDB;
    QString *hostName;
    QString *userName;
    QString *pasword;

    bool SetingsChangeWindow;

    QString *databaseName;
    QString *tableEmploeeName;
    QString *tableStatisticsName;

};

#endif // MAINWINDOW_H
