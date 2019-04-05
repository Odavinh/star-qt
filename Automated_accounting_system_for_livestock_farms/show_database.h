#ifndef SHOW_DATABASE_H
#define SHOW_DATABASE_H

#include <QDialog>
#include<QDebug>
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QSqlTableModel>
#include<QMessageBox>
#include<QCloseEvent>
#include<QTableView>
#include<QSqlQueryModel>
#include"changetableemploee.h"
#include"changetablestatisticss.h"
#include"settings.h"


namespace Ui {
class Show_Database;
}

class Show_Database : public QDialog{
    Q_OBJECT

public:
    explicit Show_Database(QWidget *parent = nullptr,
                           const QString &databaseName = "Database_of_farms",
                           const QString &tableName = nullptr,
                           const QString &tableNameStatistics = "Statisticss");
    ~Show_Database();
    int conect_dataBase(const QString & driver,
                        const QString & hostName,
                        const QString & userName,
                        const QString & pasword);
    int FullModelDataBase();
    int FullModelDataBaseStatistics();

    void setTableEmploeeModified(bool value);

    void setTableStatisticsModified(bool value);

private slots:
    void on_Button_save_clicked();

    void on_Button_cancel_clicked();

    void on_tableEmploee_doubleClicked(const QModelIndex &index);

    void on_clear_table_clicked();

    void on_add_row_clicked();

    void on_remove_col_clicked();

    void on_buttoSearch_clicked();

    void on_pushAddSt_clicked();

    void on_pushDeleteSt_clicked();

    void on_pushsaveSt_clicked();

    void on_pushButtonCancelSt_clicked();

    void on_tableStatistics_doubleClicked(const QModelIndex &index);



private:
    Ui::Show_Database *ui;
    QSqlDatabase *dbEmp = new QSqlDatabase;
    QSqlTableModel *sqlmodel;
    QSqlTableModel *modelStatistis;
    ChangeTableEmploee *chnTblEmpl;
    ChangeTableStatisticss *chnTblStc;
    Settings *settings;
    QString *tableNameStatistics = new QString;
    QString *tableName = new QString;
    QString *databaseName = new QString;
    bool tableEmploeeModified;
    bool tableStatisticsModified;
    bool RowAdd;

    void closeEvent(QCloseEvent *event);
};

#endif // SHOW_DATABASE_H
