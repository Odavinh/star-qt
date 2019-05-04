#include "changetableanimals.h"
#include "ui_changetableanimals.h"

ChangeTableAnimals::ChangeTableAnimals(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangeTableAnimals)
{
    ui->setupUi(this);

    this->setWindowTitle("AAS");
    mapper = new QDataWidgetMapper(this);
    mapper->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);
    ui->ButtonEn_Apply->setDefault(true);

    CloseKey = new QShortcut(this);
    CloseKey->setKey(Qt::CTRL + Qt::Key_F);
    connect(CloseKey,SIGNAL(activated()),this,SLOT(on_ButtonEn_exit_clicked()));

    ui->label->setBuddy(ui->ButtonEn_Apply);
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
    mapper->submit();
}

void ChangeTableAnimals::on_ButtonEn_exit_clicked()
{
    this->close();
}
