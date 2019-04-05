#include "show_database.h"
#include "ui_show_database.h"
#include<QSqlError>
#include<QSqlRecord>

Show_Database::Show_Database(QWidget *parent, const QString &databaseName,
                             const QString &tableName,
                             const QString &tableNameStatistics) :
    QDialog(parent),
    ui(new Ui::Show_Database)
{
    ui->setupUi(this);

    settings = new Settings;
    restoreGeometry(settings->getSettingsGeometyShowBD());

    *this->databaseName = databaseName;
    *this->tableNameStatistics = tableNameStatistics;
    *this->tableName = tableName;

    tableEmploeeModified = false;
    tableStatisticsModified = false;
    RowAdd = false;

    QStringList lstGender;
    lstGender << "Ч - Ж" << "Ч" <<"Ж";
    ui->BoxGender->addItems(lstGender);

    chnTblEmpl = new ChangeTableEmploee();
    chnTblEmpl->setParent(this,Qt::Window);

    chnTblStc = new ChangeTableStatisticss();
    chnTblStc->setParent(this,Qt::Window);

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


    if(userName != "")
         dbEmp.setUserName(userName);
    if(pasword != "")
        dbEmp.setPassword(pasword);

    if(!dbEmp.open()){
        qDebug() << dbEmp.lastError().text();
        QMessageBox::critical(this,"Error DataBase",dbEmp.lastError().text());
        return 1;
    }
    else{
        qDebug()<<"open db";
        modelStatistis = new QSqlTableModel(this,dbEmp);
        sqlmodel = new QSqlTableModel(this,dbEmp);
    }
    return 0;
}

int Show_Database::FullModelDataBase(){
    sqlmodel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    sqlmodel->setTable(*tableName);
    if(sqlmodel->select()){
         ui->tableEmploee->setModel(sqlmodel);
         chnTblEmpl->setModel(sqlmodel, RowAdd);
    }else{
        QMessageBox::critical(this, "Error",sqlmodel->lastError().text());
        return 1;
    }
    ui->toolBox->setCurrentIndex(0);
    return 0;
}
int Show_Database::FullModelDataBaseStatistics(){
    modelStatistis->setEditStrategy(QSqlTableModel::OnManualSubmit);
    modelStatistis->setTable(*tableNameStatistics);
    if(modelStatistis->select()){
        chnTblStc->setModel(modelStatistis);
        ui->tableStatistics->setModel(modelStatistis);
    }else {
       QMessageBox::critical(this,"Error",modelStatistis->lastError().text());
       return 1;
    }
    return 0;
}


void Show_Database::closeEvent(QCloseEvent *event){
    if(tableEmploeeModified || tableStatisticsModified){
        event->ignore();
        QMessageBox ms;
        QAbstractButton *yes = ms.addButton(tr("Так"),QMessageBox::YesRole);
        QAbstractButton *no =  ms.addButton(tr("Ні"),QMessageBox::NoRole);
        ms.setWindowTitle("Збереження даних!");
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
    dbEmp->close();
    delete settings;
    delete tableNameStatistics;
    delete tableName;
    delete databaseName;
    delete sqlmodel;
    delete modelStatistis;
    delete dbEmp;
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

void Show_Database::on_Button_cancel_clicked()
{
    sqlmodel->revertAll();
    tableEmploeeModified = false;
}
void Show_Database::on_pushButtonCancelSt_clicked()
{
    modelStatistis->revertAll();
    tableStatisticsModified = false;
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
    sqlmodel->select();
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

void Show_Database::on_remove_col_clicked()
{
    int selectRow = ui->tableEmploee->currentIndex().row();
    if(selectRow >= 0){
         qDebug()<<"delete row:"<<sqlmodel->removeRow(selectRow);
         this->update();
    }else
         QMessageBox::information(this,"",tr("Виберіть рядок!!!"));
}
void Show_Database::on_pushDeleteSt_clicked()
{
    int selectRow = ui->tableStatistics->currentIndex().row();
    if(selectRow >= 0){
        modelStatistis->removeRow(selectRow);
        ui->tableStatistics->update();
    }else
       QMessageBox::information(this,"",tr("Виберіть рядок!!!"));
}

void Show_Database::on_buttoSearch_clicked()
{
    //    query.exec("USE " + *this->databaseName + " SELECT * FROM " + *this->tableName + " WHERE Gender = 'Ч'");
    QString requestName = "[Name] = '" +ui->lineName->text() + "'";
    QString requestSurname = ui->lineEditSurname->text();
    QString requestGender = ui->BoxGender->currentText();
    QString requestPosition = ui->linePosition->text();

    if(!requestSurname.isEmpty())
        requestSurname = " AND [Surname] = '" + requestSurname + "'";
    if(!requestGender.isEmpty())
        requestGender = " AND [Gender] = '" + requestGender + "'";
    if(!requestPosition.isEmpty())
        requestPosition = " AND [Position] = '" + requestPosition + "'";
    qDebug() << requestName;
    qDebug() << requestSurname;
    qDebug() << requestGender;
    qDebug() << requestPosition;



    sqlmodel->setFilter(QString(" WHERE " + requestName + requestSurname + requestGender + requestPosition));
    sqlmodel->select();

}


