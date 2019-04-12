#ifndef CHANGETABLEANIMALS_H
#define CHANGETABLEANIMALS_H

#include <QDialog>
#include<QAbstractItemModel>

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

private:
    Ui::ChangeTableAnimals *ui;
};

#endif // CHANGETABLEANIMALS_H
