/********************************************************************************
** Form generated from reading UI file 'targetmodel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TARGETMODEL_H
#define UI_TARGETMODEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "rendering.h"

QT_BEGIN_NAMESPACE

class Ui_TargetModel
{
public:
    Rendering *modelRendering;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_28;
    QComboBox *modelSelect;

    void setupUi(QDialog *TargetModel)
    {
        if (TargetModel->objectName().isEmpty())
            TargetModel->setObjectName(QString::fromUtf8("TargetModel"));
        TargetModel->resize(583, 395);
        modelRendering = new Rendering(TargetModel);
        modelRendering->setObjectName(QString::fromUtf8("modelRendering"));
        modelRendering->setGeometry(QRect(40, 30, 491, 276));
        verticalLayoutWidget = new QWidget(TargetModel);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 320, 284, 61));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_28 = new QLabel(verticalLayoutWidget);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        verticalLayout_5->addWidget(label_28);

        modelSelect = new QComboBox(verticalLayoutWidget);
        modelSelect->addItem(QString());
        modelSelect->addItem(QString());
        modelSelect->setObjectName(QString::fromUtf8("modelSelect"));

        verticalLayout_5->addWidget(modelSelect);


        retranslateUi(TargetModel);

        QMetaObject::connectSlotsByName(TargetModel);
    } // setupUi

    void retranslateUi(QDialog *TargetModel)
    {
        TargetModel->setWindowTitle(QCoreApplication::translate("TargetModel", "Dialog", nullptr));
        label_28->setText(QCoreApplication::translate("TargetModel", "Select Model", nullptr));
        modelSelect->setItemText(0, QCoreApplication::translate("TargetModel", "Itokawa", nullptr));
        modelSelect->setItemText(1, QCoreApplication::translate("TargetModel", "Ryugu", nullptr));

    } // retranslateUi

};

namespace Ui {
    class TargetModel: public Ui_TargetModel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TARGETMODEL_H
