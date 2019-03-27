#include "settings.h"
#include "ui_settings.h"
#include<QDebug>

Settings::Settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);

    settings = new QSettings(this);
    loadSettins();

    ui->checkBox->setChecked(SetingsChangeWindow);
    ui->lineDriver->setText(*driverDB);
    ui->lineNameDB->setText(*databaseName);
    ui->linePasvord->setText(*pasword);
    ui->lineHostName->setText(*hostName);
    ui->lineUserName->setText(*userName);
    ui->lineStatisticsT->setText(*tableStatisticsName);
    ui->lineNameEmploeeT->setText(*tableEmploeeName);
}

Settings::~Settings()
{
    delete driverDB;
    delete hostName;
    delete pasword;
    delete userName;
    delete tableEmploeeName;
    delete tableStatisticsName;
    delete databaseName;
    delete ui;
}

bool Settings::loadSettins()
{
    driverDB  = new QString();
    hostName = new QString();
    userName = new QString();
    pasword = new QString();

    databaseName = new QString();
    tableEmploeeName = new QString();
    tableStatisticsName = new QString();

    SetingsChangeWindow = true;
    qDebug()<<settingsGeometryMain;

    return 1;
}

bool Settings::saveSettings()
{

    return 1;
}

QString *Settings::getDriverDB() const{return driverDB;}

QString *Settings::getHostName() const{return hostName;}

QString *Settings::getUserName() const{ return userName;}

QString *Settings::getPasword() const{return pasword;}

bool Settings::getSetingsChangeWindow() const{return SetingsChangeWindow;}

QString *Settings::getDatabaseName() const{return databaseName;}

QString *Settings::getTableEmploeeName() const{return tableEmploeeName;}

QString *Settings::getTableStatisticsName() const{return tableStatisticsName;}

QByteArray Settings::getSettingsGeometryMain() const{
    return settingsGeometryMain;
}

QByteArray Settings::getSettingsGeometyShowBD() const{
    return settingsGeometyShowBD;
}

void Settings::setSettingsGeometryMain(const QByteArray &value){
    settingsGeometryMain = value;
}

void Settings::setSettingsGeometyShowBD(const QByteArray &value){
    settingsGeometyShowBD = value;
}

void Settings::on_ButtonSave_clicked()
{
    saveSettings();
}

void Settings::on_ButtonClose_clicked()
{
    close();
}

void Settings::on_ButtonStandartSetings_clicked()
{
    ui->checkBox->setChecked(true);
    ui->lineDriver->setText("QODBC");
    ui->lineNameDB->setText("Database_of_farms");
    ui->linePasvord->setText("");
    ui->lineHostName->setText("ODAVINH\\SQLEXPRESS");
    ui->lineUserName->setText("");
    ui->lineStatisticsT->setText("Statisticss");
    ui->lineNameEmploeeT->setText("Employee");
}
