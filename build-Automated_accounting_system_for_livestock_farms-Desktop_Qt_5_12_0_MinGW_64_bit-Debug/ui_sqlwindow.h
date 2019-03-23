/********************************************************************************
** Form generated from reading UI file 'sqlwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SQLWINDOW_H
#define UI_SQLWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SQLWindow
{
public:

    void setupUi(QWidget *SQLWindow)
    {
        if (SQLWindow->objectName().isEmpty())
            SQLWindow->setObjectName(QString::fromUtf8("SQLWindow"));
        SQLWindow->resize(501, 432);

        retranslateUi(SQLWindow);

        QMetaObject::connectSlotsByName(SQLWindow);
    } // setupUi

    void retranslateUi(QWidget *SQLWindow)
    {
        SQLWindow->setWindowTitle(QApplication::translate("SQLWindow", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SQLWindow: public Ui_SQLWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SQLWINDOW_H
