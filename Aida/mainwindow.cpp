#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mmr->read_the_file();
    lrn->read_learn_file();

    Login *window_login = new Login();
    window_login->show();
    window_login->exec();

    namebot = "Aida";
    userName = window_login->login_name();

    userColor->setRgb(41,240,54);
    botColor->setRgb(255,0,0);
    standartColor->setRgb(0,0,0);
    ui->Text_message->setReadOnly(true);

    Keywords.append(tr("відкриваю "));
    Keywords.append(tr("запускаю "));

    ui->radio_work->setChecked(true);
    ui->ansver_line->hide();
    ui->Button_inf->hide();

    ui->question_line->setText(tr("Question"));
    ui->ansver_line->setText(tr("Ansver"));

    ui->Button_send->setDefault(true);

    ansRand.append(tr("Запам'ятала!"));
    ansRand.append(tr("Це уже в памяті!!"));
    ansRand.append(tr("Не складно!"));
    ansRand.append(tr("Цікаво!"));
    ansRand.append("Продовжуєм?");
    ansRand.append("Цікаво)");

    workRand.append(tr("Я готава до роботи!!!"));
    workRand.append(tr("Починаємо працювати?"));
    workRand.append(tr("Що від мене потрібно?"));

    lernRand.append(tr("Готова гризти граніт науки!!"));
    lernRand.append(tr("Готова до навчання!"));
    lernRand.append(tr("А можна щось цікаве сьогодні!"));


    showBotMessage(workRand.at(rand() % workRand.size()));
}

MainWindow::~MainWindow()
{

    mmr->write_file();
    lrn->write_learn_file();
    delete mmr;
    delete lrn;

    delete userColor;
    delete botColor;
    delete standartColor;

    delete ui;
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


void MainWindow::on_radio_work_clicked()
{
    ui->Button_inf->hide();
    ui->ansver_line->hide();
    ui->Text_message->clear();
    ui->Text_message->setText(text_edit);
    showBotMessage(workRand.at(rand() % workRand.size()));
}

void MainWindow::on_radio_learn_clicked()
{
    if(message){
        on_Button_inf_clicked();
        message = false;
    }
    ui->Text_message->clear();
    ui->Button_inf->show();
    ui->ansver_line->show();
    if(!ansverVect.empty()){
        QString *temp = new QString(tr("Я не знаю відповіді на ці запитання!!\n"));
        showBotMessage(lernRand.at(rand() % lernRand.size()));
        foreach (auto  i, ansverVect) {
        temp->append(i);
        }
        showBotMessage(*temp);
        delete temp;
    }else
        showBotMessage(tr("Немає не відомих питань на даний момент!!!"));
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
        QString message = ui->question_line->text();
        if("" != message){
            showUserMessage(message);
            bool resulr_equal_name = std::equal(namebot.begin(),
                                           namebot.end(),
                                           message.begin());

            if(resulr_equal_name)
                message.remove(namebot + " ");//Видалення імені бота із строки


            QString  ansver = mmr->find_map(message);
            if(ansver == " "){
                ansverVect.append(message);
                showBotMessage(tr("Я не знаю відповіді на це питання!"));
            }else {
                showBotMessage(ansver);
                foreach (auto i,Keywords ) {
                    bool result_equal_keywords = std::equal(i.begin(),
                                                            i.end(),
                                                            ansver.begin());
                    if(result_equal_keywords){
                        ansver.remove(i + " ");//Видалення ключового слова із строки!
                        if(i == Keywords.at(0)){//Використання ключових слів!
                            ansver.remove(Keywords.at(0));
                            int open = mmr->Chrome(ansver);
                            if(open == 0)
                                showBotMessage(ansver + " не можу віжкрити!");
                            ui->question_line->clear();
                        }else if(i == Keywords.at(1)){
                            ansver.remove(Keywords.at(1));
                            int open = mmr->open_program(ansver);
                            if(open == 0)
                               showBotMessage(ansver + " не можу запустити");
                            ui->question_line->clear();
                        }
                    }else
                        ui->question_line->clear();
                }
            }
         }else
            showBotMessage("Ви нічого не ввели!");
    }else {
        if("" != ui->question_line->text() && "" != ui->ansver_line->text()){
            QString *questionStrTemp = new QString(ui->question_line->text());
            QString *ansverStrTemp = new QString(ui->ansver_line->text());
            showUserMessage(*questionStrTemp + "\n" + *ansverStrTemp);
            mmr->append(*questionStrTemp, *ansverStrTemp);
            showBotMessage(ansRand.at(rand()% ansRand.size()));
            ansverVect.clear();
        }

        ui->question_line->clear();
        ui->ansver_line->clear();
    }
}




void MainWindow::on_Button_inf_clicked()
{
        QMessageBox::information(this,tr("Увага!!!"),tr("Під час створення відповіді на запитання ") +
                                                 tr("використовуйте сигнатуру типу: \n")+
                                                 tr("Для сайтів\n")
                                                + Keywords.at(0) + tr("siteAddress.com\n")+
                                                 tr("Для програм\n")
                                                + Keywords.at(1) + tr("programName\n")+
                                                 tr("Для відкривання файлів\n")
                                                + Keywords.at(1) + tr("D:\\Git\\starе-qt\\Aida.exe"));

}
