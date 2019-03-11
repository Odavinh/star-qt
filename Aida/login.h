#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include<QIcon>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();
    QString login_name(); 

private slots:
    void on_OK_Button_clicked();
    void on_Exit_Button_clicked();

private:
    Ui::Login *ui;
    QString *nameBot = new QString;
};

#endif // LOGIN_H
