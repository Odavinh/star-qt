/********************************************************************************
** Form generated from reading UI file 'changetablestatisticss.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGETABLESTATISTICSS_H
#define UI_CHANGETABLESTATISTICSS_H

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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChangeTableStatisticss
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *dateEdit;
    QLabel *labelData;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *BoxCosts;
    QLabel *labelCosts;
    QHBoxLayout *horizontalLayout_3;
    QDoubleSpinBox *BoxProfit;
    QLabel *labelProfit;
    QHBoxLayout *horizontalLayout;
    QPushButton *ButtonApply;
    QPushButton *ButtonClose;
    QGridLayout *gridLayout_2;
    QLabel *labelReport;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QTextEdit *textEditReport;

    void setupUi(QDialog *ChangeTableStatisticss)
    {
        if (ChangeTableStatisticss->objectName().isEmpty())
            ChangeTableStatisticss->setObjectName(QString::fromUtf8("ChangeTableStatisticss"));
        ChangeTableStatisticss->resize(502, 397);
        gridLayout = new QGridLayout(ChangeTableStatisticss);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        dateEdit = new QLineEdit(ChangeTableStatisticss);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        horizontalLayout_4->addWidget(dateEdit);

        labelData = new QLabel(ChangeTableStatisticss);
        labelData->setObjectName(QString::fromUtf8("labelData"));
        labelData->setMinimumSize(QSize(160, 0));
        labelData->setStyleSheet(QString::fromUtf8("color:#00AC14"));

        horizontalLayout_4->addWidget(labelData);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        BoxCosts = new QDoubleSpinBox(ChangeTableStatisticss);
        BoxCosts->setObjectName(QString::fromUtf8("BoxCosts"));

        horizontalLayout_2->addWidget(BoxCosts);

        labelCosts = new QLabel(ChangeTableStatisticss);
        labelCosts->setObjectName(QString::fromUtf8("labelCosts"));
        labelCosts->setStyleSheet(QString::fromUtf8("color:#00AC14"));

        horizontalLayout_2->addWidget(labelCosts);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        BoxProfit = new QDoubleSpinBox(ChangeTableStatisticss);
        BoxProfit->setObjectName(QString::fromUtf8("BoxProfit"));

        horizontalLayout_3->addWidget(BoxProfit);

        labelProfit = new QLabel(ChangeTableStatisticss);
        labelProfit->setObjectName(QString::fromUtf8("labelProfit"));
        labelProfit->setStyleSheet(QString::fromUtf8("color:#00AC14"));

        horizontalLayout_3->addWidget(labelProfit);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ButtonApply = new QPushButton(ChangeTableStatisticss);
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

        horizontalLayout->addWidget(ButtonApply);

        ButtonClose = new QPushButton(ChangeTableStatisticss);
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

        horizontalLayout->addWidget(ButtonClose);


        gridLayout->addLayout(horizontalLayout, 3, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        labelReport = new QLabel(ChangeTableStatisticss);
        labelReport->setObjectName(QString::fromUtf8("labelReport"));
        labelReport->setStyleSheet(QString::fromUtf8("color:#00AC14;"));

        gridLayout_2->addWidget(labelReport, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        textEditReport = new QTextEdit(ChangeTableStatisticss);
        textEditReport->setObjectName(QString::fromUtf8("textEditReport"));
        textEditReport->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"border:1px solid #00AC14;\n"
"\n"
"}\n"
"QTextEdit:hover{\n"
"border:2px solid #00AC14;\n"
"}\n"
""));

        gridLayout_2->addWidget(textEditReport, 4, 0, 1, 3);


        gridLayout->addLayout(gridLayout_2, 2, 0, 1, 2);


        retranslateUi(ChangeTableStatisticss);

        QMetaObject::connectSlotsByName(ChangeTableStatisticss);
    } // setupUi

    void retranslateUi(QDialog *ChangeTableStatisticss)
    {
        ChangeTableStatisticss->setWindowTitle(QApplication::translate("ChangeTableStatisticss", "Dialog", nullptr));
#ifndef QT_NO_TOOLTIP
        dateEdit->setToolTip(QApplication::translate("ChangeTableStatisticss", "<html><head/><body><p><span style=\" color:#aa0000;\">\320\244\320\276\321\200\320\274\320\260\321\202 \320\264\320\260\321\202\320\270 </span></p><p><span style=\" font-size:12pt; color:#aa0000;\">(</span><span style=\" font-size:12pt; color:#005500;\">\320\240\320\240\320\240\320\240-\320\234\320\234-\320\224\320\224</span><span style=\" font-size:12pt; color:#aa0000;\">)</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        dateEdit->setText(QApplication::translate("ChangeTableStatisticss", "2000-11-12", nullptr));
        labelData->setText(QApplication::translate("ChangeTableStatisticss", "\320\237\320\273\320\276\321\207\320\260\321\202\320\276\320\272 \321\200\320\276\320\261\320\276\321\202\320\270 (\320\240\320\240\320\240\320\240-\320\234\320\234-\320\224\320\224)", nullptr));
        labelCosts->setText(QApplication::translate("ChangeTableStatisticss", "\320\222\320\270\321\202\321\200\320\260\321\202\320\270", nullptr));
        labelProfit->setText(QApplication::translate("ChangeTableStatisticss", "\320\277\321\200\320\270\320\261\321\203\321\202\320\276\320\272", nullptr));
#ifndef QT_NO_TOOLTIP
        ButtonApply->setToolTip(QApplication::translate("ChangeTableStatisticss", "<html><head/><body><p>Enter</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        ButtonApply->setText(QApplication::translate("ChangeTableStatisticss", "&\320\237\321\226\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\320\270", nullptr));
#ifndef QT_NO_TOOLTIP
        ButtonClose->setToolTip(QApplication::translate("ChangeTableStatisticss", "<html><head/><body><p>ctrl+f</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        ButtonClose->setText(QApplication::translate("ChangeTableStatisticss", "\320\227&\320\260\320\272\321\200\320\270\321\202\320\270", nullptr));
        labelReport->setText(QApplication::translate("ChangeTableStatisticss", "\320\227\320\262\321\226\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeTableStatisticss: public Ui_ChangeTableStatisticss {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGETABLESTATISTICSS_H
