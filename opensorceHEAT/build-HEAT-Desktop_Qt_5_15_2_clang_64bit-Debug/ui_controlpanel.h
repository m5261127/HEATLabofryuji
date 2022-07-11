/********************************************************************************
** Form generated from reading UI file 'controlpanel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLPANEL_H
#define UI_CONTROLPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Controlpanel
{
public:
    QPushButton *quitButton;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *showImageButton;
    QPushButton *showDBButton;
    QPushButton *showModelButton;
    QPushButton *showVtkButton;
    QPushButton *showCaliButton;
    QPushButton *showConversionButton;

    void setupUi(QDialog *Controlpanel)
    {
        if (Controlpanel->objectName().isEmpty())
            Controlpanel->setObjectName(QString::fromUtf8("Controlpanel"));
        Controlpanel->resize(458, 86);
        quitButton = new QPushButton(Controlpanel);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setGeometry(QRect(350, 40, 91, 41));
        quitButton->setAutoDefault(false);
        layoutWidget = new QWidget(Controlpanel);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 333, 66));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        showImageButton = new QPushButton(layoutWidget);
        showImageButton->setObjectName(QString::fromUtf8("showImageButton"));
        showImageButton->setAutoDefault(false);

        gridLayout->addWidget(showImageButton, 0, 0, 1, 1);

        showDBButton = new QPushButton(layoutWidget);
        showDBButton->setObjectName(QString::fromUtf8("showDBButton"));
        showDBButton->setAutoDefault(false);

        gridLayout->addWidget(showDBButton, 0, 1, 1, 1);

        showModelButton = new QPushButton(layoutWidget);
        showModelButton->setObjectName(QString::fromUtf8("showModelButton"));
        showModelButton->setAutoDefault(false);

        gridLayout->addWidget(showModelButton, 0, 2, 1, 1);

        showVtkButton = new QPushButton(layoutWidget);
        showVtkButton->setObjectName(QString::fromUtf8("showVtkButton"));
        showVtkButton->setAutoDefault(false);

        gridLayout->addWidget(showVtkButton, 1, 0, 1, 1);

        showCaliButton = new QPushButton(layoutWidget);
        showCaliButton->setObjectName(QString::fromUtf8("showCaliButton"));
        showCaliButton->setAutoDefault(false);

        gridLayout->addWidget(showCaliButton, 1, 1, 1, 1);

        showConversionButton = new QPushButton(layoutWidget);
        showConversionButton->setObjectName(QString::fromUtf8("showConversionButton"));
        showConversionButton->setAutoDefault(false);

        gridLayout->addWidget(showConversionButton, 1, 2, 1, 1);

        QWidget::setTabOrder(showImageButton, showDBButton);
        QWidget::setTabOrder(showDBButton, showModelButton);
        QWidget::setTabOrder(showModelButton, showVtkButton);
        QWidget::setTabOrder(showVtkButton, showCaliButton);
        QWidget::setTabOrder(showCaliButton, quitButton);

        retranslateUi(Controlpanel);

        QMetaObject::connectSlotsByName(Controlpanel);
    } // setupUi

    void retranslateUi(QDialog *Controlpanel)
    {
        Controlpanel->setWindowTitle(QCoreApplication::translate("Controlpanel", "Dialog", nullptr));
        quitButton->setText(QCoreApplication::translate("Controlpanel", "Quit", nullptr));
        showImageButton->setText(QCoreApplication::translate("Controlpanel", "Image view", nullptr));
        showDBButton->setText(QCoreApplication::translate("Controlpanel", "Database", nullptr));
        showModelButton->setText(QCoreApplication::translate("Controlpanel", "3D model", nullptr));
        showVtkButton->setText(QCoreApplication::translate("Controlpanel", "Vtk model", nullptr));
        showCaliButton->setText(QCoreApplication::translate("Controlpanel", "Calibration", nullptr));
        showConversionButton->setText(QCoreApplication::translate("Controlpanel", "Conversion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Controlpanel: public Ui_Controlpanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLPANEL_H
