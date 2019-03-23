/********************************************************************************
** Form generated from reading UI file 'show_database.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_DATABASE_H
#define UI_SHOW_DATABASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Show_Database
{
public:
    QGridLayout *gridLayout;
    QToolBox *toolBox;
    QWidget *Emploee;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *add_row;
    QPushButton *remove_col;
    QPushButton *clear_table;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *Button_cancel;
    QPushButton *Button_save;
    QTableView *tableEmploee;
    QGridLayout *gridLayout_3;
    QLineEdit *lineName;
    QLineEdit *linePosition;
    QPushButton *buttoSearch;
    QLabel *label_name;
    QLabel *label_surname;
    QLineEdit *lineEditSurname;
    QLabel *label_position;
    QComboBox *BoxGender;
    QLabel *label_Gender;
    QWidget *Statistics;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout;
    QPushButton *pushAddSt;
    QPushButton *pushDeleteSt;
    QTableView *tableStatistics;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushsaveSt;
    QPushButton *pushButtonCancelSt;

    void setupUi(QDialog *Show_Database)
    {
        if (Show_Database->objectName().isEmpty())
            Show_Database->setObjectName(QString::fromUtf8("Show_Database"));
        Show_Database->resize(592, 489);
        gridLayout = new QGridLayout(Show_Database);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        toolBox = new QToolBox(Show_Database);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setStyleSheet(QString::fromUtf8("QToolBox{\n"
"background:#00AC14;\n"
"color:#FFE53E;\n"
"border:0px solid #FFFFFF;\n"
"\n"
"}\n"
"QToolBox:hover{\n"
"background:#2DBE3B;\n"
"color:#FFE53E;\n"
"border:0px solid #FFFFFF;\n"
"}\n"
"QToolBox:pressed{\n"
"background:qlineargradient(spread:reflect, x1:0.433, y1:0, x2:0.438494, y2:0.500227, stop:0 rgba(255, 255, 255, 255), stop:0.365169 rgba(49, 196, 64, 255));\n"
"color:#FFE53E;\n"
"border:0px solid #FFFFFF;\n"
"}"));
        Emploee = new QWidget();
        Emploee->setObjectName(QString::fromUtf8("Emploee"));
        Emploee->setGeometry(QRect(0, 0, 592, 435));
        gridLayout_2 = new QGridLayout(Emploee);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        add_row = new QPushButton(Emploee);
        add_row->setObjectName(QString::fromUtf8("add_row"));
        add_row->setMinimumSize(QSize(80, 20));
        add_row->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout_2->addWidget(add_row);

        remove_col = new QPushButton(Emploee);
        remove_col->setObjectName(QString::fromUtf8("remove_col"));
        remove_col->setMinimumSize(QSize(90, 20));
        remove_col->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout_2->addWidget(remove_col);

        clear_table = new QPushButton(Emploee);
        clear_table->setObjectName(QString::fromUtf8("clear_table"));
        clear_table->setMinimumSize(QSize(140, 20));
        clear_table->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout_2->addWidget(clear_table);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        gridLayout_2->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 6, 6);
        Button_cancel = new QPushButton(Emploee);
        Button_cancel->setObjectName(QString::fromUtf8("Button_cancel"));
        Button_cancel->setMinimumSize(QSize(70, 20));
        QFont font;
        font.setPointSize(10);
        Button_cancel->setFont(font);
        Button_cancel->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout->addWidget(Button_cancel);

        Button_save = new QPushButton(Emploee);
        Button_save->setObjectName(QString::fromUtf8("Button_save"));
        Button_save->setMinimumSize(QSize(70, 20));
        Button_save->setFont(font);
        Button_save->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout->addWidget(Button_save);


        gridLayout_2->addLayout(horizontalLayout, 3, 1, 1, 1);

        tableEmploee = new QTableView(Emploee);
        tableEmploee->setObjectName(QString::fromUtf8("tableEmploee"));
        tableEmploee->setSortingEnabled(true);

        gridLayout_2->addWidget(tableEmploee, 1, 0, 1, 2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(6, 6, 6, -1);
        lineName = new QLineEdit(Emploee);
        lineName->setObjectName(QString::fromUtf8("lineName"));

        gridLayout_3->addWidget(lineName, 1, 0, 1, 1);

        linePosition = new QLineEdit(Emploee);
        linePosition->setObjectName(QString::fromUtf8("linePosition"));

        gridLayout_3->addWidget(linePosition, 1, 4, 1, 1);

        buttoSearch = new QPushButton(Emploee);
        buttoSearch->setObjectName(QString::fromUtf8("buttoSearch"));
        buttoSearch->setMinimumSize(QSize(70, 20));
        buttoSearch->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout_3->addWidget(buttoSearch, 1, 5, 1, 1);

        label_name = new QLabel(Emploee);
        label_name->setObjectName(QString::fromUtf8("label_name"));

        gridLayout_3->addWidget(label_name, 0, 0, 1, 1);

        label_surname = new QLabel(Emploee);
        label_surname->setObjectName(QString::fromUtf8("label_surname"));

        gridLayout_3->addWidget(label_surname, 0, 2, 1, 1);

        lineEditSurname = new QLineEdit(Emploee);
        lineEditSurname->setObjectName(QString::fromUtf8("lineEditSurname"));

        gridLayout_3->addWidget(lineEditSurname, 1, 2, 1, 1);

        label_position = new QLabel(Emploee);
        label_position->setObjectName(QString::fromUtf8("label_position"));

        gridLayout_3->addWidget(label_position, 0, 4, 1, 1);

        BoxGender = new QComboBox(Emploee);
        BoxGender->setObjectName(QString::fromUtf8("BoxGender"));
        BoxGender->setMaximumSize(QSize(50, 16777215));

        gridLayout_3->addWidget(BoxGender, 1, 3, 1, 1);

        label_Gender = new QLabel(Emploee);
        label_Gender->setObjectName(QString::fromUtf8("label_Gender"));

        gridLayout_3->addWidget(label_Gender, 0, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 0, 0, 1, 2);

        toolBox->addItem(Emploee, QString::fromUtf8("\320\221\320\260\320\267\320\260 \320\264\320\260\320\275\320\270\321\205 \320\277\321\200\320\260\321\206\321\226\320\262\320\275\320\270\320\272\321\226\320\262"));
        Statistics = new QWidget();
        Statistics->setObjectName(QString::fromUtf8("Statistics"));
        Statistics->setGeometry(QRect(0, 0, 592, 435));
        gridLayout_4 = new QGridLayout(Statistics);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(8);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        pushAddSt = new QPushButton(Statistics);
        pushAddSt->setObjectName(QString::fromUtf8("pushAddSt"));
        pushAddSt->setMinimumSize(QSize(0, 20));
        pushAddSt->setMaximumSize(QSize(200, 16777215));
        pushAddSt->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        verticalLayout->addWidget(pushAddSt);

        pushDeleteSt = new QPushButton(Statistics);
        pushDeleteSt->setObjectName(QString::fromUtf8("pushDeleteSt"));
        pushDeleteSt->setMinimumSize(QSize(0, 20));
        pushDeleteSt->setMaximumSize(QSize(200, 16777215));
        pushDeleteSt->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        verticalLayout->addWidget(pushDeleteSt);


        gridLayout_4->addLayout(verticalLayout, 2, 2, 1, 1);

        tableStatistics = new QTableView(Statistics);
        tableStatistics->setObjectName(QString::fromUtf8("tableStatistics"));
        tableStatistics->setMinimumSize(QSize(300, 0));

        gridLayout_4->addWidget(tableStatistics, 0, 0, 4, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(8);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        pushsaveSt = new QPushButton(Statistics);
        pushsaveSt->setObjectName(QString::fromUtf8("pushsaveSt"));
        pushsaveSt->setMinimumSize(QSize(70, 20));
        pushsaveSt->setMaximumSize(QSize(200, 16777215));
        pushsaveSt->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        verticalLayout_2->addWidget(pushsaveSt);

        pushButtonCancelSt = new QPushButton(Statistics);
        pushButtonCancelSt->setObjectName(QString::fromUtf8("pushButtonCancelSt"));
        pushButtonCancelSt->setMinimumSize(QSize(70, 20));
        pushButtonCancelSt->setMaximumSize(QSize(200, 16777215));
        pushButtonCancelSt->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        verticalLayout_2->addWidget(pushButtonCancelSt);


        gridLayout_4->addLayout(verticalLayout_2, 3, 2, 1, 1);

        toolBox->addItem(Statistics, QString::fromUtf8("\320\221\320\260\320\267\320\260 \320\264\320\260\320\275\320\270\321\205 \320\265\321\204\320\265\320\272\321\202\320\270\320\262\320\275\320\276\321\201\321\202\321\226 \321\204\320\265\321\200\320\274\320\270"));

        gridLayout->addWidget(toolBox, 0, 0, 1, 1);


        retranslateUi(Show_Database);

        toolBox->setCurrentIndex(0);
        Button_save->setDefault(true);


        QMetaObject::connectSlotsByName(Show_Database);
    } // setupUi

    void retranslateUi(QDialog *Show_Database)
    {
        Show_Database->setWindowTitle(QApplication::translate("Show_Database", "Dialog", nullptr));
        add_row->setText(QApplication::translate("Show_Database", "\320\235\320\276\320\262\320\270\320\271 \321\200\321\217\320\264\320\276\320\272", nullptr));
        remove_col->setText(QApplication::translate("Show_Database", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270 \321\200\321\217\320\264\320\276\320\272", nullptr));
        clear_table->setText(QApplication::translate("Show_Database", "\320\237\320\265\321\200\320\265\320\267\320\260\320\277\320\276\320\262\320\275\320\270\321\202\320\270 \321\202\320\260\320\261\320\273\320\270\321\206\321\216", nullptr));
        Button_cancel->setText(QApplication::translate("Show_Database", "\320\222\321\226\320\264\320\274\321\226\320\275\320\270\321\202\320\270", nullptr));
        Button_save->setText(QApplication::translate("Show_Database", "\320\227\320\261\320\265\321\200\320\265\320\263\321\202\320\270", nullptr));
        buttoSearch->setText(QApplication::translate("Show_Database", "\320\227\320\275\320\260\320\271\321\202\320\270", nullptr));
        label_name->setText(QApplication::translate("Show_Database", "\320\206\320\274\321\217", nullptr));
        label_surname->setText(QApplication::translate("Show_Database", "\320\244\320\260\320\274\321\226\320\273\321\226\321\217", nullptr));
        label_position->setText(QApplication::translate("Show_Database", "\320\237\320\276\321\201\320\260\320\264\320\260", nullptr));
        label_Gender->setText(QApplication::translate("Show_Database", "\320\241\321\202\320\260\321\202\321\214", nullptr));
        toolBox->setItemText(toolBox->indexOf(Emploee), QApplication::translate("Show_Database", "\320\221\320\260\320\267\320\260 \320\264\320\260\320\275\320\270\321\205 \320\277\321\200\320\260\321\206\321\226\320\262\320\275\320\270\320\272\321\226\320\262", nullptr));
        pushAddSt->setText(QApplication::translate("Show_Database", "\320\235\320\276\320\262\320\270\320\271 \321\200\321\217\320\264\320\276\320\272", nullptr));
        pushDeleteSt->setText(QApplication::translate("Show_Database", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270 \321\200\321\217\320\264\320\276\320\272", nullptr));
        pushsaveSt->setText(QApplication::translate("Show_Database", "\320\227\320\261\320\265\321\200\320\265\320\263\321\202\320\270", nullptr));
        pushButtonCancelSt->setText(QApplication::translate("Show_Database", "\320\222\321\226\320\264\320\274\321\226\320\275\320\270\321\202\320\270", nullptr));
        toolBox->setItemText(toolBox->indexOf(Statistics), QApplication::translate("Show_Database", "\320\221\320\260\320\267\320\260 \320\264\320\260\320\275\320\270\321\205 \320\265\321\204\320\265\320\272\321\202\320\270\320\262\320\275\320\276\321\201\321\202\321\226 \321\204\320\265\321\200\320\274\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Show_Database: public Ui_Show_Database {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_DATABASE_H
