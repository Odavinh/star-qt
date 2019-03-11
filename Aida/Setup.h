#ifndef SETUP_H
#define SETUP_H

#include <QDialog>
#include"ui_setup.h"

namespace Ui {
class Setup;
}

class Setup : public QDialog
{
    Q_OBJECT

public:
    explicit Setup(QWidget *parent = nullptr);
    Setup();
    Setup(const QString &nameBot);
    ~Setup();

private slots:
    void on_memory_Button_clicked();

private:
    Ui::Setup *ui;
    QString *nameBot = new QString;
};

#endif // SETUP_H
