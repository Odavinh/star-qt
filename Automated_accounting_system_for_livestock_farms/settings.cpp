#include "settings.h"
#include "ui_settings.h"
#include<QDebug>

Settings::Settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);

    settings = new QSettings(this);
    this->loadSettins();

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
    driverDB  = new QString(settings->value("driverDB","QODBC").toString());
    hostName = new QString(settings->value("hostName","ODAVINH\\SQLEXPRESS").toString());
    userName = new QString(settings->value("userName", "").toString());
    pasword = new QString(settings->value("pasword", "").toString());

    databaseName = new QString(settings->value("databaseName", "Database_of_farms").toString());
    tableEmploeeName = new QString(settings->value("tableEmploeeName", "Employee").toString());
    tableStatisticsName = new QString(settings->value("tableStatisticsName", "Statisticss").toString());

    SetingsChangeWindow  = settings->value("SetingsChangeWindow").toBool();

    settingsGeometryMain = settings->value("settingsGeometryMain").toByteArray();
    settingsGeometyShowBD = settings->value("settingsGeometyShowBD").toByteArray();

    return 1;
}

bool Settings::saveSettings()
{
    settings->setValue("databaseName", ui->lineNameDB->text());
    settings->setValue("tableEmploeeName", ui->lineNameEmploeeT->text());
    settings->setValue("tableStatisticsName", ui->lineStatisticsT->text());

    settings->setValue("driverDB", ui->lineDriver->text());
    settings->setValue("hostName", ui->lineHostName->text());
    settings->setValue("userName", ui->lineUserName->text());
    settings->setValue("pasword", ui->linePasvord->text());

    settings->setValue("SetingsChangeWindow", ui->checkBox->isChecked());
    qDebug()<<"save "<<SetingsChangeWindow<<" "<< ui->checkBox->isChecked();

    settings->setValue("settingsGeometryMain", settingsGeometryMain);
    settings->setValue("settingsGeometyShowBD", settingsGeometyShowBD);
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
    SetingsChangeWindow = ui->checkBox->isChecked();
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

void Settings::on_checkBox_stateChanged(int arg1)
{
    if(arg1 == 2)
        SetingsChangeWindow = true;
    else
        SetingsChangeWindow = false;
}
