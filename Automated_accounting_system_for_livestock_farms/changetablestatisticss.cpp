#include "changetablestatisticss.h"
#include "ui_changetablestatisticss.h"
#include<QDate>

ChangeTableStatisticss::ChangeTableStatisticss(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangeTableStatisticss)
{
    ui->setupUi(this);
    this->setWindowTitle("AAS");

    mapper = new QDataWidgetMapper(this);
    mapper->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);

    ui->BoxCosts->setMaximum(1000000);
    ui->BoxProfit->setMaximum(1000000);
    ui->dateEdit->setText(QDate::currentDate().toString());

    CloseKey = new QShortcut(this);
    CloseKey->setKey(Qt::CTRL + Qt::Key_F);
    connect(CloseKey,SIGNAL(activated()),this,SLOT(on_ButtonClose_clicked()));

    ui->ButtonApply->setDefault(true);
    ui->labelData->setBuddy(ui->ButtonApply);
}

void ChangeTableStatisticss::setModel(QAbstractItemModel *model, const bool &RowAdd){
    mapper->setModel(model);
    mapper->addMapping(ui->dateEdit, 0);
    mapper->addMapping(ui->BoxCosts, 1);
    mapper->addMapping(ui->BoxProfit, 2);
    mapper->addMapping(ui->textEditReport, 3, "plainText");
}

void ChangeTableStatisticss::performanceData(const float &Costs, const float &Profit)
{
    ui->BoxCosts->setValue(static_cast<double>(Costs));
    ui->BoxProfit->setValue(static_cast<double>(Profit));
}

ChangeTableStatisticss::~ChangeTableStatisticss()
{
    delete mapper;
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
