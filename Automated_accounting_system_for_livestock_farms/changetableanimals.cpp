#include "changetableanimals.h"
#include "ui_changetableanimals.h"

ChangeTableAnimals::ChangeTableAnimals(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangeTableAnimals)
{
    ui->setupUi(this);

    mapper = new QDataWidgetMapper(this);
    mapper->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);
}

ChangeTableAnimals::~ChangeTableAnimals()
{
    delete ui;
}

void ChangeTableAnimals::setModel(QAbstractItemModel *model, const bool &RowAdd)
{
    mapper->setModel(model);
    mapper->addMapping(ui->BoxEn_Number,0);
    mapper->addMapping(ui->lineKind,1);
    mapper->addMapping(ui->BoxEn_Spending, 2);
    mapper->addMapping(ui->BoxEn_Profit,3);

}

void ChangeTableAnimals::on_ButtonEn_Apply_clicked()
{
    this->close();
}

void ChangeTableAnimals::on_ButtonEn_exit_clicked()
{
    mapper->submit();
}
