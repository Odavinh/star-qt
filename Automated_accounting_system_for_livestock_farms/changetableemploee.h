#ifndef CHANGETABLEEMPLOEE_H
#define CHANGETABLEEMPLOEE_H

#include <QDialog>
#include<QDataWidgetMapper>

namespace Ui {
class ChangeTableEmploee;
}

class ChangeTableEmploee : public QDialog
{
    Q_OBJECT

public:
    explicit ChangeTableEmploee(QWidget *parent = nullptr);
    ~ChangeTableEmploee();
    void setModel(QAbstractItemModel *model,const bool &RowAdd);

     QDataWidgetMapper *mapper;

private slots:
     void on_ButtonClose_clicked();

     void on_ButtonApply_clicked();

private:
    Ui::ChangeTableEmploee *ui;
};

#endif // CHANGETABLEEMPLOEE_H
