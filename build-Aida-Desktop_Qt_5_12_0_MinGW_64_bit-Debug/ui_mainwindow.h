/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *exit;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radio_work;
    QRadioButton *radio_learn;
    QPushButton *Button_send;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *Text_message;
    QVBoxLayout *verticalLayout;
    QLineEdit *question_line;
    QLineEdit *ansver_line;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *Button_inf;
    QMenuBar *menuBar;
    QMenu *menu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(423, 526);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        exit = new QAction(MainWindow);
        exit->setObjectName(QString::fromUtf8("exit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radio_work = new QRadioButton(centralWidget);
        radio_work->setObjectName(QString::fromUtf8("radio_work"));
        radio_work->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(radio_work);

        radio_learn = new QRadioButton(centralWidget);
        radio_learn->setObjectName(QString::fromUtf8("radio_learn"));
        radio_learn->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(radio_learn);


        gridLayout->addLayout(horizontalLayout, 0, 2, 1, 1);

        Button_send = new QPushButton(centralWidget);
        Button_send->setObjectName(QString::fromUtf8("Button_send"));
        Button_send->setMinimumSize(QSize(180, 25));
        Button_send->setMaximumSize(QSize(240, 40));
        Button_send->setAutoFillBackground(false);
        Button_send->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   border:2px solid rgba(99,148,125,0,9);\n"
"    background-color:qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.786517 rgba(0, 157, 205, 255), stop:1 rgba(255, 255, 255, 255));\n"
"    color:blac;\n"
"}\n"
"QPushButton:hover{\n"
" background-color:qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.904494 rgba(0, 157, 205, 255), stop:1 rgba(255, 255, 255, 255));\n"
" border:2px solid rgba(99,148,125,0,9);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.595506 rgba(0, 151, 197, 255), stop:1 rgba(255, 255, 255, 255));\n"
" border:2px solid rgba(99,148,125,0,9);\n"
"}"));

        gridLayout->addWidget(Button_send, 3, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 0, 1, 1);

        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setMaximumSize(QSize(16777215, 16777215));
        scrollArea->setStyleSheet(QString::fromUtf8("scrollArea{\n"
"\n"
" background-color:#4B4C4C;\n"
"\n"
"}"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 403, 360));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(1, 1, 1, 1);
        Text_message = new QTextEdit(scrollAreaWidgetContents);
        Text_message->setObjectName(QString::fromUtf8("Text_message"));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(12);
        Text_message->setFont(font);
        Text_message->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(Text_message);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 1, 0, 1, 3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        question_line = new QLineEdit(centralWidget);
        question_line->setObjectName(QString::fromUtf8("question_line"));
        question_line->setMinimumSize(QSize(0, 25));
        question_line->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid #01576E;\n"
"color:rgba(0,84,110,0.1);\n"
"\n"
"}\n"
"QLineEdit:hover{\n"
"color:rgba(0,84,110,0.5);\n"
"border:2px solid rgba(0,52,66,0.6);\n"
"}"));

        verticalLayout->addWidget(question_line);

        ansver_line = new QLineEdit(centralWidget);
        ansver_line->setObjectName(QString::fromUtf8("ansver_line"));
        ansver_line->setMinimumSize(QSize(0, 25));
        ansver_line->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid #01576E;\n"
"color:rgba(0,84,110,0.1);\n"
"\n"
"}\n"
"QLineEdit:hover{\n"
"color:rgba(0,84,110,0.5);\n"
"border:2px solid rgba(0,52,66,0.6);\n"
"}"));

        verticalLayout->addWidget(ansver_line);


        gridLayout->addLayout(verticalLayout, 2, 0, 1, 3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 2, 1, 1);

        Button_inf = new QPushButton(centralWidget);
        Button_inf->setObjectName(QString::fromUtf8("Button_inf"));
        Button_inf->setMinimumSize(QSize(40, 25));
        Button_inf->setMaximumSize(QSize(40, 16777215));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        Button_inf->setFont(font1);
        Button_inf->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   border:2px solid rgba(99,148,125,0,9);\n"
"    background-color:qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.786517 rgba(0, 157, 205, 255), stop:1 rgba(255, 255, 255, 255));\n"
"    color:blac;\n"
"}\n"
"QPushButton:hover{\n"
" background-color:qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.904494 rgba(0, 157, 205, 255), stop:1 rgba(255, 255, 255, 255));\n"
" border:2px solid rgba(99,148,125,0,9);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.595506 rgba(0, 151, 197, 255), stop:1 rgba(255, 255, 255, 255));\n"
" border:2px solid rgba(99,148,125,0,9);\n"
"}"));

        gridLayout->addWidget(Button_inf, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 423, 20));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(exit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        exit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        radio_work->setText(QApplication::translate("MainWindow", "Work", nullptr));
        radio_learn->setText(QApplication::translate("MainWindow", "Learn", nullptr));
        Button_send->setText(QApplication::translate("MainWindow", "Send", nullptr));
        Button_inf->setText(QApplication::translate("MainWindow", "?", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "Bot", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
