#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    this->setWindowTitle("Login");
    this->setWindowIcon(QIcon(":/new/img/images.jpg"));
}

Login::~Login()
{
    delete nameBot;
    delete ui;
}

void Login::on_OK_Button_clicked()
{
    *nameBot = "User";
    this->close();
}

void Login::on_Exit_Button_clicked()
{
    *nameBot = ui->line_name->text();
    this->close();
}

QString Login::login_name(){
    return *nameBot;
}

