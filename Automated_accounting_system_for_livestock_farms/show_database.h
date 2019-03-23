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


namespace Ui {
class Show_Database;
}

class Show_Database : public QDialog
{
    Q_OBJECT

public:
    explicit Show_Database(QWidget *parent = nullptr);
    ~Show_Database();
    int conect_dataBase(const QString & driver,
                        const QString & databaseName,
                        const QString & hostName,
                        const QString & userName,
                        const QString & pasword);
    int FullModelDataBase(const QString & tableName);
    int FullModelDataBaseStatistics(const QString &tableName);

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

    void on_toolBox_currentChanged(int index);

private:
    Ui::Show_Database *ui;
    QSqlDatabase *dbEmp = new QSqlDatabase;
    QSqlTableModel *sqlmodel;
    QSqlTableModel *modelStatistis;
    QString *tableNameStatistics = new QString;
    QString *tableName = new QString;
    QString *databaseName = new QString;
    bool tableEmploeeModified;
    bool tableStatisticsModified;

    void closeEvent(QCloseEvent *event);
};

#endif // SHOW_DATABASE_H
