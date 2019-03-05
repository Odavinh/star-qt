#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"learn.h"
#include"memory.h"
#include<QVector>
#include<algorithm>

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
    int Chrome(const QString &str);

private slots:
    void on_radio_work_clicked();

    void on_radio_learn_clicked();

    void on_exit_triggered();

    void on_question_line_selectionChanged();

    void on_ansver_line_selectionChanged();

    void on_Button_send_clicked();



private:
    Ui::MainWindow *ui;
    memory *mmr = new memory;
    learn *lrn = new learn;

    QVector<QString> strVect;
    QString namebot;
    QString userName;
    QString text_edit;

    QColor *userColor = new QColor;
    QColor *botColor = new QColor;
    QColor *standartColor = new QColor;

};

#endif // MAINWINDOW_H
