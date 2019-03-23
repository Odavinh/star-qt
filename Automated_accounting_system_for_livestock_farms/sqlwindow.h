#ifndef SQLWINDOW_H
#define SQLWINDOW_H

#include <QWidget>

namespace Ui {
class SQLWindow;
}

class SQLWindow : public QWidget
{
    Q_OBJECT

public:
    explicit SQLWindow(QWidget *parent = nullptr);
    ~SQLWindow();

private:
    Ui::SQLWindow *ui;
};

#endif // SQLWINDOW_H
