/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineNameDB;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineNameEmploeeT;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLineEdit *lineNameAnimals;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineStatisticsT;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineDriver;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineHostName;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineUserName;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *linePasvord;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_10;
    QCheckBox *checkBox;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QLabel *label_8;
    QPushButton *ButtonStandartSetings;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *ButtonSave;
    QPushButton *ButtonClose;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QString::fromUtf8("Settings"));
        Settings->setEnabled(true);
        Settings->resize(646, 439);
        Settings->setMinimumSize(QSize(0, 0));
        gridLayout = new QGridLayout(Settings);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Settings);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color:#00AC14;"));

        horizontalLayout->addWidget(label);

        lineNameDB = new QLineEdit(Settings);
        lineNameDB->setObjectName(QString::fromUtf8("lineNameDB"));
        lineNameDB->setMinimumSize(QSize(200, 22));
        lineNameDB->setMaximumSize(QSize(470, 16777215));
        lineNameDB->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid #00AC14;\n"
"\n"
"}\n"
"QLineEdit:hover{\n"
"border:2px solid #00AC14;\n"
"}"));

        horizontalLayout->addWidget(lineNameDB);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(Settings);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color:#00AC14;"));

        horizontalLayout_2->addWidget(label_2);

        lineNameEmploeeT = new QLineEdit(Settings);
        lineNameEmploeeT->setObjectName(QString::fromUtf8("lineNameEmploeeT"));
        lineNameEmploeeT->setMinimumSize(QSize(200, 22));
        lineNameEmploeeT->setMaximumSize(QSize(470, 16777215));
        lineNameEmploeeT->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid #00AC14;\n"
"\n"
"}\n"
"QLineEdit:hover{\n"
"border:2px solid #00AC14;\n"
"}"));

        horizontalLayout_2->addWidget(lineNameEmploeeT);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_9 = new QLabel(Settings);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("color:#00AC14;"));

        horizontalLayout_9->addWidget(label_9);

        lineNameAnimals = new QLineEdit(Settings);
        lineNameAnimals->setObjectName(QString::fromUtf8("lineNameAnimals"));
        lineNameAnimals->setMinimumSize(QSize(200, 22));
        lineNameAnimals->setMaximumSize(QSize(470, 16777215));
        lineNameAnimals->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid #00AC14;\n"
"\n"
"}\n"
"QLineEdit:hover{\n"
"border:2px solid #00AC14;\n"
"}"));

        horizontalLayout_9->addWidget(lineNameAnimals);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(Settings);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("color:#00AC14;"));

        horizontalLayout_3->addWidget(label_3);

        lineStatisticsT = new QLineEdit(Settings);
        lineStatisticsT->setObjectName(QString::fromUtf8("lineStatisticsT"));
        lineStatisticsT->setMinimumSize(QSize(200, 22));
        lineStatisticsT->setMaximumSize(QSize(470, 16777215));
        lineStatisticsT->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid #00AC14;\n"
"\n"
"}\n"
"QLineEdit:hover{\n"
"border:2px solid #00AC14;\n"
"}"));

        horizontalLayout_3->addWidget(lineStatisticsT);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(Settings);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color:#00AC14;"));

        horizontalLayout_4->addWidget(label_4);

        lineDriver = new QLineEdit(Settings);
        lineDriver->setObjectName(QString::fromUtf8("lineDriver"));
        lineDriver->setMinimumSize(QSize(200, 22));
        lineDriver->setMaximumSize(QSize(470, 16777215));
        lineDriver->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid #00AC14;\n"
"\n"
"}\n"
"QLineEdit:hover{\n"
"border:2px solid #00AC14;\n"
"}"));

        horizontalLayout_4->addWidget(lineDriver);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(Settings);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("color:#00AC14;"));

        horizontalLayout_5->addWidget(label_5);

        lineHostName = new QLineEdit(Settings);
        lineHostName->setObjectName(QString::fromUtf8("lineHostName"));
        lineHostName->setMinimumSize(QSize(200, 22));
        lineHostName->setMaximumSize(QSize(470, 16777215));
        lineHostName->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid #00AC14;\n"
"\n"
"}\n"
"QLineEdit:hover{\n"
"border:2px solid #00AC14;\n"
"}"));

        horizontalLayout_5->addWidget(lineHostName);


        verticalLayout_2->addLayout(horizontalLayout_5);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(Settings);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("color:#00AC14;"));

        horizontalLayout_6->addWidget(label_6);

        lineUserName = new QLineEdit(Settings);
        lineUserName->setObjectName(QString::fromUtf8("lineUserName"));
        lineUserName->setMinimumSize(QSize(0, 22));
        lineUserName->setMaximumSize(QSize(250, 16777215));
        lineUserName->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid #00AC14;\n"
"\n"
"}\n"
"QLineEdit:hover{\n"
"border:2px solid #00AC14;\n"
"}"));

        horizontalLayout_6->addWidget(lineUserName);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(Settings);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("color:#00AC14;"));

        horizontalLayout_7->addWidget(label_7);

        linePasvord = new QLineEdit(Settings);
        linePasvord->setObjectName(QString::fromUtf8("linePasvord"));
        linePasvord->setMinimumSize(QSize(0, 22));
        linePasvord->setMaximumSize(QSize(250, 16777215));
        linePasvord->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid #00AC14;\n"
"\n"
"}\n"
"QLineEdit:hover{\n"
"border:2px solid #00AC14;\n"
"}\n"
""));
        linePasvord->setEchoMode(QLineEdit::Password);

        horizontalLayout_7->addWidget(linePasvord);


        verticalLayout->addLayout(horizontalLayout_7);


        gridLayout->addLayout(verticalLayout, 4, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 5, 1, 1, 1);

        label_10 = new QLabel(Settings);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 0, 0, 1, 2);

        checkBox = new QCheckBox(Settings);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setStyleSheet(QString::fromUtf8("color:#00AC14;"));

        gridLayout->addWidget(checkBox, 2, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 2, 1, 1);

        label_8 = new QLabel(Settings);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(label_8, 3, 0, 1, 3);

        ButtonStandartSetings = new QPushButton(Settings);
        ButtonStandartSetings->setObjectName(QString::fromUtf8("ButtonStandartSetings"));
        ButtonStandartSetings->setMinimumSize(QSize(150, 20));
        ButtonStandartSetings->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout->addWidget(ButtonStandartSetings, 6, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        ButtonSave = new QPushButton(Settings);
        ButtonSave->setObjectName(QString::fromUtf8("ButtonSave"));
        ButtonSave->setMinimumSize(QSize(70, 20));
        ButtonSave->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout_8->addWidget(ButtonSave);

        ButtonClose = new QPushButton(Settings);
        ButtonClose->setObjectName(QString::fromUtf8("ButtonClose"));
        ButtonClose->setMinimumSize(QSize(70, 20));
        ButtonClose->setMaximumSize(QSize(16777215, 16777215));
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

        horizontalLayout_8->addWidget(ButtonClose);


        gridLayout->addLayout(horizontalLayout_8, 6, 2, 1, 1);


        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Dialog", nullptr));
        label->setText(QApplication::translate("Settings", "\320\221\320\260\320\267\320\260 \320\264\320\260\320\275\320\270\321\205                      ", nullptr));
        label_2->setText(QApplication::translate("Settings", "\320\242\320\260\320\261\320\273\320\270\321\206\321\217 \320\277\321\200\320\260\321\206\321\226\320\262\320\275\320\270\320\272\321\226\320\262      ", nullptr));
        label_9->setText(QApplication::translate("Settings", "\320\242\320\260\320\261\320\273\320\270\321\206\321\217 \320\267 \321\202\320\262\320\260\321\200\320\270\320\275\320\260\320\274\320\270     ", nullptr));
        label_3->setText(QApplication::translate("Settings", "\320\242\320\260\320\261\320\273\320\270\321\206\321\217 \320\267 \321\201\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\276\321\216 ", nullptr));
        label_4->setText(QApplication::translate("Settings", "\320\224\321\200\320\260\320\271\320\262\320\265\321\200 \320\221\320\260\320\267\320\270 \320\264\320\260\320\275\320\270\321\205      ", nullptr));
#ifndef QT_NO_TOOLTIP
        lineDriver->setToolTip(QApplication::translate("Settings", "<html><head/><body><p><span style=\" color:#00ac14;\">QDB2     </span><span style=\" color:#000000;\"> - IBM DB2 (\320\262\320\265\321\200\321\201\321\226\321\217 7.1 \321\226 \320\262\320\270\321\211\320\265)</span></p><p><span style=\" color:#00ac14;\">QIBASE  </span><span style=\" color:#000000;\"> - Borland InterBase</span></p><p><span style=\" color:#00ac14;\">QMYSQL </span><span style=\" color:#000000;\"> - MySQL</span></p><p><span style=\" color:#00ac14;\">QOCI</span><span style=\" color:#000000;\">       - \320\224\321\200\320\260\320\271\320\262\320\265\321\200  Oracle Call Interface</span></p><p><span style=\" color:#00ac14;\">QODBC</span><span style=\" color:#000000;\">    - Open Database Connectivity (ODBC) Microsoft SQL Server</span></p><p><span style=\" color:#00ac14;\">QPSQL </span><span style=\" color:#000000;\">    - PostgreSQL (\320\262\320\265\321\200\321\201\321\226\321\217 7.3 \321\226 \320\262\320\270\321\211\320\265)</span></p><p><span style=\" color:#00ac14;\">QSQLITE  </span><span styl"
                        "e=\" color:#000000;\">- SQLite \320\262\320\265\321\200\321\201\321\226\321\217 3 </span></p><p><span style=\" color:#00ac14;\">QTDS</span><span style=\" color:#000000;\">       - \320\224\321\200\320\260\320\271\320\262\320\265\321\200Sybase Adaptive Server</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("Settings", "\320\206\320\274'\321\217 \320\241\320\265\321\200\320\262\320\265\321\200\320\260                   ", nullptr));
        label_6->setText(QApplication::translate("Settings", "\320\233\320\276\320\263\321\226\320\275    ", nullptr));
        label_7->setText(QApplication::translate("Settings", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_10->setText(QApplication::translate("Settings", "<html><head/><body><p><span style=\" color:#00ac14;\">\320\236\320\261\320\276\320\262'\321\217\320\267\320\272\320\276\320\262\321\226 \320\275\320\260\320\273\320\260\321\210\321\202\321\203\320\262\320\260\320\275\320\275\321\217</span></p><p><span style=\" font-size:10pt; color:#ff0000;\">\320\227\320\274\321\226\320\275\320\270 \320\275\320\260\320\273\320\260\321\210\321\202\321\203\320\262\320\260\320\275\321\214 \320\261\320\260\320\267\320\270 \320\264\320\260\320\275\320\270\321\205 \320\261\321\203\320\264\321\203\321\202\321\214 \320\260\320\272\321\202\320\270\320\262\320\275\321\226 \320\277\321\226\321\201\320\273\321\217 \320\277\320\265\321\200\320\265\320\267\320\260\320\277\321\203\321\201\320\272\321\203 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\270!!!! </span></p></body></html>", nullptr));
        checkBox->setText(QApplication::translate("Settings", "\320\241\321\202\320\260\320\275\320\264\320\260\321\200\321\202\320\275\321\226 \320\262\321\226\320\272\320\275\320\260 \321\200\320\265\320\264\320\260\320\263\321\203\320\262\320\260\320\275\320\275\321\217 \321\202\320\260\320\261\320\273\320\270\321\206\321\214", nullptr));
        label_8->setText(QApplication::translate("Settings", "<html><head/><body><p align=\"center\"><span style=\" color:#aa0000;\">\320\233\320\276\320\263\321\226\320\275</span> \321\226 <span style=\" color:#aa0000;\">\320\277\320\260\321\200\320\276\320\273\321\214</span> \320\277\320\276\321\202\321\200\321\226\320\261\320\275\320\276 \320\262\320\270\320\272\320\276\321\200\320\270\321\201\321\202\320\276\320\262\321\203\320\262\320\260\321\202\320\270 \321\202\321\226\320\273\321\214\320\272\320\270 \320\277\321\200\320\270 \320\277\321\226\320\264\320\272\320\273\321\216\321\207\320\265\320\275\321\226 \320\264\320\276 \320\273\320\276\320\272\320\260\320\273\321\214\320\275\320\276\320\263\320\276 \321\201\320\265\321\200\320\262\320\265\321\200\320\260 \321\217\320\272\320\270\320\271 \320\262\320\270\320\274\320\260\320\263\320\260\321\224 \320\264\320\260\320\275\321\226 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\270<span style=\" color:#aa0000;\">!!!</span></p></body></html>", nullptr));
        ButtonStandartSetings->setText(QApplication::translate("Settings", "\320\241\321\202\320\260\320\275\320\264\320\260\321\200\321\202\320\275\321\226 \320\275\320\260\320\273\320\260\321\210\321\202\321\203\320\262\320\260\320\275\320\275\321\217", nullptr));
        ButtonSave->setText(QApplication::translate("Settings", "\320\227\320\261\320\265\321\200\320\265\320\263\321\202\320\270", nullptr));
        ButtonClose->setText(QApplication::translate("Settings", "\320\222\320\270\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
