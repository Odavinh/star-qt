/********************************************************************************
** Form generated from reading UI file 'information.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATION_H
#define UI_INFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Information
{
public:
    QGridLayout *gridLayout;
    QPushButton *ButtonGit;
    QPushButton *ButtonQT;
    QSpacerItem *verticalSpacer;
    QPushButton *ButtonExit;
    QTextEdit *textEdit;

    void setupUi(QDialog *Information)
    {
        if (Information->objectName().isEmpty())
            Information->setObjectName(QString::fromUtf8("Information"));
        Information->resize(471, 294);
        gridLayout = new QGridLayout(Information);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ButtonGit = new QPushButton(Information);
        ButtonGit->setObjectName(QString::fromUtf8("ButtonGit"));
        ButtonGit->setMinimumSize(QSize(40, 20));
        ButtonGit->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout->addWidget(ButtonGit, 1, 1, 1, 1);

        ButtonQT = new QPushButton(Information);
        ButtonQT->setObjectName(QString::fromUtf8("ButtonQT"));
        ButtonQT->setMinimumSize(QSize(40, 20));
        ButtonQT->setMaximumSize(QSize(70, 16777215));
        QFont font;
        font.setPointSize(8);
        ButtonQT->setFont(font);
        ButtonQT->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout->addWidget(ButtonQT, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        ButtonExit = new QPushButton(Information);
        ButtonExit->setObjectName(QString::fromUtf8("ButtonExit"));
        ButtonExit->setMinimumSize(QSize(70, 20));
        ButtonExit->setMaximumSize(QSize(70, 16777215));
        ButtonExit->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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

        gridLayout->addWidget(ButtonExit, 3, 1, 1, 1);

        textEdit = new QTextEdit(Information);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setEnabled(false);
        textEdit->setStyleSheet(QString::fromUtf8("Border:solid 0px #F0F0F0;"));

        gridLayout->addWidget(textEdit, 0, 0, 4, 1);


        retranslateUi(Information);

        QMetaObject::connectSlotsByName(Information);
    } // setupUi

    void retranslateUi(QDialog *Information)
    {
        Information->setWindowTitle(QApplication::translate("Information", "Dialog", nullptr));
        ButtonGit->setText(QApplication::translate("Information", "Git", nullptr));
        ButtonQT->setText(QApplication::translate("Information", "QT", nullptr));
        ButtonExit->setText(QApplication::translate("Information", "Exit", nullptr));
        textEdit->setHtml(QApplication::translate("Information", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%; background-color:transparent;\"><span style=\" font-family:'Liberation Serif,serif'; font-size:12pt; color:#00ac14;\">\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\260 AAS \320\261\321\203\320\273\320\260 \321\201\321\202\320\262\320\276\321\200\320\265\320\275\320\260 \320\262\320\270\320\272\320\273\321\216\321\207\320\275\320\276 \320\262 \320\275\320\260\320\262\321\207\320\260\320\273\321\214\320\275\320\270\321\205 \321\206\321\226\320\273\321\217\321\205 \320\262 \321\204\320\276\321\200\320\274\320\260\321\202\321\226"
                        " \320\272\321\203\321\200\321\201\320\276\320\262\320\276\321\227 \321\226 \320\275\320\265 \320\277\321\226\320\264\320\273\321\217\320\263\320\260\321\224 \320\272\320\276\320\274\320\265\321\200\321\206\321\226\320\271\320\275\320\276\320\274\321\203 \320\262\320\270\320\272\320\276\321\200\320\270\321\201\321\202\320\260\320\275\320\275\321\216!!!</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%; background-color:transparent;\"><span style=\" font-family:'Liberation Serif,serif'; font-size:10pt; color:#000000;\">\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\260 AAS(Automated accouting system - \320\220\320\262\321\202\320\276\320\274\320\260\321\202\320\270\320\267\320\276\320\262\320\260\320\275\320\260 \321\201\320\270\321\201\321\202\320\265\320\274\320\260 \320\276\320\261\320\273\321\226\320\272\321\203) \320\237\321\200\320\276\320\264\321\203\320\272\321\202 49.corp \321\200\320\265\320"
                        "\260\320\273\321\226\320\267\321\203\321\224 \321\201\320\270\321\201\321\202\320\265\320\274\321\203 \320\276\320\261\320\273\321\226\320\272\321\203 \320\277\321\200\320\260\321\206\321\226\320\262\320\275\320\270\320\272\321\226\320\262 \321\226 \321\202\320\262\320\260\321\200\320\270\320\275 \320\260 \321\202\320\260\320\272\320\276\320\266 \320\267\320\261\320\265\321\200\320\265\320\266\320\265\320\275\320\275\321\217 \321\201\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\270 \320\267\320\260 \320\277\320\265\320\262\320\275\320\270\320\271 \321\207\320\260\321\201 \321\200\320\276\320\261\320\276\321\202\320\270. \320\235\320\260\320\264\320\260\321\224 \320\274\320\276\320\266\320\273\320\270\320\262\321\226\321\201\321\202\321\214 \321\210\320\262\320\270\320\264\320\272\320\276\320\263\320\276 \321\200\320\265\320\264\320\260\320\263\321\203\320\262\320\260\320\275\320\275\321\217 \321\226\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\227 \320\262 \321\204"
                        "\320\276\321\200\320\274\320\260\321\202\321\226 \321\201\321\202\320\260\320\275\320\264\320\260\321\200\321\202\320\275\320\270\321\205 \321\202\320\260\320\261\320\273\320\270\321\206\321\214 \320\261\320\260\320\267 \320\264\320\260\320\275\320\270\321\205. \320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\260 \320\275\320\260\320\264\320\260\321\224 \320\274\320\276\320\266\320\273\320\270\320\262\321\226\321\201\321\202\321\214 \320\267\320\274\321\226\320\275\321\216\320\262\320\260\321\202\320\270 \321\201\321\202\320\260\320\275\320\264\320\260\321\200\321\202\320\275\321\203 \320\261\320\260\320\267\321\203 \320\264\320\260\320\275\320\270\321\205 \320\275\320\260 \320\272\320\276\321\200\320\270\321\201\321\202\321\203\320\262\320\260\321\206\321\214\320\272\321\203 \321\226\320\267 \320\274\321\226\320\275\321\226\320\274\320\260\320\273\321\214\320\275\320\270\320\274\320\270 \320\275\320\265 \320\267\321\200\321\203\321\207\320\275\320\276\321\201\321\202\321\217\320\274\320\270  \320\277"
                        "\321\200\320\260\321\206\321\216\320\262\320\260\321\202\320\270 \320\267 \321\201\320\270\321\201\321\202\320\265\320\274\320\276\321\216.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%; background-color:transparent;\"><span style=\" font-family:'Liberation Serif,serif'; font-size:10pt; color:#000000;\">\320\222\320\265\321\200\321\201\321\226\321\217 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\270: 1. 12 Beta.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%; background-color:transparent;\"><span style=\" font-family:'Liberation Serif,serif'; font-size:10pt; color:#000000;\">\320\236\321\201\321\202\320\260\320\275\320\275\321\224 \320\276\320\275\320\276\320\262\320\273\320\265\320\275\320\275\321\217: 2019-04-30.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-lef"
                        "t:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:100%; background-color:transparent;\"><span style=\" font-family:'Liberation Serif,serif'; font-size:10pt; color:#000000;\">\320\222\320\270\321\200\320\276\320\261\320\275\320\270\320\272: \320\237.\320\234.\320\204(49.corp) </span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Information: public Ui_Information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATION_H
