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
#include<memory>
#include"changetableemploee.h"
#include"changetablestatisticss.h"
#include"changetableanimals.h"
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
                           const QString &tableNameStatistics = "Statisticss",
                           const QString &tableNameAnimals = "Animals");
    ~Show_Database();
    int conect_dataBase(const QString & driver,
                        const QString & hostName,
                        const QString & userName,
                        const QString & pasword);
private:
    template<typename T>
    bool fullModelDataBase(QTableView  *table, T change,QSqlTableModel *moel,const QString *tabeName);
public:
    bool showFullModelDataBase();
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



    void on_ButtonEn_save_clicked();

    void on_ButtonEn_cancel_clicked();

    void on_ButtonEn_select_clicked();

    void on_ButtonEn_remove_clicked();

    void on_ButtonEn_add_clicked();

    void on_tableAnimals_doubleClicked(const QModelIndex &index);

    void on_ButtonEn_find_clicked();

private:
    Ui::Show_Database *ui;
    std::shared_ptr <QSqlDatabase> *dbEmp;

    std::shared_ptr<QSqlTableModel> sqlmodel;
    std::shared_ptr<QSqlTableModel> modelStatistis;
    std::shared_ptr<QSqlTableModel> modelAnimals;

    ChangeTableEmploee *chnTblEmpl;
    ChangeTableStatisticss *chnTblStc;
    ChangeTableAnimals *chnTblAn;

    std::shared_ptr<Settings> settings;
    QString *tableNameStatistics = new QString;
    QString *tableName = new QString;
    QString *tableNameAnimals = new QString;
    QString *databaseName = new QString;

    bool tableEmploeeModified;
    bool tableStatisticsModified;
    bool tableAnimalsModified;
    bool RowAdd;

    void closeEvent(QCloseEvent *event);
};

#endif // SHOW_DATABASE_H
