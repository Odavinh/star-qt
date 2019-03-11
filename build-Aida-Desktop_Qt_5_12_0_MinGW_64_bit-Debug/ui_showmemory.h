/********************************************************************************
** Form generated from reading UI file 'showmemory.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWMEMORY_H
#define UI_SHOWMEMORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowMemory
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_User;
    QLabel *label_Aida;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *User_message;
    QTextEdit *Aida_message;

    void setupUi(QDialog *ShowMemory)
    {
        if (ShowMemory->objectName().isEmpty())
            ShowMemory->setObjectName(QString::fromUtf8("ShowMemory"));
        ShowMemory->resize(620, 480);
        gridLayout = new QGridLayout(ShowMemory);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(ShowMemory);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 600, 460));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_User = new QLabel(scrollAreaWidgetContents);
        label_User->setObjectName(QString::fromUtf8("label_User"));

        horizontalLayout->addWidget(label_User);

        label_Aida = new QLabel(scrollAreaWidgetContents);
        label_Aida->setObjectName(QString::fromUtf8("label_Aida"));
        label_Aida->setMinimumSize(QSize(20, 20));

        horizontalLayout->addWidget(label_Aida);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        User_message = new QTextEdit(scrollAreaWidgetContents);
        User_message->setObjectName(QString::fromUtf8("User_message"));

        horizontalLayout_2->addWidget(User_message);

        Aida_message = new QTextEdit(scrollAreaWidgetContents);
        Aida_message->setObjectName(QString::fromUtf8("Aida_message"));

        horizontalLayout_2->addWidget(Aida_message);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 2);


        retranslateUi(ShowMemory);

        QMetaObject::connectSlotsByName(ShowMemory);
    } // setupUi

    void retranslateUi(QDialog *ShowMemory)
    {
        ShowMemory->setWindowTitle(QApplication::translate("ShowMemory", "Dialog", nullptr));
        label_User->setText(QApplication::translate("ShowMemory", "    User:", nullptr));
        label_Aida->setText(QApplication::translate("ShowMemory", "    Aida:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowMemory: public Ui_ShowMemory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWMEMORY_H
