/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *Inf;
    QVBoxLayout *verticalLayout;
    QLineEdit *line_name;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *OK_Button;
    QPushButton *Exit_Button;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->setEnabled(true);
        Login->resize(503, 120);
        Login->setMaximumSize(QSize(503, 16777215));
        verticalLayout_3 = new QVBoxLayout(Login);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        Inf = new QLabel(Login);
        Inf->setObjectName(QString::fromUtf8("Inf"));

        verticalLayout_2->addWidget(Inf);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        line_name = new QLineEdit(Login);
        line_name->setObjectName(QString::fromUtf8("line_name"));

        verticalLayout->addWidget(line_name);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, -1, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        OK_Button = new QPushButton(Login);
        OK_Button->setObjectName(QString::fromUtf8("OK_Button"));
        OK_Button->setMinimumSize(QSize(100, 20));
        OK_Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout->addWidget(OK_Button);

        Exit_Button = new QPushButton(Login);
        Exit_Button->setObjectName(QString::fromUtf8("Exit_Button"));
        Exit_Button->setMinimumSize(QSize(100, 20));
        Exit_Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout->addWidget(Exit_Button);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Dialog", nullptr));
#ifndef QT_NO_TOOLTIP
        Inf->setToolTip(QApplication::translate("Login", "<html><head/><body><p><span style=\" color:#aa0000;\">Aida:</span></p><p><span style=\" color:#000000;\">\320\234\320\276\320\266\320\275\320\260 \320\264\321\226\320\267\320\275\320\260\321\202\320\270\321\201\321\217 \320\262\320\260\321\210\320\265 \321\226\320\274'\321\217.</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        Inf->setText(QApplication::translate("Login", "Aida: \320\234\320\276\320\266\320\275\320\260 \320\264\321\226\320\267\320\275\320\260\321\202\320\270\321\201\321\217 \320\262\320\260\321\210\320\265 \321\226\320\274'\321\217???                                                                                                      ", nullptr));
        OK_Button->setText(QApplication::translate("Login", "\320\235\321\226", nullptr));
        Exit_Button->setText(QApplication::translate("Login", "\320\242\320\260\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
