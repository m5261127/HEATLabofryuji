/********************************************************************************
** Form generated from reading UI file 'pkghkgraph.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PKGHKGRAPH_H
#define UI_PKGHKGRAPH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_pkgHKgraph
{
public:
    QCustomPlot *customPlot;

    void setupUi(QDialog *pkgHKgraph)
    {
        if (pkgHKgraph->objectName().isEmpty())
            pkgHKgraph->setObjectName(QString::fromUtf8("pkgHKgraph"));
        pkgHKgraph->resize(692, 441);
        customPlot = new QCustomPlot(pkgHKgraph);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        customPlot->setGeometry(QRect(10, 10, 671, 421));

        retranslateUi(pkgHKgraph);

        QMetaObject::connectSlotsByName(pkgHKgraph);
    } // setupUi

    void retranslateUi(QDialog *pkgHKgraph)
    {
        pkgHKgraph->setWindowTitle(QCoreApplication::translate("pkgHKgraph", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pkgHKgraph: public Ui_pkgHKgraph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PKGHKGRAPH_H
