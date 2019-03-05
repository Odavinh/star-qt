#include "learn.h"

learn::learn()
{

}



void learn::write_learn_file(){
    QFile *file = new QFile("learn.txt");
    QTextStream stream(file);

    if(file->open(QFile::WriteOnly | QFile::Text)){
        foreach (auto i, strV) {
           stream << i.toLower() + "\n";
        }
        file->close();
    }
    delete file;
}

void learn::read_learn_file(){
    QFile *file = new QFile("learn.txt");
    QTextStream stream(file);
    QString temp = " ";

    if(file->open(QFile::ReadOnly | QFile::Text)){
        while(!(temp == "")){
            temp = "";
            temp = stream.readLine();
            strV.append(temp);
        }
        file->close();
    }
    delete file;
}

QString learn::find(const QString &str)
{
    foreach (auto i, strV) {
       if(i.toLower() == str.toLower())
           return i;
    }
    return " ";
}

void learn::append(const QString &str){
    strV.append(str.toLower());
}

void learn::erase(const QString &str){
    int it = 0;
    foreach (auto i, strV) {
        it ++;
       if(i.toLower() == str.toLower())
           strV.remove(it);
    }
}

void learn::clear(){
    strV.clear();
}

void learn::GetList(QVector<QString> &lst){
    foreach (auto i, strV) {
       lst.append(i.toLower());
    }
}







