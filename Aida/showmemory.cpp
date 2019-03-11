#include "showmemory.h"


ShowMemory::ShowMemory(QWidget *parent, const std::map<QString,QString> & mapMemory) :
    QDialog(parent),
    ui(new Ui::ShowMemory)
{
    ui->setupUi(this);
    foreach (auto i, mapMemory) {
       this->mapMemory.emplace(i.first,i.second);
    }
    ui->User_message->setReadOnly(true);
    ui->Aida_message->setReadOnly(true);
}

ShowMemory::~ShowMemory()
{
    delete ui;
}

void ShowMemory::Show_memory(){
    foreach (auto i, mapMemory) {
        ui->User_message->append(i.first);
        ui->Aida_message->append(i.second);
    }
}
