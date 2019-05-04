#ifndef CHANGETABLEANIMALS_H
#define CHANGETABLEANIMALS_H

#include <QDialog>
#include<QAbstractItemModel>
#include<QDataWidgetMapper>
#include<QShortcut>

namespace Ui {
class ChangeTableAnimals;
}

class ChangeTableAnimals : public QDialog
{
    Q_OBJECT

public:
    explicit ChangeTableAnimals(QWidget *parent = nullptr);
    ~ChangeTableAnimals();
    void setModel(QAbstractItemModel *model,const bool &RowAdd);
    QDataWidgetMapper *mapper;

private slots:
    void on_ButtonEn_Apply_clicked();

    void on_ButtonEn_exit_clicked();

private:
    Ui::ChangeTableAnimals *ui;
    QShortcut *CloseKey;
};

#endif // CHANGETABLEANIMALS_H
