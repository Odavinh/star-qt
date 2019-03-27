#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QStatusBar>
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     settings = new Settings;
     restoreGeometry(settings->getSettingsGeometryMain());

    databaseName = new QString("Database_of_farms");
    tableEmploeeName = new QString("Employee");
    tableStatisticsName = new QString("Statisticss");

    driverDB = new QString("QODBC");
    hostName = new QString("ODAVINH\\SQLEXPRESS");
    pasword = new QString("");
    userName = new QString("");
    SetingsChangeWindow = dataBase->GetSetingsChangeWindow();

    dataBase = new Show_Database(nullptr, *databaseName, *tableEmploeeName, *tableStatisticsName);
    ui->progressBar->hide();
    isConectDB =  dataBase->conect_dataBase(*driverDB , *hostName, *pasword, *userName);
}

MainWindow::~MainWindow()
{
    settings->setSettingsGeometryMain(saveGeometry());
    delete settings;
    delete driverDB;
    delete hostName;
    delete pasword;
    delete userName;
    delete tableEmploeeName;
    delete tableStatisticsName;
    delete databaseName;
    delete dataBase;
    delete ui;
}


void MainWindow::on_Button_db_clicked()
{
    ui->progressBar->show();
    ui->progressBar->setValue(0);
    if(isConectDB == 0){
        ui->progressBar->setValue(50);
        dataBase->FullModelDataBaseStatistics();
        ui->progressBar->setValue(70);
        dataBase->FullModelDataBase();
    }
    ui->progressBar->setValue(90);
    dataBase->show();
    ui->progressBar->setValue(100);
    ui->progressBar->hide();
    dataBase->exec();
}

void MainWindow::on_ButtonExit_clicked()
{
    settings->close();
    dataBase->close();
    close();
}

void MainWindow::on_infoButton_clicked()
{
    QMessageBox::aboutQt(this);
}



void MainWindow::on_ButtonWindowSetings_clicked()
{
    settings->show();
    settings->exec();
}
