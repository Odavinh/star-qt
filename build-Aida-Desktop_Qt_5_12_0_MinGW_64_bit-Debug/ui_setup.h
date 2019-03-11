/********************************************************************************
** Form generated from reading UI file 'Setup.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETUP_H
#define UI_SETUP_H

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

class Ui_Setup
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *Information;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout;
    QPushButton *memory_Button;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *Button_OK;
    QPushButton *cancel_Button;
    QPushButton *save_Button;

    void setupUi(QDialog *Setup)
    {
        if (Setup->objectName().isEmpty())
            Setup->setObjectName(QString::fromUtf8("Setup"));
        Setup->resize(401, 286);
        verticalLayout_3 = new QVBoxLayout(Setup);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        Information = new QLabel(Setup);
        Information->setObjectName(QString::fromUtf8("Information"));

        verticalLayout_3->addWidget(Information);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(Setup);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(Setup);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        memory_Button = new QPushButton(Setup);
        memory_Button->setObjectName(QString::fromUtf8("memory_Button"));

        verticalLayout->addWidget(memory_Button);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Button_OK = new QPushButton(Setup);
        Button_OK->setObjectName(QString::fromUtf8("Button_OK"));
        Button_OK->setMinimumSize(QSize(0, 25));

        horizontalLayout->addWidget(Button_OK);

        cancel_Button = new QPushButton(Setup);
        cancel_Button->setObjectName(QString::fromUtf8("cancel_Button"));
        cancel_Button->setMinimumSize(QSize(0, 25));

        horizontalLayout->addWidget(cancel_Button);

        save_Button = new QPushButton(Setup);
        save_Button->setObjectName(QString::fromUtf8("save_Button"));
        save_Button->setMinimumSize(QSize(0, 25));

        horizontalLayout->addWidget(save_Button);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(Setup);

        QMetaObject::connectSlotsByName(Setup);
    } // setupUi

    void retranslateUi(QDialog *Setup)
    {
        Setup->setWindowTitle(QApplication::translate("Setup", "Dialog", nullptr));
#ifndef QT_NO_TOOLTIP
        Information->setToolTip(QApplication::translate("Setup", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; color:#aa0000;\">\320\243\320\262\320\260\320\263\320\260!!!</span></p><p><span style=\" color:#000000;\">\320\237\321\200\320\270</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        Information->setText(QString());
        label->setText(QApplication::translate("Setup", "\320\206\320\274'\321\217 \320\272\320\276\321\200\320\270\321\201\321\202\321\203\320\262\320\260\321\207\320\260", nullptr));
        memory_Button->setText(QString());
        Button_OK->setText(QApplication::translate("Setup", "\320\236\320\272", nullptr));
        cancel_Button->setText(QApplication::translate("Setup", "\320\241\320\272\320\260\321\201\321\203\320\262\320\260\321\202\320\270", nullptr));
        save_Button->setText(QApplication::translate("Setup", "\320\227\320\261\320\265\321\200\320\265\320\263\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Setup: public Ui_Setup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETUP_H
