/********************************************************************************
** Form generated from reading UI file 'showfitsinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWFITSINFO_H
#define UI_SHOWFITSINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowFITSInfo
{
public:
    QListWidget *fitsInfoList;

    void setupUi(QDialog *ShowFITSInfo)
    {
        if (ShowFITSInfo->objectName().isEmpty())
            ShowFITSInfo->setObjectName(QString::fromUtf8("ShowFITSInfo"));
        ShowFITSInfo->resize(382, 500);
        fitsInfoList = new QListWidget(ShowFITSInfo);
        fitsInfoList->setObjectName(QString::fromUtf8("fitsInfoList"));
        fitsInfoList->setGeometry(QRect(10, 10, 361, 481));

        retranslateUi(ShowFITSInfo);

        QMetaObject::connectSlotsByName(ShowFITSInfo);
    } // setupUi

    void retranslateUi(QDialog *ShowFITSInfo)
    {
        ShowFITSInfo->setWindowTitle(QCoreApplication::translate("ShowFITSInfo", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowFITSInfo: public Ui_ShowFITSInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWFITSINFO_H
