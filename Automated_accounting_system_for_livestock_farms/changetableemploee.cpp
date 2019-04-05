#include "changetableemploee.h"
#include "ui_changetableemploee.h"

ChangeTableEmploee::ChangeTableEmploee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangeTableEmploee)
{
    ui->setupUi(this);

    mapper = new QDataWidgetMapper(this);
    mapper->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);

    RowAdd = true;
    ui->BoxSalaru->setMaximum(10);
    ui->BoxSalaru->setMaximum(20000);
    ui->BoxID->setMaximum(10000);
}

ChangeTableEmploee::~ChangeTableEmploee()
{
    delete ui;
}

void ChangeTableEmploee::setModel(QAbstractItemModel *model, const bool &RowAdd)
{
    this->RowAdd = RowAdd;
    if(RowAdd)
        ui->BoxID->setMinimum(model->rowCount());


    mapper->setModel(model);
    mapper->addMapping(ui->BoxID, 0);
    mapper->addMapping(ui->lineName, 1);
    mapper->addMapping(ui->lineSurname, 2);
    mapper->addMapping(ui->BoxGender, 3);
    mapper->addMapping(ui->dateEdit, 4);
    mapper->addMapping(ui->linePosition, 5);
    mapper->addMapping(ui->BoxSalaru, 6);
    mapper->addMapping(ui->lineSba, 7);
    mapper->addMapping(ui->LineNumber,8);
    mapper->addMapping(ui->lineEmail, 9);
}

void ChangeTableEmploee::standartID(QAbstractItemModel &model)
{
    ui->BoxID->setMinimum(model.rowCount());
}

void ChangeTableEmploee::on_ButtonClose_clicked()
{
    close();
}

void ChangeTableEmploee::on_ButtonApply_clicked()
{
    mapper->submit();
}
