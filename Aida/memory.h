#ifndef MEORY_H
#define MEORY_H
#include<map>
#include<QFile>
#include<QDebug>
#include<QDataStream>
#include<QStringList>

class memory
{
public:
    memory();
    void read_the_file();
    void write_file();
    void erase(const QString &str);
    QString find_map(const QString &str);
    void append(const QString &question, const QString &respond);


private:
    std::map<QString,QString> MapMemoru;
};

#endif // MEORY_H
