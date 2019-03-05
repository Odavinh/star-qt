#include "memory.h"
#include<QMessageBox>


memory::memory()
{

}

void memory::erase(const QString &str){
    MapMemoru.erase(str.toLower());
}

QString memory::find_map(const QString &str){
    QString temp;
    std::map<QString, QString>::iterator it;
    it = MapMemoru.find(str.toLower());
    return it->second;
}

void memory::append(const QString &question, const QString &respond){
    MapMemoru.emplace(question.toLower(), respond.toLower());
}

void memory::write_file()
{
    QFile *mamory_Z = new QFile("memory.txt");
    QFile *memory_K = new QFile("memoryk.txt");
    QTextStream mrstr_K(memory_K);
    QTextStream mrstr_Z(mamory_Z);

    if(memory_K->open(QIODevice::WriteOnly| QIODevice::Text)){
        foreach (auto it, MapMemoru)
        {
            mrstr_K << it.first.toLower() + "\n";
        }
        memory_K->close();
    }

    if(mamory_Z->open(QIODevice::WriteOnly | QIODevice::Text)){
        foreach (auto it, MapMemoru)
        {
            mrstr_Z << it.second.toLower() + "\n";
        }
        mamory_Z->close();
    }

    delete mamory_Z;
    delete memory_K;
}


void memory::read_the_file()
{
    QFile *memory_Z = new QFile("memory.txt");
    QFile *memory_k = new QFile("memoryk.txt");
    QTextStream mrstr_K(memory_k);
    QTextStream mrstr_Z(memory_Z);

    if(memory_Z->open(QFile::ReadOnly |
                      QFile::Text) &&
            memory_k->open(QFile::ReadOnly |
                           QFile::Text)){

        QString str = " ";
        QString str_k = " ";
        QStringList lst_Z;
        QStringList lst_K;

        while(!(str == "" )){
            str = "";
            str = mrstr_Z.readLine();
            lst_Z << str;
            qDebug()<<str;
        }
        while(str_k != ""){
            str_k = "";
            str_k  = mrstr_K.readLine();
            lst_K << str_k;
        }
        int j = 0;
        foreach (auto i, lst_K) {
           MapMemoru.emplace(i,lst_Z.at(j));
           j++;
        }
        MapMemoru.erase("");
        qDebug()<<MapMemoru;

        memory_Z->close();
        memory_k->close();
    }

    delete memory_k;
    delete memory_Z;
}



