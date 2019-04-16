#include "show_database.h"
#include "ui_show_database.h"
#include<QSqlError>
#include<QSqlRecord>

#define DEBUG

Show_Database::Show_Database(QWidget *parent, const QString &databaseName,
                             const QString &tableName,
                             const QString &tableNameStatistics,
                             const QString & tableNameAnimals) :
    QDialog(parent),
    ui(new Ui::Show_Database)
{
    ui->setupUi(this);

    settings = std::make_shared<Settings>();
    restoreGeometry(settings->getSettingsGeometyShowBD());

    dbEmp = new std::shared_ptr<QSqlDatabase>;

    *this->databaseName = databaseName;
    *this->tableNameStatistics = tableNameStatistics;
    *this->tableName = tableName;
    *this->tableNameAnimals = tableNameAnimals;

    tableEmploeeModified = false;
    tableStatisticsModified = false;
    tableAnimalsModified = false;
    RowAdd = false;

    QStringList lstGender;
    lstGender << "Ч - Ж" << "Ч" <<"Ж";
    ui->BoxGender->addItems(lstGender);

    chnTblEmpl = new ChangeTableEmploee();
    chnTblEmpl->setParent(this,Qt::Window);

    chnTblStc = new ChangeTableStatisticss();
    chnTblStc->setParent(this,Qt::Window);

    chnTblAn = new ChangeTableAnimals();
    chnTblAn->setParent(this,Qt::Window);

    ui->BoxEnProfitMax->setMaximum(10000);
    ui->BoxEnProfitMin->setMinimum(-100);
    ui->BoxEnSpendingMax->setMaximum(10000);

    ui->BoxEnProfitMax->setValue(ui->BoxEnProfitMax->maximum());
    ui->BoxEnProfitMin->setValue(ui->BoxEnProfitMin->minimum());
    ui->BoxEnSpendingMax->setValue(ui->BoxEnSpendingMax->maximum());
    ui->BoxEnSpendingMin->setValue(ui->BoxEnSpendingMin->minimum());
}
int Show_Database::conect_dataBase(const QString &driver,
                                   const QString &hostName,
                                   const QString &userName,
                                   const QString &pasword){

    QSqlDatabase dbEmp = QSqlDatabase::addDatabase(driver);
    dbEmp.setDatabaseName("DRIVER={SQL Server};"
                       "Server="+hostName+";"
                       "Database="+databaseName+";"
                       "Trusted_Connection=True");


    if(userName.isEmpty())
         dbEmp.setUserName(userName);
    if(pasword.isEmpty())
        dbEmp.setPassword(pasword);

    if(!dbEmp.open()){
#ifdef DEBUG
        qDebug() << dbEmp.lastError().text();
#endif // DEBUG
        QMessageBox::critical(this,"Error DataBase",dbEmp.lastError().text());
        return 1;
    }
    else{
#ifdef DEBUG
        qDebug()<<"open db";
#endif
        modelStatistis = std::make_shared<QSqlTableModel>(this,dbEmp);
        sqlmodel = std::make_shared<QSqlTableModel>(this,dbEmp);
        modelAnimals = std::make_shared<QSqlTableModel>(this, dbEmp);
    }
    return 0;
}
template< typename T>
bool Show_Database::fullModelDataBase(QTableView  *table, T change,QSqlTableModel *model, const QString *tabeName)
{
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->setTable(*tabeName);
    if(model->select()){
         table->setModel(model);
         change->setModel(model, RowAdd);
    }else{
        QMessageBox::critical(this, "Error",sqlmodel->lastError().text());
        return 1;
    }
    return 0;
}

bool Show_Database::showFullModelDataBase(){

    fullModelDataBase(ui->tableEmploee, chnTblEmpl, sqlmodel.get(), tableName);
    ui->label_name->setText("\t\t"+sqlmodel->headerData(1, Qt::Horizontal, Qt::DisplayRole).toString());
    ui->label_surname->setText("\t\t"+sqlmodel->headerData(2, Qt::Horizontal, Qt::DisplayRole).toString());
    ui->label_Gender->setText(sqlmodel->headerData(3, Qt::Horizontal, Qt::DisplayRole).toString());
    ui->label_position->setText("\t\t"+sqlmodel->headerData(5, Qt::Horizontal, Qt::DisplayRole).toString());

    fullModelDataBase(ui->tableStatistics, chnTblStc, modelStatistis.get(), tableNameStatistics);

    fullModelDataBase(ui->tableAnimals, chnTblAn ,modelAnimals.get(), tableNameAnimals);
    ui->labelEn_number->setText("\t\t"+modelAnimals->headerData(0,Qt::Horizontal, Qt::DisplayRole).toString());
    ui->labelEn_kind->setText("\t\t"+modelAnimals->headerData(1,Qt::Horizontal, Qt::DisplayRole).toString());
    ui->labelEn_spending->setText("\t\t"+modelAnimals->headerData(2,Qt::Horizontal, Qt::DisplayRole).toString());
    ui->labelEn_profit->setText("\t\t"+modelAnimals->headerData(3,Qt::Horizontal, Qt::DisplayRole).toString());

    ui->toolBox->setCurrentIndex(0);
    return 0;
}

void Show_Database::closeEvent(QCloseEvent *event){
    if(tableEmploeeModified || tableStatisticsModified){
        event->ignore();
        QMessageBox ms;
        QAbstractButton *yes = ms.addButton(tr("Так"),QMessageBox::YesRole);
        QAbstractButton *no =  ms.addButton(tr("Ні"),QMessageBox::NoRole);
        ms.setWindowTitle(tr("Збереження даних!"));
        ms.setText(tr("Хочете зберегти зміни в таблиці?"));
        ms.exec();
        if(ms.clickedButton() == yes){
            sqlmodel->submitAll();
            modelStatistis->submitAll();
            event->accept();
        }else if(ms.clickedButton() == no){
            event->accept();
            sqlmodel->revertAll();
            modelStatistis->revertAll();
        }
    }
}

Show_Database::~Show_Database()
{
    settings->setSettingsGeometyShowBD(saveGeometry());
    delete tableNameStatistics;
    delete tableName;
    delete databaseName;
    delete ui;
}

void Show_Database::on_Button_save_clicked()
{
    sqlmodel->submitAll();
    tableEmploeeModified = false;
}
void Show_Database::on_pushsaveSt_clicked()
{
    modelStatistis->submitAll();
    tableStatisticsModified = false;
}

void Show_Database::on_ButtonEn_save_clicked()
{
    modelAnimals->submitAll();
    tableEmploeeModified = false;
}

void Show_Database::on_Button_cancel_clicked()
{
    sqlmodel->revertAll();
    tableEmploeeModified = false;
}
void Show_Database::on_pushButtonCancelSt_clicked()
{
    modelStatistis->revertAll();
    tableEmploeeModified = false;
}

void Show_Database::on_ButtonEn_cancel_clicked()
{
    modelAnimals->revertAll();
    tableEmploeeModified = false;
}

void Show_Database::on_tableEmploee_doubleClicked(const QModelIndex &index)
{
    if(index.isValid())
        tableEmploeeModified = true;

    if(settings->getSetingsChangeWindow()){
        chnTblEmpl->standartID(*sqlmodel);
        chnTblEmpl->mapper->setCurrentModelIndex(index);
        chnTblEmpl->show();
    }
}
void Show_Database::on_tableStatistics_doubleClicked(const QModelIndex &index)
{
    if(index.isValid())
        tableStatisticsModified = true;
    if(settings->getSetingsChangeWindow()){
        chnTblStc->mapper->setCurrentModelIndex(index);
        chnTblStc->show();
    }
}

void Show_Database::on_tableAnimals_doubleClicked(const QModelIndex &index)
{
    if(index.isValid())
        tableAnimalsModified = true;
    if(settings->getSetingsChangeWindow()){
        chnTblAn->mapper->setRootIndex(index);
        chnTblAn->show();
    }
}

void Show_Database::setTableStatisticsModified(bool value)
{
    tableStatisticsModified = value;
}

void Show_Database::setTableEmploeeModified(bool value)
{
    tableEmploeeModified = value;
}

void Show_Database::on_clear_table_clicked()
{
    sqlmodel->setFilter("");
    sqlmodel->select();
}

void Show_Database::on_ButtonEn_select_clicked()
{
    modelAnimals->select();
    modelAnimals->setFilter("");
}

void Show_Database::on_add_row_clicked()
{
    sqlmodel->insertRow(sqlmodel->rowCount());
    RowAdd = true;
}
void Show_Database::on_pushAddSt_clicked()
{
    modelStatistis->insertRow(modelStatistis->rowCount());
}

void Show_Database::on_ButtonEn_add_clicked()
{
    modelAnimals->insertRow(modelAnimals->rowCount());
}

void Show_Database::on_remove_col_clicked()
{
    int selectRow = ui->tableEmploee->currentIndex().row();
    if(selectRow >= 0){
#ifdef DEBUG
         qDebug()<<"delete row";
#endif
         sqlmodel->removeRow(selectRow);
         this->update();
    }else
         QMessageBox::information(this,"",tr("Виберіть рядок!!!"));
}
void Show_Database::on_pushDeleteSt_clicked()
{
    int selectRow = ui->tableStatistics->currentIndex().row();
    if(selectRow >= 0){
        modelStatistis->removeRow(selectRow);
#ifdef DEBUG
        qDebug()<< "Delete row";
#endif
        ui->tableStatistics->update();
    }else
       QMessageBox::information(this,"",tr("Виберіть рядок!!!"));
}

void Show_Database::on_ButtonEn_remove_clicked()
{
    int selectRow = ui->tableAnimals->currentIndex().row();
    if(selectRow >= 0){
        modelAnimals->revertRow(selectRow);
#ifdef DEBUG
        qDebug()<< "Delete row";
#endif
        ui->tableAnimals->update();
    }else
        QMessageBox::information(this,"",tr("Виберіть рядок!!!"));
}

void Show_Database::on_buttoSearch_clicked()
{
    QString requestName{ui->lineName->text()};
    QString requestSurname{ui->lineEditSurname->text()};
    QString requestGender{ui->BoxGender->currentText()};
    QString requestPosition{ui->linePosition->text()};

    if(requestGender == "Ч - Ж")
           requestGender.clear();

    if(!requestName.isEmpty())
        requestName = sqlmodel->headerData(1, Qt::Horizontal, Qt::DisplayRole).toString() + "='" + requestName+ "'";
    if(!requestSurname.isEmpty() && !requestName.isEmpty())
        requestSurname =  " AND "+ sqlmodel->headerData(2, Qt::Horizontal, Qt::DisplayRole).toString() + "='" + requestSurname + "'";
    else if(!requestSurname.isEmpty())
        requestSurname =  sqlmodel->headerData(2, Qt::Horizontal, Qt::DisplayRole).toString() + "='" + requestSurname + "'";
    if(!(requestSurname.isEmpty() && requestName.isEmpty()) && !requestGender.isEmpty())
        requestGender = " AND " + sqlmodel->headerData(3, Qt::Horizontal, Qt::DisplayRole).toString() + "='" + requestGender+ "'";
    else if (!requestGender.isEmpty())
         requestGender = sqlmodel->headerData(3, Qt::Horizontal, Qt::DisplayRole).toString() + "='" + requestGender+ "'";
    if(!requestSurname.isEmpty() && !requestName.isEmpty() && !requestGender.isEmpty() && !requestPosition.isEmpty())
        requestPosition = " AND " + sqlmodel->headerData(5, Qt::Horizontal, Qt::DisplayRole).toString() + "='" + requestPosition + "'";
    else if (!requestPosition.isEmpty())
         requestPosition = sqlmodel->headerData(5, Qt::Horizontal, Qt::DisplayRole).toString() + "='" + requestPosition + "'";
#ifdef DEBUG
    qDebug() << requestName;
    qDebug() << requestSurname;
    qDebug() << requestGender;
    qDebug() << requestPosition;
#endif

    sqlmodel->setFilter(QString(requestName + requestSurname + requestGender + requestPosition));
    sqlmodel->select();

}


void Show_Database::on_ButtonEn_find_clicked()
{
    QString requestNumber{ui->lineEn_number->text()};
    QString requestKind{ui->lineEn_kind->text()};
    QString requestSpendingMax{ui->BoxEnSpendingMax->text()};
    QString requestSpendingMin{ui->BoxEnSpendingMin->text()};
    QString requestProfitingMax{ui->BoxEnProfitMax->text()};
    QString requestProfitingMin{ui->BoxEnProfitMin->text()};

    if(!requestNumber.isEmpty())
        requestNumber = modelAnimals->headerData(0,Qt::Horizontal,Qt::DisplayRole).toString() + "='" + requestNumber + "'";
    if(!requestKind.isEmpty() && !requestNumber.isEmpty())
        requestKind = " AND "+ modelAnimals->headerData(1,Qt::Horizontal,Qt::DisplayRole).toString() + "='" + requestKind + "'";
    else if(!requestKind.isEmpty())
        requestKind = modelAnimals->headerData(1,Qt::Horizontal,Qt::DisplayRole).toString() + "='" + requestKind + "'";

    if(!requestNumber.isEmpty() && !requestNumber.isEmpty()){
        requestSpendingMax = " AND " + modelAnimals->headerData(2,Qt::Horizontal,Qt::DisplayRole).toString()
                + " < " + requestSpendingMax.replace(",",".") + "";
        requestSpendingMin = " AND " + modelAnimals->headerData(2,Qt::Horizontal,Qt::DisplayRole).toString()
                + " > " + requestSpendingMin.replace(",",".") + "";

        requestProfitingMax = " AND " + modelAnimals->headerData(3,Qt::Horizontal,Qt::DisplayRole).toString()
                + " < " + requestProfitingMax.replace(",",".") + "";
        requestProfitingMin = " AND " + modelAnimals->headerData(3,Qt::Horizontal,Qt::DisplayRole).toString()
                + " > " + requestProfitingMin.replace(",",".") + "";
    }
    else{
        requestSpendingMax = modelAnimals->headerData(2,Qt::Horizontal,Qt::DisplayRole).toString()
                + " < " + requestSpendingMax.replace(",",".") + "";
        requestSpendingMin = " AND " + modelAnimals->headerData(2,Qt::Horizontal,Qt::DisplayRole).toString()
                + " > " + requestSpendingMin.replace(",",".") + "";

        requestProfitingMax = " AND " + modelAnimals->headerData(3,Qt::Horizontal,Qt::DisplayRole).toString()
                + " < " + requestProfitingMax.replace(",",".") + "";
        requestProfitingMin = " AND " + modelAnimals->headerData(3,Qt::Horizontal,Qt::DisplayRole).toString()
                + " > " + requestProfitingMin.replace(",",".") + "";
    }


#ifdef DEBUG
    qDebug()<<requestNumber;
    qDebug()<<requestKind;
    qDebug()<<requestSpendingMax << " - " << requestSpendingMin;
    qDebug()<<requestProfitingMax << " - " <<requestProfitingMin;
#endif

    modelAnimals->setFilter(QString(requestNumber + requestKind
                                    + requestSpendingMax + requestSpendingMin
                                    + requestProfitingMax + requestProfitingMin));
}
