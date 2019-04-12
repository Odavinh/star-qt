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
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_ChangeTableAnimals
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ChangeTableAnimals)
    {
        if (ChangeTableAnimals->objectName().isEmpty())
            ChangeTableAnimals->setObjectName(QString::fromUtf8("ChangeTableAnimals"));
        ChangeTableAnimals->resize(400, 300);
        buttonBox = new QDialogButtonBox(ChangeTableAnimals);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(290, 20, 81, 241));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(ChangeTableAnimals);
        QObject::connect(buttonBox, SIGNAL(accepted()), ChangeTableAnimals, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ChangeTableAnimals, SLOT(reject()));

        QMetaObject::connectSlotsByName(ChangeTableAnimals);
    } // setupUi

    void retranslateUi(QDialog *ChangeTableAnimals)
    {
        ChangeTableAnimals->setWindowTitle(QApplication::translate("ChangeTableAnimals", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeTableAnimals: public Ui_ChangeTableAnimals {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGETABLEANIMALS_H
