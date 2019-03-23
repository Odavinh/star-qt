#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QStatusBar>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->progressBar->hide();
}

MainWindow::~MainWindow()
{
    delete dataBase;
    delete ui;
}


void MainWindow::on_Button_db_clicked()
{
    ui->progressBar->show();
    ui->progressBar->setValue(0);
    if(0 == dataBase->conect_dataBase("QODBC","Database_of_farms","ODAVINH\\SQLEXPRESS","","")){
        dataBase->FullModelDataBaseStatistics("Statisticss");
        ui->progressBar->setValue(50);
        dataBase->FullModelDataBase("Employee");
    }
    ui->progressBar->setValue(90);
    dataBase->show();
    ui->progressBar->setValue(100);
    ui->progressBar->hide();
    dataBase->exec();
}
