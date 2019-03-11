#include "Setup.h"
#include "ui_setup.h"

Setup::Setup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Setup)
{
    ui->setupUi(this);
}

Setup::~Setup()
{
    delete nameBot;
    delete ui;
}

Setup::Setup(const QString &nameBot){
    *this->nameBot = nameBot;
}

void Setup::on_memory_Button_clicked()
{
    ui->memory_Button->setText(tr("Пам'ять Бота"));
}
