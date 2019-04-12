#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QStatusBar>
#include<QMessageBox>
#include<QSqlTableModel>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    settings = new Settings;

    restoreGeometry(settings->getSettingsGeometryMain());

    dataBase->setShortcutEnabled(settings->getSetingsChangeWindow());

    dataBase = new Show_Database(nullptr, *settings->getDatabaseName(),
                                 *settings->getTableEmploeeName(),
                                 *settings->getTableStatisticsName(),
                                 *settings->getTableAnimalName());
    ui->progressBar->hide();
    isConectDB =  dataBase->conect_dataBase(*settings->getDriverDB(),
                                            *settings->getHostName(),
                                            *settings->getPasword(),
                                            *settings->getUserName());
}

MainWindow::~MainWindow()
{
    settings->setSettingsGeometryMain(saveGeometry());
    settings->saveSettings();
    delete settings;
    delete dataBase;
    delete ui;
}


void MainWindow::on_Button_db_clicked()
{
    ui->progressBar->show();
    ui->progressBar->setValue(30);
    if(isConectDB == 0){
        ui->progressBar->setValue(50);
        dataBase->showFullModelDataBase();
        ui->progressBar->setValue(70);
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
    dataBase->setTableEmploeeModified(false);
    dataBase->setTableStatisticsModified(false);
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
