/********************************************************************************
** Form generated from reading UI file 'vtkmodel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VTKMODEL_H
#define UI_VTKMODEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "vtkrendering.h"

QT_BEGIN_NAMESPACE

class Ui_VtkModel
{
public:
    VtkRendering *vtkRender;
    QListWidget *vtkList;
    QPushButton *loadVtkButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *vtkDataSelect;
    QLabel *label_2;
    QComboBox *colorSelect;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QLineEdit *setMin;
    QLabel *label_4;
    QLineEdit *setMax;
    QPushButton *applyButton;

    void setupUi(QDialog *VtkModel)
    {
        if (VtkModel->objectName().isEmpty())
            VtkModel->setObjectName(QString::fromUtf8("VtkModel"));
        VtkModel->resize(720, 327);
        vtkRender = new VtkRendering(VtkModel);
        vtkRender->setObjectName(QString::fromUtf8("vtkRender"));
        vtkRender->setGeometry(QRect(10, 10, 491, 276));
        vtkList = new QListWidget(VtkModel);
        vtkList->setObjectName(QString::fromUtf8("vtkList"));
        vtkList->setGeometry(QRect(510, 30, 201, 251));
        loadVtkButton = new QPushButton(VtkModel);
        loadVtkButton->setObjectName(QString::fromUtf8("loadVtkButton"));
        loadVtkButton->setGeometry(QRect(500, 0, 211, 32));
        loadVtkButton->setAutoDefault(false);
        horizontalLayoutWidget = new QWidget(VtkModel);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 290, 701, 33));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        vtkDataSelect = new QComboBox(horizontalLayoutWidget);
        vtkDataSelect->addItem(QString());
        vtkDataSelect->addItem(QString());
        vtkDataSelect->addItem(QString());
        vtkDataSelect->addItem(QString());
        vtkDataSelect->setObjectName(QString::fromUtf8("vtkDataSelect"));

        horizontalLayout->addWidget(vtkDataSelect);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        colorSelect = new QComboBox(horizontalLayoutWidget);
        colorSelect->addItem(QString());
        colorSelect->addItem(QString());
        colorSelect->addItem(QString());
        colorSelect->setObjectName(QString::fromUtf8("colorSelect"));

        horizontalLayout->addWidget(colorSelect);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_5 = new QLabel(horizontalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        setMin = new QLineEdit(horizontalLayoutWidget);
        setMin->setObjectName(QString::fromUtf8("setMin"));

        horizontalLayout->addWidget(setMin);

        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        setMax = new QLineEdit(horizontalLayoutWidget);
        setMax->setObjectName(QString::fromUtf8("setMax"));

        horizontalLayout->addWidget(setMax);

        applyButton = new QPushButton(horizontalLayoutWidget);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));
        applyButton->setAutoDefault(false);

        horizontalLayout->addWidget(applyButton);


        retranslateUi(VtkModel);

        QMetaObject::connectSlotsByName(VtkModel);
    } // setupUi

    void retranslateUi(QDialog *VtkModel)
    {
        VtkModel->setWindowTitle(QCoreApplication::translate("VtkModel", "Dialog", nullptr));
        loadVtkButton->setText(QCoreApplication::translate("VtkModel", "Load vtk from directory", nullptr));
        label->setText(QCoreApplication::translate("VtkModel", "Data ", nullptr));
        vtkDataSelect->setItemText(0, QCoreApplication::translate("VtkModel", "Tempareture", nullptr));
        vtkDataSelect->setItemText(1, QCoreApplication::translate("VtkModel", "Directflux", nullptr));
        vtkDataSelect->setItemText(2, QCoreApplication::translate("VtkModel", "Radiationflux", nullptr));
        vtkDataSelect->setItemText(3, QCoreApplication::translate("VtkModel", "Viewfactor", nullptr));

        label_2->setText(QCoreApplication::translate("VtkModel", "Color", nullptr));
        colorSelect->setItemText(0, QCoreApplication::translate("VtkModel", "Rainbow", nullptr));
        colorSelect->setItemText(1, QCoreApplication::translate("VtkModel", "Gray scale", nullptr));
        colorSelect->setItemText(2, QCoreApplication::translate("VtkModel", "Iron", nullptr));

        label_3->setText(QCoreApplication::translate("VtkModel", "Change range", nullptr));
        label_5->setText(QCoreApplication::translate("VtkModel", "Min", nullptr));
        label_4->setText(QCoreApplication::translate("VtkModel", "to Max", nullptr));
        applyButton->setText(QCoreApplication::translate("VtkModel", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VtkModel: public Ui_VtkModel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VTKMODEL_H
