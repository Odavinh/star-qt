#ifndef CHANGETABLESTATISTICSS_H
#define CHANGETABLESTATISTICSS_H

#include <QDialog>
#include<QDataWidgetMapper>

namespace Ui {
class ChangeTableStatisticss;
}

class ChangeTableStatisticss : public QDialog
{
    Q_OBJECT

public:
    explicit ChangeTableStatisticss(QWidget *parent = nullptr);
    ~ChangeTableStatisticss();
    void setModel(QAbstractItemModel *model, const bool &RowAdd  = 0);

    QDataWidgetMapper *mapper;

private slots:
    void on_ButtonClose_clicked();

    void on_ButtonApply_clicked();

private:
    Ui::ChangeTableStatisticss *ui;
};

#endif // CHANGETABLESTATISTICSS_H
