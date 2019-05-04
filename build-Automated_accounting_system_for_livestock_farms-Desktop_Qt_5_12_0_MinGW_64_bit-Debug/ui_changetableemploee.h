/********************************************************************************
** Form generated from reading UI file 'changetableemploee.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGETABLEEMPLOEE_H
#define UI_CHANGETABLEEMPLOEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChangeTableEmploee
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpinBox *BoxID;
    QLabel *labelID;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *ButtonApply;
    QPushButton *ButtonClose;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineName;
    QLabel *labelName;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineSurname;
    QLabel *labelSurname;
    QHBoxLayout *horizontalLayout_6;
    QSpinBox *BoxSalaru;
    QLabel *LableSalary;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *linePosition;
    QLabel *label;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *lineSba;
    QLabel *SbraLabel;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelGender;
    QComboBox *BoxGender;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QLabel *DataLabel;
    QLineEdit *dateEdit;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *LineNumber;
    QLabel *NumberLable;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *lineEmail;
    QLabel *EmailLable;

    void setupUi(QDialog *ChangeTableEmploee)
    {
        if (ChangeTableEmploee->objectName().isEmpty())
            ChangeTableEmploee->setObjectName(QString::fromUtf8("ChangeTableEmploee"));
        ChangeTableEmploee->resize(424, 473);
        gridLayout = new QGridLayout(ChangeTableEmploee);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        BoxID = new QSpinBox(ChangeTableEmploee);
        BoxID->setObjectName(QString::fromUtf8("BoxID"));

        horizontalLayout->addWidget(BoxID);

        labelID = new QLabel(ChangeTableEmploee);
        labelID->setObjectName(QString::fromUtf8("labelID"));
        labelID->setStyleSheet(QString::fromUtf8("color:#00AC14"));

        horizontalLayout->addWidget(labelID);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        ButtonApply = new QPushButton(ChangeTableEmploee);
        ButtonApply->setObjectName(QString::fromUtf8("ButtonApply"));
        ButtonApply->setMinimumSize(QSize(70, 20));
        ButtonApply->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout_10->addWidget(ButtonApply);

        ButtonClose = new QPushButton(ChangeTableEmploee);
        ButtonClose->setObjectName(QString::fromUtf8("ButtonClose"));
        ButtonClose->setMinimumSize(QSize(70, 20));
        ButtonClose->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout_10->addWidget(ButtonClose);


        gridLayout->addLayout(horizontalLayout_10, 8, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineName = new QLineEdit(ChangeTableEmploee);
        lineName->setObjectName(QString::fromUtf8("lineName"));
        lineName->setMinimumSize(QSize(22, 0));
        lineName->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid #00AC14;\n"
"\n"
"}\n"
"QLineEdit:hover{\n"
"border:2px solid #00AC14;\n"
"}"));

        horizontalLayout_2->addWidget(lineName);

        labelName = new QLabel(ChangeTableEmploee);
        labelName->setObjectName(QString::fromUtf8("labelName"));
        labelName->setStyleSheet(QString::fromUtf8("color:#00AC14"));

        horizontalLayout_2->addWidget(labelName);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lineSurname = new QLineEdit(ChangeTableEmploee);
        lineSurname->setObjectName(QString::fromUtf8("lineSurname"));
        lineSurname->setMinimumSize(QSize(22, 0));
        lineSurname->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid #00AC14;\n"
"\n"
"}\n"
"QLineEdit:hover{\n"
"border:2px solid #00AC14;\n"
"}"));

        horizontalLayout_3->addWidget(lineSurname);

        labelSurname = new QLabel(ChangeTableEmploee);
        labelSurname->setObjectName(QString::fromUtf8("labelSurname"));
        labelSurname->setStyleSheet(QString::fromUtf8("color:#00AC14"));

        horizontalLayout_3->addWidget(labelSurname);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        BoxSalaru = new QSpinBox(ChangeTableEmploee);
        BoxSalaru->setObjectName(QString::fromUtf8("BoxSalaru"));

        horizontalLayout_6->addWidget(BoxSalaru);

        LableSalary = new QLabel(ChangeTableEmploee);
        LableSalary->setObjectName(QString::fromUtf8("LableSalary"));
        LableSalary->setStyleSheet(QString::fromUtf8("color:#00AC14"));

        horizontalLayout_6->addWidget(LableSalary);


        gridLayout->addLayout(horizontalLayout_6, 2, 0, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        linePosition = new QLineEdit(ChangeTableEmploee);
        linePosition->setObjectName(QString::fromUtf8("linePosition"));
        linePosition->setMinimumSize(QSize(22, 0));
        linePosition->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid #00AC14;\n"
"\n"
"}\n"
"QLineEdit:hover{\n"
"border:2px solid #00AC14;\n"
"}"));

        horizontalLayout_4->addWidget(linePosition);

        label = new QLabel(ChangeTableEmploee);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color:#00AC14"));

        horizontalLayout_4->addWidget(label);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        lineSba = new QLineEdit(ChangeTableEmploee);
        lineSba->setObjectName(QString::fromUtf8("lineSba"));
        lineSba->setMinimumSize(QSize(22, 0));
        lineSba->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid #00AC14;\n"
"\n"
"}\n"
"QLineEdit:hover{\n"
"border:2px solid #00AC14;\n"
"}"));

        horizontalLayout_7->addWidget(lineSba);

        SbraLabel = new QLabel(ChangeTableEmploee);
        SbraLabel->setObjectName(QString::fromUtf8("SbraLabel"));
        SbraLabel->setStyleSheet(QString::fromUtf8("color:#00AC14"));

        horizontalLayout_7->addWidget(SbraLabel);


        gridLayout->addLayout(horizontalLayout_7, 4, 0, 1, 2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        labelGender = new QLabel(ChangeTableEmploee);
        labelGender->setObjectName(QString::fromUtf8("labelGender"));
        labelGender->setStyleSheet(QString::fromUtf8("color:#00AC14;"));

        verticalLayout_2->addWidget(labelGender);

        BoxGender = new QComboBox(ChangeTableEmploee);
        BoxGender->addItem(QString());
        BoxGender->addItem(QString());
        BoxGender->setObjectName(QString::fromUtf8("BoxGender"));
        BoxGender->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(BoxGender);


        horizontalLayout_5->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        DataLabel = new QLabel(ChangeTableEmploee);
        DataLabel->setObjectName(QString::fromUtf8("DataLabel"));
        DataLabel->setMaximumSize(QSize(160, 16777215));
        DataLabel->setStyleSheet(QString::fromUtf8("color:#00AC14;"));

        verticalLayout_3->addWidget(DataLabel);

        dateEdit = new QLineEdit(ChangeTableEmploee);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setMaximumSize(QSize(160, 160));
        dateEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid #00AC14;\n"
"\n"
"}\n"
"QLineEdit:hover{\n"
"border:2px solid #00AC14;\n"
"}"));

        verticalLayout_3->addWidget(dateEdit);


        horizontalLayout_5->addLayout(verticalLayout_3);


        gridLayout->addLayout(horizontalLayout_5, 5, 0, 1, 2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        LineNumber = new QLineEdit(ChangeTableEmploee);
        LineNumber->setObjectName(QString::fromUtf8("LineNumber"));
        LineNumber->setMinimumSize(QSize(22, 0));
        LineNumber->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid #00AC14;\n"
"\n"
"}\n"
"QLineEdit:hover{\n"
"border:2px solid #00AC14;\n"
"}"));

        horizontalLayout_9->addWidget(LineNumber);

        NumberLable = new QLabel(ChangeTableEmploee);
        NumberLable->setObjectName(QString::fromUtf8("NumberLable"));
        NumberLable->setStyleSheet(QString::fromUtf8("color:#00AC14"));

        horizontalLayout_9->addWidget(NumberLable);


        gridLayout->addLayout(horizontalLayout_9, 6, 0, 1, 2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        lineEmail = new QLineEdit(ChangeTableEmploee);
        lineEmail->setObjectName(QString::fromUtf8("lineEmail"));
        lineEmail->setMinimumSize(QSize(22, 0));
        lineEmail->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid #00AC14;\n"
"\n"
"}\n"
"QLineEdit:hover{\n"
"border:2px solid #00AC14;\n"
"}"));

        horizontalLayout_8->addWidget(lineEmail);

        EmailLable = new QLabel(ChangeTableEmploee);
        EmailLable->setObjectName(QString::fromUtf8("EmailLable"));
        EmailLable->setStyleSheet(QString::fromUtf8("color:#00AC14"));

        horizontalLayout_8->addWidget(EmailLable);


        gridLayout->addLayout(horizontalLayout_8, 7, 0, 1, 2);


        retranslateUi(ChangeTableEmploee);

        QMetaObject::connectSlotsByName(ChangeTableEmploee);
    } // setupUi

    void retranslateUi(QDialog *ChangeTableEmploee)
    {
        ChangeTableEmploee->setWindowTitle(QApplication::translate("ChangeTableEmploee", "Dialog", nullptr));
        labelID->setText(QApplication::translate("ChangeTableEmploee", "ID", nullptr));
#ifndef QT_NO_TOOLTIP
        ButtonApply->setToolTip(QApplication::translate("ChangeTableEmploee", "<html><head/><body><p>Enter </p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        ButtonApply->setText(QApplication::translate("ChangeTableEmploee", "&\320\237\321\226\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\320\270", nullptr));
#ifndef QT_NO_TOOLTIP
        ButtonClose->setToolTip(QApplication::translate("ChangeTableEmploee", "<html><head/><body><p>ctrl+f</p><p><br/></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        ButtonClose->setText(QApplication::translate("ChangeTableEmploee", "\320\227&\320\260\320\272\321\200\320\270\321\202\320\270", nullptr));
        labelName->setText(QApplication::translate("ChangeTableEmploee", "\320\206\320\274'\321\217", nullptr));
        labelSurname->setText(QApplication::translate("ChangeTableEmploee", "\320\237\321\200\321\226\320\267\320\262\320\270\321\211\320\265", nullptr));
        LableSalary->setText(QApplication::translate("ChangeTableEmploee", "\320\227\320\260\321\200\320\277\320\273\320\260\321\202\320\260", nullptr));
        label->setText(QApplication::translate("ChangeTableEmploee", "\320\237\320\276\321\201\320\260\320\264\320\260", nullptr));
        SbraLabel->setText(QApplication::translate("ChangeTableEmploee", "\320\235\320\260\320\277\321\200\320\260\320\262\320\273\320\265\320\275\321\226\321\201\321\202\321\214", nullptr));
        labelGender->setText(QApplication::translate("ChangeTableEmploee", "\320\241\321\202\320\260\321\202\321\214", nullptr));
        BoxGender->setItemText(0, QApplication::translate("ChangeTableEmploee", "\320\247", nullptr));
        BoxGender->setItemText(1, QApplication::translate("ChangeTableEmploee", "\320\226", nullptr));

        DataLabel->setText(QApplication::translate("ChangeTableEmploee", "\320\224\320\260\321\202\320\260 \320\275\320\260\321\200\320\276\320\264\320\266\320\265\320\275\320\275\321\217", nullptr));
#ifndef QT_NO_TOOLTIP
        dateEdit->setToolTip(QApplication::translate("ChangeTableEmploee", "<html><head/><body><p><span style=\" color:#aa0000;\">\320\244\320\276\321\200\320\274\320\260\321\202 \320\264\320\260\321\202\320\270 </span></p><p><span style=\" font-size:12pt; color:#aa0000;\">(</span><span style=\" font-size:12pt; color:#005500;\">\320\240\320\240\320\240\320\240-\320\234\320\234-\320\224\320\224</span><span style=\" font-size:12pt; color:#aa0000;\">)</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        dateEdit->setText(QApplication::translate("ChangeTableEmploee", "2000-11-12", nullptr));
        NumberLable->setText(QApplication::translate("ChangeTableEmploee", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\321\203", nullptr));
        EmailLable->setText(QApplication::translate("ChangeTableEmploee", "Email", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeTableEmploee: public Ui_ChangeTableEmploee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGETABLEEMPLOEE_H
