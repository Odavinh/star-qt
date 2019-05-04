/********************************************************************************
** Form generated from reading UI file 'changetableanimals.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGETABLEANIMALS_H
#define UI_CHANGETABLEANIMALS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChangeTableAnimals
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *BoxEn_Number;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineKind;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *BoxEn_Spending;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *BoxEn_Profit;
    QLabel *label_4;
    QGridLayout *gridLayout_2;
    QPushButton *ButtonEn_Apply;
    QPushButton *ButtonEn_exit;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *ChangeTableAnimals)
    {
        if (ChangeTableAnimals->objectName().isEmpty())
            ChangeTableAnimals->setObjectName(QString::fromUtf8("ChangeTableAnimals"));
        ChangeTableAnimals->setEnabled(true);
        ChangeTableAnimals->resize(400, 171);
        gridLayout = new QGridLayout(ChangeTableAnimals);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        BoxEn_Number = new QSpinBox(ChangeTableAnimals);
        BoxEn_Number->setObjectName(QString::fromUtf8("BoxEn_Number"));

        horizontalLayout_4->addWidget(BoxEn_Number);

        label = new QLabel(ChangeTableAnimals);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color:#00AC14"));

        horizontalLayout_4->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lineKind = new QLineEdit(ChangeTableAnimals);
        lineKind->setObjectName(QString::fromUtf8("lineKind"));

        horizontalLayout_3->addWidget(lineKind);

        label_2 = new QLabel(ChangeTableAnimals);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color:#00AC14"));

        horizontalLayout_3->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        BoxEn_Spending = new QDoubleSpinBox(ChangeTableAnimals);
        BoxEn_Spending->setObjectName(QString::fromUtf8("BoxEn_Spending"));

        horizontalLayout_2->addWidget(BoxEn_Spending);

        label_3 = new QLabel(ChangeTableAnimals);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("color:#00AC14"));

        horizontalLayout_2->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        BoxEn_Profit = new QDoubleSpinBox(ChangeTableAnimals);
        BoxEn_Profit->setObjectName(QString::fromUtf8("BoxEn_Profit"));

        horizontalLayout->addWidget(BoxEn_Profit);

        label_4 = new QLabel(ChangeTableAnimals);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color:#00AC14"));

        horizontalLayout->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        ButtonEn_Apply = new QPushButton(ChangeTableAnimals);
        ButtonEn_Apply->setObjectName(QString::fromUtf8("ButtonEn_Apply"));
        ButtonEn_Apply->setMinimumSize(QSize(75, 20));
        ButtonEn_Apply->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:#00AC14;\n"
"color:#FFE53E;\n"
"border:0px solid #FFFFFF;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"background:#2DBE3B;\n"
"color:#FFE53E;\n"
"border:0px solid #FFFFFF;\n"
"}\n"
"QPushButton:pressed{\n"
"background:qlineargradient(spread:reflect, x1:0.433, y1:0, x2:0.438494, y2:0.500227, stop:0 rgba(255, 255, 255, 255), stop:0.365169 rgba(49, 196, 64, 255));\n"
"color:#FFE53E;\n"
"border:0px solid #FFFFFF;\n"
"}"));

        gridLayout_2->addWidget(ButtonEn_Apply, 1, 0, 1, 1);

        ButtonEn_exit = new QPushButton(ChangeTableAnimals);
        ButtonEn_exit->setObjectName(QString::fromUtf8("ButtonEn_exit"));
        ButtonEn_exit->setMinimumSize(QSize(70, 20));
        ButtonEn_exit->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:#00AC14;\n"
"color:#FFE53E;\n"
"border:0px solid #FFFFFF;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"background:#2DBE3B;\n"
"color:#FFE53E;\n"
"border:0px solid #FFFFFF;\n"
"}\n"
"QPushButton:pressed{\n"
"background:qlineargradient(spread:reflect, x1:0.433, y1:0, x2:0.438494, y2:0.500227, stop:0 rgba(255, 255, 255, 255), stop:0.365169 rgba(49, 196, 64, 255));\n"
"color:#FFE53E;\n"
"border:0px solid #FFFFFF;\n"
"}"));

        gridLayout_2->addWidget(ButtonEn_exit, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 1, 1, 1, 1);


        retranslateUi(ChangeTableAnimals);

        QMetaObject::connectSlotsByName(ChangeTableAnimals);
    } // setupUi

    void retranslateUi(QDialog *ChangeTableAnimals)
    {
        ChangeTableAnimals->setWindowTitle(QApplication::translate("ChangeTableAnimals", "Dialog", nullptr));
        label->setText(QApplication::translate("ChangeTableAnimals", "Number", nullptr));
        label_2->setText(QApplication::translate("ChangeTableAnimals", "Kind", nullptr));
        label_3->setText(QApplication::translate("ChangeTableAnimals", "Spending", nullptr));
        label_4->setText(QApplication::translate("ChangeTableAnimals", "Profit", nullptr));
#ifndef QT_NO_TOOLTIP
        ButtonEn_Apply->setToolTip(QApplication::translate("ChangeTableAnimals", "<html><head/><body><p>Enter</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        ButtonEn_Apply->setText(QApplication::translate("ChangeTableAnimals", "&\320\237\321\226\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\320\270", nullptr));
#ifndef QT_NO_TOOLTIP
        ButtonEn_exit->setToolTip(QApplication::translate("ChangeTableAnimals", "<html><head/><body><p>ctrl+f</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        ButtonEn_exit->setText(QApplication::translate("ChangeTableAnimals", "\320\227&\320\260\320\272\321\200\320\270\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeTableAnimals: public Ui_ChangeTableAnimals {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGETABLEANIMALS_H
