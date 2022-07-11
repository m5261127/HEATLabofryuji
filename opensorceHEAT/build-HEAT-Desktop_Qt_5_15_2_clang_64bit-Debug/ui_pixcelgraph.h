/********************************************************************************
** Form generated from reading UI file 'pixcelgraph.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIXCELGRAPH_H
#define UI_PIXCELGRAPH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_PixcelGraph
{
public:
    QCustomPlot *widget;

    void setupUi(QDialog *PixcelGraph)
    {
        if (PixcelGraph->objectName().isEmpty())
            PixcelGraph->setObjectName(QString::fromUtf8("PixcelGraph"));
        PixcelGraph->resize(638, 496);
        widget = new QCustomPlot(PixcelGraph);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 611, 471));

        retranslateUi(PixcelGraph);

        QMetaObject::connectSlotsByName(PixcelGraph);
    } // setupUi

    void retranslateUi(QDialog *PixcelGraph)
    {
        PixcelGraph->setWindowTitle(QCoreApplication::translate("PixcelGraph", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PixcelGraph: public Ui_PixcelGraph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIXCELGRAPH_H
