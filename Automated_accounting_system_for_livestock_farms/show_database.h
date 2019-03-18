#ifndef SHOW_DATABASE_H
#define SHOW_DATABASE_H

#include <QDialog>

namespace Ui {
class Show_Database;
}

class Show_Database : public QDialog
{
    Q_OBJECT

public:
    explicit Show_Database(QWidget *parent = nullptr);
    ~Show_Database();

private:
    Ui::Show_Database *ui;
};

#endif // SHOW_DATABASE_H
