#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <show_database.h>
#include<QMessageBox>

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

private:
    Ui::MainWindow *ui;
    Show_Database *dataBase = new Show_Database;
};

#endif // MAINWINDOW_H
