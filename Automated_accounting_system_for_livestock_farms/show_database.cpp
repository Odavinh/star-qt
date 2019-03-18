#include "show_database.h"
#include "ui_show_database.h"

Show_Database::Show_Database(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Show_Database)
{
    ui->setupUi(this);
}

Show_Database::~Show_Database()
{
    delete ui;
}
