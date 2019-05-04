#include "information.h"
#include "ui_information.h"
#include<QMessageBox>

Information::Information(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Information)
{
    ui->setupUi(this);
    this->setWindowTitle("AAS");
    this->resize(420,410);
    ui->textEdit->setEnabled(false);
}

Information::~Information()
{
    delete ui;
}

void Information::on_ButtonExit_clicked()
{
    this->close();
}

void Information::on_ButtonGit_clicked()
{
    system("start chrome /new-window https://github.com/Odavinh/start-qt/tree/master/Automated_accounting_system_for_livestock_farms");
}

void Information::on_ButtonQT_clicked()
{
    QMessageBox::aboutQt(this);
}
