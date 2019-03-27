#include "changetablestatisticss.h"
#include "ui_changetablestatisticss.h"

ChangeTableStatisticss::ChangeTableStatisticss(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangeTableStatisticss)
{
    ui->setupUi(this);

    mapper = new QDataWidgetMapper(this);
    mapper->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);

    ui->BoxCosts->setMaximum(1000000);
    ui->BoxProfit->setMaximum(1000000);
}

void ChangeTableStatisticss::setModel(QAbstractItemModel *model){
    mapper->setModel(model);
    mapper->addMapping(ui->dateEdit, 0);
    mapper->addMapping(ui->BoxCosts, 1);
    mapper->addMapping(ui->BoxProfit, 2);
    mapper->addMapping(ui->textEditReport, 3, "plainText");
}

ChangeTableStatisticss::~ChangeTableStatisticss()
{
    delete ui;
}


void ChangeTableStatisticss::on_ButtonClose_clicked()
{
    close();
}

void ChangeTableStatisticss::on_ButtonApply_clicked()
{
    mapper->submit();
}
