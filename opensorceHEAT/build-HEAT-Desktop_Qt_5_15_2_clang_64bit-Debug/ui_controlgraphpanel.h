/********************************************************************************
** Form generated from reading UI file 'controlgraphpanel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLGRAPHPANEL_H
#define UI_CONTROLGRAPHPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "showimage.h"

QT_BEGIN_NAMESPACE

class Ui_ControlGraphPanel
{
public:
    ShowImage *anotherView;
    QLineEdit *MinxlineEdit;
    QLineEdit *MaxxlineEdit;
    QLineEdit *MinylineEdit;
    QLineEdit *MaxylineEdit;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label;
    QTextBrowser *xPositionWidget;
    QLabel *label_3;
    QTextBrowser *fileNameBrowser;
    QTextBrowser *yPositionWidget;
    QLabel *label_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QComboBox *ConversionmethodcomboBox;
    QComboBox *DarkcomboBox;
    QPushButton *StartConversionButton;
    QPushButton *outputCurrentImageButton;
    QPushButton *substructButton;
    QPushButton *substructFITSButton;
    QPushButton *loadFileButton;

    void setupUi(QDialog *ControlGraphPanel)
    {
        if (ControlGraphPanel->objectName().isEmpty())
            ControlGraphPanel->setObjectName(QString::fromUtf8("ControlGraphPanel"));
        ControlGraphPanel->resize(521, 582);
        anotherView = new ShowImage(ControlGraphPanel);
        anotherView->setObjectName(QString::fromUtf8("anotherView"));
        anotherView->setGeometry(QRect(15, 213, 494, 276));
        MinxlineEdit = new QLineEdit(ControlGraphPanel);
        MinxlineEdit->setObjectName(QString::fromUtf8("MinxlineEdit"));
        MinxlineEdit->setGeometry(QRect(41, 147, 61, 21));
        MaxxlineEdit = new QLineEdit(ControlGraphPanel);
        MaxxlineEdit->setObjectName(QString::fromUtf8("MaxxlineEdit"));
        MaxxlineEdit->setGeometry(QRect(161, 147, 61, 21));
        MinylineEdit = new QLineEdit(ControlGraphPanel);
        MinylineEdit->setObjectName(QString::fromUtf8("MinylineEdit"));
        MinylineEdit->setGeometry(QRect(101, 127, 61, 21));
        MaxylineEdit = new QLineEdit(ControlGraphPanel);
        MaxylineEdit->setObjectName(QString::fromUtf8("MaxylineEdit"));
        MaxylineEdit->setGeometry(QRect(101, 167, 61, 21));
        label_4 = new QLabel(ControlGraphPanel);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(7, 148, 41, 16));
        label_5 = new QLabel(ControlGraphPanel);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(226, 148, 41, 16));
        label_6 = new QLabel(ControlGraphPanel);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(112, 184, 41, 16));
        label_7 = new QLabel(ControlGraphPanel);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(112, 111, 41, 16));
        label = new QLabel(ControlGraphPanel);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(14, 549, 16, 16));
        xPositionWidget = new QTextBrowser(ControlGraphPanel);
        xPositionWidget->setObjectName(QString::fromUtf8("xPositionWidget"));
        xPositionWidget->setGeometry(QRect(29, 543, 226, 31));
        label_3 = new QLabel(ControlGraphPanel);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(13, 508, 60, 16));
        fileNameBrowser = new QTextBrowser(ControlGraphPanel);
        fileNameBrowser->setObjectName(QString::fromUtf8("fileNameBrowser"));
        fileNameBrowser->setGeometry(QRect(81, 503, 429, 31));
        yPositionWidget = new QTextBrowser(ControlGraphPanel);
        yPositionWidget->setObjectName(QString::fromUtf8("yPositionWidget"));
        yPositionWidget->setGeometry(QRect(282, 543, 227, 31));
        label_2 = new QLabel(ControlGraphPanel);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(267, 549, 16, 16));
        layoutWidget = new QWidget(ControlGraphPanel);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(270, 20, 234, 168));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ConversionmethodcomboBox = new QComboBox(layoutWidget);
        ConversionmethodcomboBox->addItem(QString());
        ConversionmethodcomboBox->addItem(QString());
        ConversionmethodcomboBox->addItem(QString());
        ConversionmethodcomboBox->addItem(QString());
        ConversionmethodcomboBox->addItem(QString());
        ConversionmethodcomboBox->setObjectName(QString::fromUtf8("ConversionmethodcomboBox"));

        verticalLayout->addWidget(ConversionmethodcomboBox);

        DarkcomboBox = new QComboBox(layoutWidget);
        DarkcomboBox->addItem(QString());
        DarkcomboBox->addItem(QString());
        DarkcomboBox->addItem(QString());
        DarkcomboBox->setObjectName(QString::fromUtf8("DarkcomboBox"));

        verticalLayout->addWidget(DarkcomboBox);

        StartConversionButton = new QPushButton(layoutWidget);
        StartConversionButton->setObjectName(QString::fromUtf8("StartConversionButton"));
        StartConversionButton->setAutoFillBackground(false);
        StartConversionButton->setStyleSheet(QString::fromUtf8(""));
        StartConversionButton->setAutoDefault(false);
        StartConversionButton->setFlat(false);

        verticalLayout->addWidget(StartConversionButton);

        outputCurrentImageButton = new QPushButton(ControlGraphPanel);
        outputCurrentImageButton->setObjectName(QString::fromUtf8("outputCurrentImageButton"));
        outputCurrentImageButton->setGeometry(QRect(150, 10, 111, 61));
        outputCurrentImageButton->setAutoDefault(false);
        substructButton = new QPushButton(ControlGraphPanel);
        substructButton->setObjectName(QString::fromUtf8("substructButton"));
        substructButton->setGeometry(QRect(10, 70, 151, 41));
        substructButton->setAutoDefault(false);
        substructFITSButton = new QPushButton(ControlGraphPanel);
        substructFITSButton->setObjectName(QString::fromUtf8("substructFITSButton"));
        substructFITSButton->setGeometry(QRect(150, 70, 111, 41));
        substructFITSButton->setAutoDefault(false);
        loadFileButton = new QPushButton(ControlGraphPanel);
        loadFileButton->setObjectName(QString::fromUtf8("loadFileButton"));
        loadFileButton->setGeometry(QRect(10, 10, 151, 61));
        loadFileButton->setAutoDefault(false);
        QWidget::setTabOrder(fileNameBrowser, xPositionWidget);
        QWidget::setTabOrder(xPositionWidget, yPositionWidget);
        QWidget::setTabOrder(yPositionWidget, MinxlineEdit);
        QWidget::setTabOrder(MinxlineEdit, MaxxlineEdit);
        QWidget::setTabOrder(MaxxlineEdit, MinylineEdit);
        QWidget::setTabOrder(MinylineEdit, MaxylineEdit);

        retranslateUi(ControlGraphPanel);

        StartConversionButton->setDefault(false);


        QMetaObject::connectSlotsByName(ControlGraphPanel);
    } // setupUi

    void retranslateUi(QDialog *ControlGraphPanel)
    {
        ControlGraphPanel->setWindowTitle(QCoreApplication::translate("ControlGraphPanel", "Dialog", nullptr));
        MinxlineEdit->setText(QCoreApplication::translate("ControlGraphPanel", "0", nullptr));
        MaxxlineEdit->setText(QCoreApplication::translate("ControlGraphPanel", "327", nullptr));
        MinylineEdit->setText(QCoreApplication::translate("ControlGraphPanel", "0", nullptr));
        MaxylineEdit->setText(QCoreApplication::translate("ControlGraphPanel", "247", nullptr));
        label_4->setText(QCoreApplication::translate("ControlGraphPanel", "x min", nullptr));
        label_5->setText(QCoreApplication::translate("ControlGraphPanel", "x max", nullptr));
        label_6->setText(QCoreApplication::translate("ControlGraphPanel", "y max", nullptr));
        label_7->setText(QCoreApplication::translate("ControlGraphPanel", "y min", nullptr));
        label->setText(QCoreApplication::translate("ControlGraphPanel", "x", nullptr));
        label_3->setText(QCoreApplication::translate("ControlGraphPanel", "File Name", nullptr));
        label_2->setText(QCoreApplication::translate("ControlGraphPanel", "y", nullptr));
        ConversionmethodcomboBox->setItemText(0, QCoreApplication::translate("ControlGraphPanel", "LUT Fits file Conversion", nullptr));
        ConversionmethodcomboBox->setItemText(1, QCoreApplication::translate("ControlGraphPanel", "l2a Conversion (Directory)", nullptr));
        ConversionmethodcomboBox->setItemText(2, QCoreApplication::translate("ControlGraphPanel", "l2a Conversion", nullptr));
        ConversionmethodcomboBox->setItemText(3, QCoreApplication::translate("ControlGraphPanel", "l2b Conversion", nullptr));
        ConversionmethodcomboBox->setItemText(4, QCoreApplication::translate("ControlGraphPanel", "Direct Conversion", nullptr));

        DarkcomboBox->setItemText(0, QCoreApplication::translate("ControlGraphPanel", "Set Dark: 2018-11-09", nullptr));
        DarkcomboBox->setItemText(1, QCoreApplication::translate("ControlGraphPanel", "Set Dark: 2018-06-29", nullptr));
        DarkcomboBox->setItemText(2, QCoreApplication::translate("ControlGraphPanel", "Set Dark: No", nullptr));

        StartConversionButton->setText(QCoreApplication::translate("ControlGraphPanel", "Start Conversion", nullptr));
        outputCurrentImageButton->setText(QCoreApplication::translate("ControlGraphPanel", "Output Image", nullptr));
        substructButton->setText(QCoreApplication::translate("ControlGraphPanel", "Sub (Open - Close)", nullptr));
        substructFITSButton->setText(QCoreApplication::translate("ControlGraphPanel", "Sub FITS", nullptr));
        loadFileButton->setText(QCoreApplication::translate("ControlGraphPanel", "Load file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ControlGraphPanel: public Ui_ControlGraphPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLGRAPHPANEL_H
