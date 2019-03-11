#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"learn.h"
#include"memory.h"
#include"login.h"
#include<QVector>
#include<algorithm>
#include<random>
#include<QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void showUserMessage(const QString &str);
    void showBotMessage(const QString &str);

private slots:
    void on_radio_work_clicked();

    void on_radio_learn_clicked();

    void on_exit_triggered();

    void on_question_line_selectionChanged();

    void on_ansver_line_selectionChanged();

    void on_Button_send_clicked();



    void on_Button_inf_clicked();

private:
    Ui::MainWindow *ui;
    memory *mmr = new memory;
    learn *lrn = new learn;

    QVector<QString> ansverVect;
    QVector<QString> Keywords;

    QVector<QString> ansRand;
    QVector<QString> workRand;
    QVector<QString> lernRand;

    QString namebot;
    QString userName;
    QString text_edit;

    bool message;

    QColor *userColor = new QColor;
    QColor *botColor = new QColor;
    QColor *standartColor = new QColor;

};

#endif // MAINWINDOW_H
