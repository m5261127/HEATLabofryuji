/********************************************************************************
** Form generated from reading UI file 'showdbinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWDBINFO_H
#define UI_SHOWDBINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowDBInfo
{
public:
    QListWidget *dbInfoList;

    void setupUi(QDialog *ShowDBInfo)
    {
        if (ShowDBInfo->objectName().isEmpty())
            ShowDBInfo->setObjectName(QString::fromUtf8("ShowDBInfo"));
        ShowDBInfo->resize(379, 366);
        dbInfoList = new QListWidget(ShowDBInfo);
        dbInfoList->setObjectName(QString::fromUtf8("dbInfoList"));
        dbInfoList->setGeometry(QRect(10, 10, 361, 341));

        retranslateUi(ShowDBInfo);

        QMetaObject::connectSlotsByName(ShowDBInfo);
    } // setupUi

    void retranslateUi(QDialog *ShowDBInfo)
    {
        ShowDBInfo->setWindowTitle(QCoreApplication::translate("ShowDBInfo", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowDBInfo: public Ui_ShowDBInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWDBINFO_H
