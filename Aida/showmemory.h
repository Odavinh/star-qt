#ifndef SHOWMEMORY_H
#define SHOWMEMORY_H

#include <QDialog>
#include<QMap>

namespace Ui {
class ShowMemory;
}

class ShowMemory : public QDialog
{
    Q_OBJECT

public:
    explicit ShowMemory(QWidget *parent = nullptr,const std::map<QString,QString> & mapMemory = {});
    ~ShowMemory();
    void Show_memory();

private:
    Ui::ShowMemory *ui;
    std::map<QString,QString> mapMemory;
};

#endif // SHOWMEMORY_H
