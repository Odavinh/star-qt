#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    namebot = "Aida";
    userName = "User";

    userColor->setRgb(41,240,54);
    botColor->setRgb(255,0,0);
    standartColor->setRgb(0,0,0);
    ui->Text_message->setReadOnly(true);


    ui->radio_work->setChecked(true);
    ui->ansver_line->hide();

    ui->question_line->setText(tr("Question"));
    ui->ansver_line->setText(tr("Ansver"));

    ui->Button_send->setDefault(true);


    showBotMessage(tr("I ready to work!"));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete mmr;
    delete lrn;

    delete userColor;
    delete botColor;
    delete standartColor;
}

void MainWindow::showBotMessage(const QString &str){
    ui->Text_message->setTextColor(*botColor);
    ui->Text_message->append(text_edit + namebot +":");
    ui->Text_message->setTextColor(*standartColor);
    ui->Text_message->append( text_edit + str);
}

void MainWindow::showUserMessage(const QString &str){
    ui->Text_message->setTextColor(*userColor);
    ui->Text_message->append(text_edit + userName + ":");
    ui->Text_message->setTextColor(*standartColor);
    ui->Text_message->append(text_edit + str);
}

int MainWindow::Chrome(const QString &str)
{
    QString temp = "start chrome /new-window www." + str;
    QByteArray arr = temp.toLocal8Bit();
    const char *c_str = arr.data();
    if(temp != "" && temp != " "){
        system(c_str);
        return 1;
    }
    return 0;
}

void MainWindow::on_radio_work_clicked()
{
    ui->ansver_line->hide();
    ui->Text_message->clear();
    ui->Text_message->setText(text_edit);
    showBotMessage(tr("I ready to work!"));
}

void MainWindow::on_radio_learn_clicked()
{
    ui->ansver_line->show();
    ui->Text_message->clear();
    showBotMessage(tr("I ready to Learn!"));

}



//Menubar
void MainWindow::on_exit_triggered()
{
    this->close();
}
//LineEdit




void MainWindow::on_question_line_selectionChanged()
{
    ui->question_line->clear();
    ui->question_line->setStyleSheet("color:black");
}

void MainWindow::on_ansver_line_selectionChanged()
{
    ui->ansver_line->clear();
    ui->ansver_line->setStyleSheet("color:black");
}

void MainWindow::on_Button_send_clicked()//Button
{
    if(ui->radio_work->isChecked()){
        if("" != ui->ansver_line->text()){
            QString message = ui->question_line->text();
            showUserMessage(message);


            int result = Chrome(message);
            if(result == 1)
                showBotMessage(message + " відкрито!");
            ui->ansver_line->clear();
        }else
           showBotMessage(tr("Заповніть поле воду!!!"));

        ui->ansver_line->clear();
    }else {
        if("" != ui->question_line->text() && "" != ui->ansver_line->text()){
            showUserMessage(ui->question_line->text() + "\n" + ui->ansver_line->text());
        }

        ui->question_line->clear();
        ui->ansver_line->clear();
    }
}
