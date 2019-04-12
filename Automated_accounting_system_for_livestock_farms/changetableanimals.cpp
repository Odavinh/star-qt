#include "changetableanimals.h"
#include "ui_changetableanimals.h"

ChangeTableAnimals::ChangeTableAnimals(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangeTableAnimals)
{
    ui->setupUi(this);
}

ChangeTableAnimals::~ChangeTableAnimals()
{
    delete ui;
}

void ChangeTableAnimals::setModel(QAbstractItemModel *model, const bool &RowAdd)
{

}
