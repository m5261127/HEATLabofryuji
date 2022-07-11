/********************************************************************************
** Form generated from reading UI file 'tiling.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TILING_H
#define UI_TILING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Tiling
{
public:

    void setupUi(QDialog *Tiling)
    {
        if (Tiling->objectName().isEmpty())
            Tiling->setObjectName(QString::fromUtf8("Tiling"));
        Tiling->resize(956, 614);

        retranslateUi(Tiling);

        QMetaObject::connectSlotsByName(Tiling);
    } // setupUi

    void retranslateUi(QDialog *Tiling)
    {
        Tiling->setWindowTitle(QCoreApplication::translate("Tiling", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tiling: public Ui_Tiling {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TILING_H
