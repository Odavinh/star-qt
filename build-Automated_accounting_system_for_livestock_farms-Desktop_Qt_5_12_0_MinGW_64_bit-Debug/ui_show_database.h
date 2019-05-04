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
#include <QtWidgets/QDoubleSpinBox>
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
    QWidget *Enimals;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *labelEn_profit;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QDoubleSpinBox *BoxEnProfitMin;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_8;
    QDoubleSpinBox *BoxEnProfitMax;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelEn_spending;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QDoubleSpinBox *BoxEnSpendingMin;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QDoubleSpinBox *BoxEnSpendingMax;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelEn_number;
    QLineEdit *lineEn_number;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelEn_kind;
    QLineEdit *lineEn_kind;
    QPushButton *ButtonEn_find;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *ButtonEn_cancel;
    QPushButton *ButtonEn_save;
    QTableView *tableAnimals;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *ButtonEn_add;
    QPushButton *ButtonEn_remove;
    QPushButton *ButtonEn_select;
    QSpacerItem *horizontalSpacer_4;
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
        Show_Database->resize(719, 520);
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
        toolBox->setFrameShape(QFrame::NoFrame);
        toolBox->setFrameShadow(QFrame::Plain);
        toolBox->setLineWidth(0);
        toolBox->setMidLineWidth(0);
        Emploee = new QWidget();
        Emploee->setObjectName(QString::fromUtf8("Emploee"));
        Emploee->setGeometry(QRect(0, 0, 719, 436));
        Emploee->setStyleSheet(QString::fromUtf8("QToolBox{\n"
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
        gridLayout_2 = new QGridLayout(Emploee);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(6, -1, -1, -1);
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
        add_row->setAutoDefault(false);

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
        remove_col->setAutoDefault(false);

        horizontalLayout_2->addWidget(remove_col);

        clear_table = new QPushButton(Emploee);
        clear_table->setObjectName(QString::fromUtf8("clear_table"));
        clear_table->setMinimumSize(QSize(120, 20));
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
        clear_table->setAutoDefault(false);

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
        Button_save->setAutoDefault(false);

        horizontalLayout->addWidget(Button_save);


        gridLayout_2->addLayout(horizontalLayout, 3, 1, 1, 1);

        tableEmploee = new QTableView(Emploee);
        tableEmploee->setObjectName(QString::fromUtf8("tableEmploee"));
        tableEmploee->setSortingEnabled(true);
        tableEmploee->horizontalHeader()->setStretchLastSection(true);

        gridLayout_2->addWidget(tableEmploee, 1, 0, 1, 2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(6, 6, 6, -1);
        lineName = new QLineEdit(Emploee);
        lineName->setObjectName(QString::fromUtf8("lineName"));
        lineName->setMinimumSize(QSize(0, 22));
        lineName->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid #00AC14;\n"
"\n"
"}\n"
"QLineEdit:hover{\n"
"border:2px solid #00AC14;\n"
"}"));

        gridLayout_3->addWidget(lineName, 1, 0, 1, 1);

        linePosition = new QLineEdit(Emploee);
        linePosition->setObjectName(QString::fromUtf8("linePosition"));
        linePosition->setMinimumSize(QSize(0, 22));
        linePosition->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid #00AC14;\n"
"\n"
"}\n"
"QLineEdit:hover{\n"
"border:2px solid #00AC14;\n"
"}"));

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
        buttoSearch->setFlat(true);

        gridLayout_3->addWidget(buttoSearch, 1, 5, 1, 1);

        label_name = new QLabel(Emploee);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setStyleSheet(QString::fromUtf8("color:#00AC14;"));

        gridLayout_3->addWidget(label_name, 0, 0, 1, 1);

        label_surname = new QLabel(Emploee);
        label_surname->setObjectName(QString::fromUtf8("label_surname"));
        label_surname->setStyleSheet(QString::fromUtf8("color:#00AC14;"));

        gridLayout_3->addWidget(label_surname, 0, 2, 1, 1);

        lineEditSurname = new QLineEdit(Emploee);
        lineEditSurname->setObjectName(QString::fromUtf8("lineEditSurname"));
        lineEditSurname->setMinimumSize(QSize(0, 22));
        lineEditSurname->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid #00AC14;\n"
"\n"
"}\n"
"QLineEdit:hover{\n"
"border:2px solid #00AC14;\n"
"}"));

        gridLayout_3->addWidget(lineEditSurname, 1, 2, 1, 1);

        label_position = new QLabel(Emploee);
        label_position->setObjectName(QString::fromUtf8("label_position"));
        label_position->setStyleSheet(QString::fromUtf8("color:#00AC14;"));

        gridLayout_3->addWidget(label_position, 0, 4, 1, 1);

        BoxGender = new QComboBox(Emploee);
        BoxGender->setObjectName(QString::fromUtf8("BoxGender"));
        BoxGender->setMaximumSize(QSize(50, 16777215));

        gridLayout_3->addWidget(BoxGender, 1, 3, 1, 1);

        label_Gender = new QLabel(Emploee);
        label_Gender->setObjectName(QString::fromUtf8("label_Gender"));
        label_Gender->setStyleSheet(QString::fromUtf8("color:#00AC14;"));

        gridLayout_3->addWidget(label_Gender, 0, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 0, 0, 1, 2);

        toolBox->addItem(Emploee, QString::fromUtf8("\320\221\320\260\320\267\320\260 \320\264\320\260\320\275\320\270\321\205 \320\277\321\200\320\260\321\206\321\226\320\262\320\275\320\270\320\272\321\226\320\262"));
        Enimals = new QWidget();
        Enimals->setObjectName(QString::fromUtf8("Enimals"));
        Enimals->setGeometry(QRect(0, 0, 732, 422));
        gridLayout_5 = new QGridLayout(Enimals);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(-1, -1, 6, 6);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(3, 3, -1, -1);
        labelEn_profit = new QLabel(Enimals);
        labelEn_profit->setObjectName(QString::fromUtf8("labelEn_profit"));
        labelEn_profit->setStyleSheet(QString::fromUtf8("color:#00AC14;"));

        verticalLayout_6->addWidget(labelEn_profit);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(8);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(-1, -1, 6, -1);
        label_7 = new QLabel(Enimals);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("color:#00AC14;"));

        horizontalLayout_9->addWidget(label_7);

        BoxEnProfitMin = new QDoubleSpinBox(Enimals);
        BoxEnProfitMin->setObjectName(QString::fromUtf8("BoxEnProfitMin"));
        BoxEnProfitMin->setStyleSheet(QString::fromUtf8("color:#00AC14;"));
        BoxEnProfitMin->setMinimum(-100.000000000000000);
        BoxEnProfitMin->setMaximum(1000.990000000000009);

        horizontalLayout_9->addWidget(BoxEnProfitMin);


        horizontalLayout_11->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(8);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(-1, -1, 6, -1);
        label_8 = new QLabel(Enimals);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("color:#00AC14;"));

        horizontalLayout_10->addWidget(label_8);

        BoxEnProfitMax = new QDoubleSpinBox(Enimals);
        BoxEnProfitMax->setObjectName(QString::fromUtf8("BoxEnProfitMax"));
        BoxEnProfitMax->setStyleSheet(QString::fromUtf8("color:#00AC14;"));
        BoxEnProfitMax->setMaximum(1000.990000000000009);

        horizontalLayout_10->addWidget(BoxEnProfitMax);


        horizontalLayout_11->addLayout(horizontalLayout_10);


        verticalLayout_6->addLayout(horizontalLayout_11);


        gridLayout_6->addLayout(verticalLayout_6, 0, 2, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(3, -1, -1, 0);
        labelEn_spending = new QLabel(Enimals);
        labelEn_spending->setObjectName(QString::fromUtf8("labelEn_spending"));
        labelEn_spending->setStyleSheet(QString::fromUtf8("color:#00AC14;"));

        verticalLayout_5->addWidget(labelEn_spending);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 3, -1, -1);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(8);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(6, 0, 6, 0);
        label_5 = new QLabel(Enimals);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("color:#00AC14;"));

        horizontalLayout_5->addWidget(label_5);

        BoxEnSpendingMin = new QDoubleSpinBox(Enimals);
        BoxEnSpendingMin->setObjectName(QString::fromUtf8("BoxEnSpendingMin"));
        BoxEnSpendingMin->setStyleSheet(QString::fromUtf8("color:#00AC14;"));
        BoxEnSpendingMin->setMinimum(-100.000000000000000);
        BoxEnSpendingMin->setMaximum(1000.990000000000009);

        horizontalLayout_5->addWidget(BoxEnSpendingMin);


        horizontalLayout_7->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(8);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, -1, 6, 0);
        label_6 = new QLabel(Enimals);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("color:#00AC14;"));

        horizontalLayout_6->addWidget(label_6);

        BoxEnSpendingMax = new QDoubleSpinBox(Enimals);
        BoxEnSpendingMax->setObjectName(QString::fromUtf8("BoxEnSpendingMax"));
        BoxEnSpendingMax->setStyleSheet(QString::fromUtf8("color:#00AC14;"));
        BoxEnSpendingMax->setMinimum(0.000000000000000);
        BoxEnSpendingMax->setMaximum(10000.000000000000000);
        BoxEnSpendingMax->setSingleStep(1.000000000000000);

        horizontalLayout_6->addWidget(BoxEnSpendingMax);


        horizontalLayout_7->addLayout(horizontalLayout_6);


        verticalLayout_5->addLayout(horizontalLayout_7);


        gridLayout_6->addLayout(verticalLayout_5, 0, 1, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(6, -1, 6, -1);
        labelEn_number = new QLabel(Enimals);
        labelEn_number->setObjectName(QString::fromUtf8("labelEn_number"));
        labelEn_number->setStyleSheet(QString::fromUtf8("color:#00AC14;"));

        verticalLayout_3->addWidget(labelEn_number);

        lineEn_number = new QLineEdit(Enimals);
        lineEn_number->setObjectName(QString::fromUtf8("lineEn_number"));
        lineEn_number->setMinimumSize(QSize(90, 22));
        lineEn_number->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid #00AC14;\n"
"\n"
"}\n"
"QLineEdit:hover{\n"
"border:2px solid #00AC14;\n"
"}"));

        verticalLayout_3->addWidget(lineEn_number);


        horizontalLayout_8->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        labelEn_kind = new QLabel(Enimals);
        labelEn_kind->setObjectName(QString::fromUtf8("labelEn_kind"));
        labelEn_kind->setStyleSheet(QString::fromUtf8("color:#00AC14;"));

        verticalLayout_4->addWidget(labelEn_kind);

        lineEn_kind = new QLineEdit(Enimals);
        lineEn_kind->setObjectName(QString::fromUtf8("lineEn_kind"));
        lineEn_kind->setMinimumSize(QSize(90, 22));
        lineEn_kind->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border:1px solid #00AC14;\n"
"\n"
"}\n"
"QLineEdit:hover{\n"
"border:2px solid #00AC14;\n"
"}"));

        verticalLayout_4->addWidget(lineEn_kind);


        horizontalLayout_8->addLayout(verticalLayout_4);


        gridLayout_6->addLayout(horizontalLayout_8, 0, 0, 1, 1);

        ButtonEn_find = new QPushButton(Enimals);
        ButtonEn_find->setObjectName(QString::fromUtf8("ButtonEn_find"));
        ButtonEn_find->setMinimumSize(QSize(70, 20));
        ButtonEn_find->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        ButtonEn_find->setFlat(true);

        gridLayout_6->addWidget(ButtonEn_find, 0, 3, 1, 1);


        gridLayout_5->addLayout(gridLayout_6, 0, 0, 1, 3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(6, 6, 6, 6);
        ButtonEn_cancel = new QPushButton(Enimals);
        ButtonEn_cancel->setObjectName(QString::fromUtf8("ButtonEn_cancel"));
        ButtonEn_cancel->setMinimumSize(QSize(70, 20));
        ButtonEn_cancel->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        ButtonEn_cancel->setAutoDefault(false);

        horizontalLayout_3->addWidget(ButtonEn_cancel);

        ButtonEn_save = new QPushButton(Enimals);
        ButtonEn_save->setObjectName(QString::fromUtf8("ButtonEn_save"));
        ButtonEn_save->setMinimumSize(QSize(70, 20));
        ButtonEn_save->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        ButtonEn_save->setAutoDefault(false);

        horizontalLayout_3->addWidget(ButtonEn_save);


        gridLayout_5->addLayout(horizontalLayout_3, 3, 2, 1, 1);

        tableAnimals = new QTableView(Enimals);
        tableAnimals->setObjectName(QString::fromUtf8("tableAnimals"));
        tableAnimals->setSortingEnabled(true);
        tableAnimals->horizontalHeader()->setStretchLastSection(true);

        gridLayout_5->addWidget(tableAnimals, 1, 0, 1, 3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(5);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(6, 6, 6, 6);
        ButtonEn_add = new QPushButton(Enimals);
        ButtonEn_add->setObjectName(QString::fromUtf8("ButtonEn_add"));
        ButtonEn_add->setMinimumSize(QSize(80, 20));
        ButtonEn_add->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        horizontalLayout_4->addWidget(ButtonEn_add);

        ButtonEn_remove = new QPushButton(Enimals);
        ButtonEn_remove->setObjectName(QString::fromUtf8("ButtonEn_remove"));
        ButtonEn_remove->setMinimumSize(QSize(90, 20));
        ButtonEn_remove->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        ButtonEn_remove->setAutoDefault(false);

        horizontalLayout_4->addWidget(ButtonEn_remove);

        ButtonEn_select = new QPushButton(Enimals);
        ButtonEn_select->setObjectName(QString::fromUtf8("ButtonEn_select"));
        ButtonEn_select->setMinimumSize(QSize(120, 20));
        ButtonEn_select->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        ButtonEn_select->setAutoDefault(false);

        horizontalLayout_4->addWidget(ButtonEn_select);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        gridLayout_5->addLayout(horizontalLayout_4, 3, 1, 1, 1);

        toolBox->addItem(Enimals, QString::fromUtf8("\320\221\320\260\320\267\320\260 \320\264\320\260\320\275\320\270\321\205 \321\202\320\262\320\260\321\200\320\270\320\275 \320\275\320\260 \321\204\320\265\321\200\320\274\321\226"));
        Statistics = new QWidget();
        Statistics->setObjectName(QString::fromUtf8("Statistics"));
        Statistics->setGeometry(QRect(0, 0, 719, 436));
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
        tableStatistics->setSortingEnabled(true);
        tableStatistics->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableStatistics->horizontalHeader()->setStretchLastSection(true);

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
        toolBox->layout()->setSpacing(7);
        clear_table->setDefault(false);
        Button_save->setDefault(false);
        buttoSearch->setDefault(true);
        ButtonEn_find->setDefault(true);
        pushsaveSt->setDefault(true);


        QMetaObject::connectSlotsByName(Show_Database);
    } // setupUi

    void retranslateUi(QDialog *Show_Database)
    {
        Show_Database->setWindowTitle(QApplication::translate("Show_Database", "Dialog", nullptr));
        add_row->setText(QApplication::translate("Show_Database", "&\320\235\320\276\320\262\320\270\320\271 \321\200\321\217\320\264\320\276\320\272", nullptr));
        remove_col->setText(QApplication::translate("Show_Database", "&\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270 \321\200\321\217\320\264\320\276\320\272", nullptr));
        clear_table->setText(QApplication::translate("Show_Database", "&\320\236\320\261\320\275\320\276\320\262\320\270\321\202\320\270 \321\202\320\260\320\261\320\273\320\270\321\206\321\216", nullptr));
        Button_cancel->setText(QApplication::translate("Show_Database", "\320\222\321\226\320\264\320\274\321\226\320\275\320\270&\321\202\320\270", nullptr));
#ifndef QT_NO_TOOLTIP
        Button_save->setToolTip(QApplication::translate("Show_Database", "<html><head/><body><p>ctrl + P</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        Button_save->setText(QApplication::translate("Show_Database", "&\320\227\320\261\320\265\321\200\320\265\320\263\321\202\320\270", nullptr));
        buttoSearch->setText(QApplication::translate("Show_Database", "&\320\227\320\275\320\260\320\271\321\202\320\270", nullptr));
        label_name->setText(QApplication::translate("Show_Database", "<html><head/><body><p align=\"center\">\320\206\320\274\321\217</p></body></html>", nullptr));
        label_surname->setText(QApplication::translate("Show_Database", "<html><head/><body><p align=\"center\">\320\237\321\200\321\226\320\267\320\262\320\270\321\211\320\265</p></body></html>", nullptr));
        label_position->setText(QApplication::translate("Show_Database", "<html><head/><body><p align=\"center\">\320\237\320\276\321\201\320\260\320\264\320\260</p></body></html>", nullptr));
        label_Gender->setText(QApplication::translate("Show_Database", "<html><head/><body><p align=\"center\">\320\241\321\202\320\260\321\202\321\214</p></body></html>", nullptr));
        toolBox->setItemText(toolBox->indexOf(Emploee), QApplication::translate("Show_Database", "\320\221\320\260\320\267\320\260 \320\264\320\260\320\275\320\270\321\205 \320\277\321\200\320\260\321\206\321\226\320\262\320\275\320\270\320\272\321\226\320\262", nullptr));
        labelEn_profit->setText(QApplication::translate("Show_Database", "<html><head/><body><p align=\"center\">TextLabel</p></body></html>", nullptr));
        label_7->setText(QApplication::translate("Show_Database", "Min", nullptr));
        label_8->setText(QApplication::translate("Show_Database", "Max", nullptr));
        labelEn_spending->setText(QApplication::translate("Show_Database", "<html><head/><body><p align=\"center\">TextLabel</p></body></html>", nullptr));
        label_5->setText(QApplication::translate("Show_Database", "Min", nullptr));
        label_6->setText(QApplication::translate("Show_Database", "Max", nullptr));
        labelEn_number->setText(QApplication::translate("Show_Database", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        labelEn_kind->setText(QApplication::translate("Show_Database", "<html><head/><body><p align=\"center\">TextLabel</p></body></html>", nullptr));
        ButtonEn_find->setText(QApplication::translate("Show_Database", "\320\227\320\275\320\277\320\271\321\202\320\270", nullptr));
        ButtonEn_cancel->setText(QApplication::translate("Show_Database", "\320\222\321\226\320\264\320\274\321\226\320\275\320\270&\321\202\320\270", nullptr));
        ButtonEn_save->setText(QApplication::translate("Show_Database", "&\320\227\320\261\320\265\321\200\320\272\320\263\321\202\320\270", nullptr));
        ButtonEn_add->setText(QApplication::translate("Show_Database", "&\320\235\320\276\320\262\320\270\320\271 \321\200\321\217\320\264\320\276\320\272", nullptr));
        ButtonEn_remove->setText(QApplication::translate("Show_Database", "&\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270 \321\200\321\217\320\264\320\276\320\272", nullptr));
        ButtonEn_select->setText(QApplication::translate("Show_Database", "&\320\236\320\261\320\275\320\276\320\262\320\270\321\202\320\270 \321\202\320\260\320\261\320\270\321\206\321\216", nullptr));
        toolBox->setItemText(toolBox->indexOf(Enimals), QApplication::translate("Show_Database", "\320\221\320\260\320\267\320\260 \320\264\320\260\320\275\320\270\321\205 \321\202\320\262\320\260\321\200\320\270\320\275 \320\275\320\260 \321\204\320\265\321\200\320\274\321\226", nullptr));
        pushAddSt->setText(QApplication::translate("Show_Database", "&\320\235\320\276\320\262\320\270\320\271 \321\200\321\217\320\264\320\276\320\272", nullptr));
        pushDeleteSt->setText(QApplication::translate("Show_Database", "&\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270 \321\200\321\217\320\264\320\276\320\272", nullptr));
        pushsaveSt->setText(QApplication::translate("Show_Database", "&\320\227\320\261\320\265\321\200\320\265\320\263\321\202\320\270", nullptr));
        pushButtonCancelSt->setText(QApplication::translate("Show_Database", "\320\222\321\226\320\264\320\274\321\226\320\275\320\270&\321\202\320\270", nullptr));
        toolBox->setItemText(toolBox->indexOf(Statistics), QApplication::translate("Show_Database", "\320\221\320\260\320\267\320\260 \320\264\320\260\320\275\320\270\321\205 \320\265\321\204\320\265\320\272\321\202\320\270\320\262\320\275\320\276\321\201\321\202\321\226 \321\204\320\265\321\200\320\274\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Show_Database: public Ui_Show_Database {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_DATABASE_H
