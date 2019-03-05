#ifndef LEARN_H
#define LEARN_H
#include<QStringList>
#include<QVector>
#include<QList>
#include<QFile>
#include<QTextStream>
#include<QDebug>



class learn
{
public:
    learn();

    void read_learn_file();
    void write_learn_file();
    void clear();
    QString find(const QString &str);
    void append(const QString & str);
    void erase(const QString &str);
    void GetList(QVector<QString> &lst);

private:
    QVector<QString> strV;
};

#endif // LEARN_H
