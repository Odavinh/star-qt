#include "show_database.h"
#include "ui_show_database.h"
#include<QSqlError>
#include<QSqlRecord>

Show_Database::Show_Database(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Show_Database)
{
    ui->setupUi(this);
    tableEmploeeModified = false;
    tableStatisticsModified = false;
    this->resize(980,640);
    QStringList lstGender;
    lstGender << "Ч - Ж" << "Ч" <<"Ж";
    ui->BoxGender->addItems(lstGender);
//    QSqlQuery query = QSqlQuery(db);
//    if(!query.exec("USE Database_of_farms "
//                   "SELECT * FROM Employee")){
//        qDebug()<<query.lastError().text();
//    }else{
//        while(query.next()){
//            qDebug() << query.record();
//        }
//    }

}
int Show_Database::conect_dataBase(const QString &driver,
                                   const QString &databaseName,
                                   const QString &hostName,
                                   const QString &userName,
                                   const QString &pasword){

    *this->databaseName = databaseName;
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
    else
        qDebug()<<"open db";
    return 0;
}

int Show_Database::FullModelDataBase(const QString & tableName){
    *this->tableName = tableName;
    sqlmodel = new QSqlTableModel(this,*dbEmp);
    sqlmodel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    sqlmodel->setTable(tableName);
    if(sqlmodel->select()){
        ui->tableEmploee->setModel(sqlmodel);
    }else{
        QMessageBox::critical(this, "Error",sqlmodel->lastError().text());
        return 1;
    }
    return 0;
}
int Show_Database::FullModelDataBaseStatistics(const QString &tableName){
    *this->tableNameStatistics = tableName;
    modelStatistis = new QSqlTableModel(this,*dbEmp);
    modelStatistis->setEditStrategy(QSqlTableModel::OnManualSubmit);
    modelStatistis->setTable(tableName);
    if(modelStatistis->select())
        ui->tableStatistics->setModel(modelStatistis);
    else {
       QMessageBox::critical(this,"Error",modelStatistis->lastError().text());
       return 1;
    }
    ui->tableEmploee->update();
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
    dbEmp->close();
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
    if(index.isValid()){
        tableEmploeeModified = true;
    }
}
void Show_Database::on_tableStatistics_doubleClicked(const QModelIndex &index)
{
    if(index.isValid())
        tableStatisticsModified = true;
}

void Show_Database::on_clear_table_clicked()
{
    sqlmodel->select();
}

void Show_Database::on_add_row_clicked()
{
    qDebug() << "insert row"<<sqlmodel->insertRow(sqlmodel->rowCount());
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
        ui->tableStatistics->update();////////////////
    }else
       QMessageBox::information(this,"",tr("Виберіть рядок!!!"));
}

void Show_Database::on_buttoSearch_clicked()
{
    QString request = " ";
//    bool temp = false;

//    if(ui->lineName->text() != nullptr){
//        request + "[Name] = '" + ui->lineName->text() + "'";
//        temp = true;
//    }
//    if(temp)
//        request + " END ";temp = false;
//    if(ui->lineEditSurname->text() != nullptr){
//        request + "[Surname] = '" + ui->lineEditSurname->text() + "'";
//        temp = true;
//    }
//    if(temp)
//        request + " END ";temp = false;

//    if(ui->linePosition->text() != nullptr){
//       request + "[Position] = '" + ui->linePosition->text() +"'";
//    }
        QSqlQueryModel *qModel  = new QSqlQueryModel;
//        qModel->setQuery(QSqlQuery("USE " + *this->databaseName +
//                         " SELECT * FROM " + *this->tableName +
//                         " WHERE Gender = 'Ч'",*dbEmp));
        //QSqlQuery *query = new QSqlQuery(*dbEmp);

        qModel->setQuery("USE " + *this->databaseName + " SELECT * FROM " + *this->tableName + " WHERE Gender = 'Ч'");
//        qModel->setHeaderData(0 ,Qt::Horizontal,"ID");
        qDebug() << sqlmodel->filter();
        if(request != ""){
            //ui->tableEmploee->setModel(sqlmodel);
            //ui->tableEmploee->update();
        }
}


void Show_Database::on_toolBox_currentChanged(int index)
{
    if(index == 0)
        this->resize(980,640);
    else if(index == 1)
        this->resize(640,640);

}
