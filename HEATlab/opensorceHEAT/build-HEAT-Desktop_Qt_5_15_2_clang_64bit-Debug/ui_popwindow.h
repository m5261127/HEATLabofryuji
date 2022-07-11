/********************************************************************************
** Form generated from reading UI file 'popwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POPWINDOW_H
#define UI_POPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include "showimage.h"

QT_BEGIN_NAMESPACE

class Ui_PopWindow
{
public:
    ShowImage *anotherView;

    void setupUi(QDialog *PopWindow)
    {
        if (PopWindow->objectName().isEmpty())
            PopWindow->setObjectName(QString::fromUtf8("PopWindow"));
        PopWindow->resize(536, 318);
        anotherView = new ShowImage(PopWindow);
        anotherView->setObjectName(QString::fromUtf8("anotherView"));
        anotherView->setGeometry(QRect(20, 20, 494, 276));

        retranslateUi(PopWindow);

        QMetaObject::connectSlotsByName(PopWindow);
    } // setupUi

    void retranslateUi(QDialog *PopWindow)
    {
        PopWindow->setWindowTitle(QCoreApplication::translate("PopWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PopWindow: public Ui_PopWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POPWINDOW_H
