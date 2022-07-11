/********************************************************************************
** Form generated from reading UI file 'calibrationgraph.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALIBRATIONGRAPH_H
#define UI_CALIBRATIONGRAPH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTextBrowser>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_CalibrationGraph
{
public:
    QCustomPlot *widget;
    QPushButton *regressionButton;
    QTextBrowser *plotNumberBrowser;
    QLabel *label;
    QTextBrowser *regressionFormulaBrowser;
    QLabel *label_3;
    QComboBox *degreeComboBox;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_9;
    QLabel *label_8;
    QLineEdit *tgtMaxLineEdit;
    QSlider *tgtMaxSlider;
    QSlider *tgtMinSlider;
    QLabel *label_18;
    QLineEdit *shMaxLineEdit;
    QLabel *label_19;
    QLineEdit *shMinLineEdit;
    QLineEdit *pkgMinLineEdit;
    QLabel *label_15;
    QLineEdit *boloMaxLineEdit;
    QLabel *label_6;
    QSlider *shMaxSlider;
    QSlider *shMinSlider;
    QLabel *label_7;
    QLineEdit *boloMinLineEdit;
    QLineEdit *pkgMaxLineEdit;
    QLabel *label_14;
    QLabel *label_20;
    QLineEdit *lensMaxLineEdit;
    QLabel *label_21;
    QLineEdit *lensMinLineEdit;
    QSlider *lensMaxSlider;
    QSlider *lensMinSlider;
    QLabel *label_13;
    QLineEdit *tgtMinLineEdit;
    QLabel *label_16;
    QLineEdit *caseMaxLineEdit;
    QLabel *label_22;
    QSlider *boloMaxSlider;
    QSlider *boloMinSlider;
    QSlider *caseMaxSlider;
    QSlider *caseMinSlider;
    QSlider *pkgMinSlider;
    QSlider *pkgMaxSlider;
    QLabel *label_17;
    QLineEdit *caseMinLineEdit;
    QLabel *label_29;
    QPushButton *replotButton;
    QPushButton *outputCSVFileButton;
    QPushButton *outputGraphImageButton;
    QPushButton *exportFormulaButton;
    QPushButton *loadFileButton;
    QTextBrowser *fileNameBrowser;
    QTextBrowser *sht_tempBrowser;
    QTextBrowser *cas_tempBrowser;
    QTextBrowser *pkg_tempBrowser;
    QTextBrowser *len_tempBrowser;
    QLineEdit *MaxxlineEdit;
    QLineEdit *MaxylineEdit;
    QLineEdit *MinylineEdit;
    QLineEdit *MinxlineEdit;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;

    void setupUi(QDialog *CalibrationGraph)
    {
        if (CalibrationGraph->objectName().isEmpty())
            CalibrationGraph->setObjectName(QString::fromUtf8("CalibrationGraph"));
        CalibrationGraph->resize(1012, 730);
        widget = new QCustomPlot(CalibrationGraph);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(461, 43, 531, 451));
        regressionButton = new QPushButton(CalibrationGraph);
        regressionButton->setObjectName(QString::fromUtf8("regressionButton"));
        regressionButton->setGeometry(QRect(691, 503, 271, 31));
        regressionButton->setStyleSheet(QString::fromUtf8(""));
        regressionButton->setCheckable(false);
        plotNumberBrowser = new QTextBrowser(CalibrationGraph);
        plotNumberBrowser->setObjectName(QString::fromUtf8("plotNumberBrowser"));
        plotNumberBrowser->setGeometry(QRect(571, 15, 131, 21));
        label = new QLabel(CalibrationGraph);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(462, 532, 131, 16));
        regressionFormulaBrowser = new QTextBrowser(CalibrationGraph);
        regressionFormulaBrowser->setObjectName(QString::fromUtf8("regressionFormulaBrowser"));
        regressionFormulaBrowser->setGeometry(QRect(461, 551, 521, 61));
        label_3 = new QLabel(CalibrationGraph);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(462, 507, 120, 16));
        degreeComboBox = new QComboBox(CalibrationGraph);
        degreeComboBox->addItem(QString());
        degreeComboBox->addItem(QString());
        degreeComboBox->addItem(QString());
        degreeComboBox->addItem(QString());
        degreeComboBox->addItem(QString());
        degreeComboBox->addItem(QString());
        degreeComboBox->addItem(QString());
        degreeComboBox->addItem(QString());
        degreeComboBox->setObjectName(QString::fromUtf8("degreeComboBox"));
        degreeComboBox->setGeometry(QRect(570, 504, 121, 26));
        label_5 = new QLabel(CalibrationGraph);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(13, 138, 147, 16));
        label_5->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(CalibrationGraph);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(13, 50, 146, 16));
        label_10 = new QLabel(CalibrationGraph);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(13, 314, 147, 16));
        label_11 = new QLabel(CalibrationGraph);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(13, 402, 147, 16));
        label_12 = new QLabel(CalibrationGraph);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(13, 490, 149, 16));
        label_9 = new QLabel(CalibrationGraph);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(13, 226, 147, 16));
        label_8 = new QLabel(CalibrationGraph);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(66, 77, 26, 16));
        tgtMaxLineEdit = new QLineEdit(CalibrationGraph);
        tgtMaxLineEdit->setObjectName(QString::fromUtf8("tgtMaxLineEdit"));
        tgtMaxLineEdit->setGeometry(QRect(100, 77, 125, 18));
        tgtMaxSlider = new QSlider(CalibrationGraph);
        tgtMaxSlider->setObjectName(QString::fromUtf8("tgtMaxSlider"));
        tgtMaxSlider->setGeometry(QRect(237, 76, 194, 19));
        tgtMaxSlider->setOrientation(Qt::Horizontal);
        tgtMinSlider = new QSlider(CalibrationGraph);
        tgtMinSlider->setObjectName(QString::fromUtf8("tgtMinSlider"));
        tgtMinSlider->setGeometry(QRect(237, 107, 194, 19));
        tgtMinSlider->setOrientation(Qt::Horizontal);
        label_18 = new QLabel(CalibrationGraph);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(66, 429, 26, 16));
        shMaxLineEdit = new QLineEdit(CalibrationGraph);
        shMaxLineEdit->setObjectName(QString::fromUtf8("shMaxLineEdit"));
        shMaxLineEdit->setGeometry(QRect(100, 429, 125, 18));
        label_19 = new QLabel(CalibrationGraph);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(66, 459, 26, 16));
        shMinLineEdit = new QLineEdit(CalibrationGraph);
        shMinLineEdit->setObjectName(QString::fromUtf8("shMinLineEdit"));
        shMinLineEdit->setGeometry(QRect(100, 459, 125, 18));
        pkgMinLineEdit = new QLineEdit(CalibrationGraph);
        pkgMinLineEdit->setObjectName(QString::fromUtf8("pkgMinLineEdit"));
        pkgMinLineEdit->setGeometry(QRect(100, 283, 125, 18));
        label_15 = new QLabel(CalibrationGraph);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(66, 283, 26, 16));
        boloMaxLineEdit = new QLineEdit(CalibrationGraph);
        boloMaxLineEdit->setObjectName(QString::fromUtf8("boloMaxLineEdit"));
        boloMaxLineEdit->setGeometry(QRect(100, 165, 125, 18));
        label_6 = new QLabel(CalibrationGraph);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(66, 165, 26, 16));
        shMaxSlider = new QSlider(CalibrationGraph);
        shMaxSlider->setObjectName(QString::fromUtf8("shMaxSlider"));
        shMaxSlider->setGeometry(QRect(237, 428, 194, 19));
        shMaxSlider->setOrientation(Qt::Horizontal);
        shMinSlider = new QSlider(CalibrationGraph);
        shMinSlider->setObjectName(QString::fromUtf8("shMinSlider"));
        shMinSlider->setGeometry(QRect(237, 459, 194, 19));
        shMinSlider->setOrientation(Qt::Horizontal);
        label_7 = new QLabel(CalibrationGraph);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(66, 195, 26, 16));
        boloMinLineEdit = new QLineEdit(CalibrationGraph);
        boloMinLineEdit->setObjectName(QString::fromUtf8("boloMinLineEdit"));
        boloMinLineEdit->setGeometry(QRect(100, 195, 125, 18));
        pkgMaxLineEdit = new QLineEdit(CalibrationGraph);
        pkgMaxLineEdit->setObjectName(QString::fromUtf8("pkgMaxLineEdit"));
        pkgMaxLineEdit->setGeometry(QRect(100, 253, 125, 18));
        label_14 = new QLabel(CalibrationGraph);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(66, 253, 26, 16));
        label_20 = new QLabel(CalibrationGraph);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(66, 517, 26, 16));
        lensMaxLineEdit = new QLineEdit(CalibrationGraph);
        lensMaxLineEdit->setObjectName(QString::fromUtf8("lensMaxLineEdit"));
        lensMaxLineEdit->setGeometry(QRect(100, 517, 125, 18));
        label_21 = new QLabel(CalibrationGraph);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(66, 547, 26, 16));
        lensMinLineEdit = new QLineEdit(CalibrationGraph);
        lensMinLineEdit->setObjectName(QString::fromUtf8("lensMinLineEdit"));
        lensMinLineEdit->setGeometry(QRect(100, 547, 125, 18));
        lensMaxSlider = new QSlider(CalibrationGraph);
        lensMaxSlider->setObjectName(QString::fromUtf8("lensMaxSlider"));
        lensMaxSlider->setGeometry(QRect(237, 516, 194, 19));
        lensMaxSlider->setOrientation(Qt::Horizontal);
        lensMinSlider = new QSlider(CalibrationGraph);
        lensMinSlider->setObjectName(QString::fromUtf8("lensMinSlider"));
        lensMinSlider->setGeometry(QRect(237, 547, 194, 19));
        lensMinSlider->setOrientation(Qt::Horizontal);
        label_13 = new QLabel(CalibrationGraph);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(66, 107, 26, 16));
        tgtMinLineEdit = new QLineEdit(CalibrationGraph);
        tgtMinLineEdit->setObjectName(QString::fromUtf8("tgtMinLineEdit"));
        tgtMinLineEdit->setGeometry(QRect(100, 107, 125, 18));
        label_16 = new QLabel(CalibrationGraph);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(66, 341, 26, 16));
        caseMaxLineEdit = new QLineEdit(CalibrationGraph);
        caseMaxLineEdit->setObjectName(QString::fromUtf8("caseMaxLineEdit"));
        caseMaxLineEdit->setGeometry(QRect(100, 341, 125, 18));
        label_22 = new QLabel(CalibrationGraph);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(462, 18, 101, 16));
        boloMaxSlider = new QSlider(CalibrationGraph);
        boloMaxSlider->setObjectName(QString::fromUtf8("boloMaxSlider"));
        boloMaxSlider->setGeometry(QRect(237, 164, 194, 19));
        boloMaxSlider->setOrientation(Qt::Horizontal);
        boloMinSlider = new QSlider(CalibrationGraph);
        boloMinSlider->setObjectName(QString::fromUtf8("boloMinSlider"));
        boloMinSlider->setGeometry(QRect(237, 195, 194, 19));
        boloMinSlider->setOrientation(Qt::Horizontal);
        caseMaxSlider = new QSlider(CalibrationGraph);
        caseMaxSlider->setObjectName(QString::fromUtf8("caseMaxSlider"));
        caseMaxSlider->setGeometry(QRect(237, 340, 194, 19));
        caseMaxSlider->setOrientation(Qt::Horizontal);
        caseMinSlider = new QSlider(CalibrationGraph);
        caseMinSlider->setObjectName(QString::fromUtf8("caseMinSlider"));
        caseMinSlider->setGeometry(QRect(237, 371, 194, 19));
        caseMinSlider->setOrientation(Qt::Horizontal);
        pkgMinSlider = new QSlider(CalibrationGraph);
        pkgMinSlider->setObjectName(QString::fromUtf8("pkgMinSlider"));
        pkgMinSlider->setGeometry(QRect(237, 283, 194, 19));
        pkgMinSlider->setOrientation(Qt::Horizontal);
        pkgMaxSlider = new QSlider(CalibrationGraph);
        pkgMaxSlider->setObjectName(QString::fromUtf8("pkgMaxSlider"));
        pkgMaxSlider->setGeometry(QRect(237, 252, 194, 19));
        pkgMaxSlider->setOrientation(Qt::Horizontal);
        label_17 = new QLabel(CalibrationGraph);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(66, 371, 26, 16));
        caseMinLineEdit = new QLineEdit(CalibrationGraph);
        caseMinLineEdit->setObjectName(QString::fromUtf8("caseMinLineEdit"));
        caseMinLineEdit->setGeometry(QRect(100, 371, 125, 18));
        label_29 = new QLabel(CalibrationGraph);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(-78, 318, 23, 16));
        replotButton = new QPushButton(CalibrationGraph);
        replotButton->setObjectName(QString::fromUtf8("replotButton"));
        replotButton->setGeometry(QRect(10, 588, 421, 32));
        outputCSVFileButton = new QPushButton(CalibrationGraph);
        outputCSVFileButton->setObjectName(QString::fromUtf8("outputCSVFileButton"));
        outputCSVFileButton->setGeometry(QRect(787, 680, 201, 32));
        outputGraphImageButton = new QPushButton(CalibrationGraph);
        outputGraphImageButton->setObjectName(QString::fromUtf8("outputGraphImageButton"));
        outputGraphImageButton->setGeometry(QRect(787, 656, 201, 32));
        exportFormulaButton = new QPushButton(CalibrationGraph);
        exportFormulaButton->setObjectName(QString::fromUtf8("exportFormulaButton"));
        exportFormulaButton->setGeometry(QRect(706, 628, 281, 30));
        loadFileButton = new QPushButton(CalibrationGraph);
        loadFileButton->setObjectName(QString::fromUtf8("loadFileButton"));
        loadFileButton->setGeometry(QRect(9, 10, 121, 32));
        loadFileButton->setAutoFillBackground(false);
        fileNameBrowser = new QTextBrowser(CalibrationGraph);
        fileNameBrowser->setObjectName(QString::fromUtf8("fileNameBrowser"));
        fileNameBrowser->setGeometry(QRect(130, 15, 291, 21));
        sht_tempBrowser = new QTextBrowser(CalibrationGraph);
        sht_tempBrowser->setObjectName(QString::fromUtf8("sht_tempBrowser"));
        sht_tempBrowser->setGeometry(QRect(158, 402, 91, 21));
        cas_tempBrowser = new QTextBrowser(CalibrationGraph);
        cas_tempBrowser->setObjectName(QString::fromUtf8("cas_tempBrowser"));
        cas_tempBrowser->setGeometry(QRect(158, 314, 91, 21));
        pkg_tempBrowser = new QTextBrowser(CalibrationGraph);
        pkg_tempBrowser->setObjectName(QString::fromUtf8("pkg_tempBrowser"));
        pkg_tempBrowser->setGeometry(QRect(158, 226, 91, 21));
        len_tempBrowser = new QTextBrowser(CalibrationGraph);
        len_tempBrowser->setObjectName(QString::fromUtf8("len_tempBrowser"));
        len_tempBrowser->setGeometry(QRect(158, 490, 91, 21));
        MaxxlineEdit = new QLineEdit(CalibrationGraph);
        MaxxlineEdit->setObjectName(QString::fromUtf8("MaxxlineEdit"));
        MaxxlineEdit->setGeometry(QRect(598, 656, 51, 21));
        MaxylineEdit = new QLineEdit(CalibrationGraph);
        MaxylineEdit->setObjectName(QString::fromUtf8("MaxylineEdit"));
        MaxylineEdit->setGeometry(QRect(548, 676, 51, 21));
        MinylineEdit = new QLineEdit(CalibrationGraph);
        MinylineEdit->setObjectName(QString::fromUtf8("MinylineEdit"));
        MinylineEdit->setGeometry(QRect(548, 636, 51, 21));
        MinxlineEdit = new QLineEdit(CalibrationGraph);
        MinxlineEdit->setObjectName(QString::fromUtf8("MinxlineEdit"));
        MinxlineEdit->setGeometry(QRect(498, 656, 51, 21));
        label_30 = new QLabel(CalibrationGraph);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(558, 618, 31, 16));
        label_31 = new QLabel(CalibrationGraph);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(558, 696, 41, 16));
        label_32 = new QLabel(CalibrationGraph);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(653, 656, 41, 16));
        label_33 = new QLabel(CalibrationGraph);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(464, 656, 41, 16));
        QWidget::setTabOrder(loadFileButton, fileNameBrowser);
        QWidget::setTabOrder(fileNameBrowser, tgtMaxLineEdit);
        QWidget::setTabOrder(tgtMaxLineEdit, tgtMinLineEdit);
        QWidget::setTabOrder(tgtMinLineEdit, boloMaxLineEdit);
        QWidget::setTabOrder(boloMaxLineEdit, boloMinLineEdit);
        QWidget::setTabOrder(boloMinLineEdit, pkgMaxLineEdit);
        QWidget::setTabOrder(pkgMaxLineEdit, pkgMinLineEdit);
        QWidget::setTabOrder(pkgMinLineEdit, caseMaxLineEdit);
        QWidget::setTabOrder(caseMaxLineEdit, caseMinLineEdit);
        QWidget::setTabOrder(caseMinLineEdit, shMaxLineEdit);
        QWidget::setTabOrder(shMaxLineEdit, shMinLineEdit);
        QWidget::setTabOrder(shMinLineEdit, lensMaxLineEdit);
        QWidget::setTabOrder(lensMaxLineEdit, lensMinLineEdit);
        QWidget::setTabOrder(lensMinLineEdit, replotButton);
        QWidget::setTabOrder(replotButton, MinxlineEdit);
        QWidget::setTabOrder(MinxlineEdit, MaxxlineEdit);
        QWidget::setTabOrder(MaxxlineEdit, MinylineEdit);
        QWidget::setTabOrder(MinylineEdit, MaxylineEdit);
        QWidget::setTabOrder(MaxylineEdit, boloMaxSlider);
        QWidget::setTabOrder(boloMaxSlider, shMinSlider);
        QWidget::setTabOrder(shMinSlider, pkgMinSlider);
        QWidget::setTabOrder(pkgMinSlider, lensMaxSlider);
        QWidget::setTabOrder(lensMaxSlider, boloMinSlider);
        QWidget::setTabOrder(boloMinSlider, lensMinSlider);
        QWidget::setTabOrder(lensMinSlider, degreeComboBox);
        QWidget::setTabOrder(degreeComboBox, regressionButton);
        QWidget::setTabOrder(regressionButton, regressionFormulaBrowser);
        QWidget::setTabOrder(regressionFormulaBrowser, exportFormulaButton);
        QWidget::setTabOrder(exportFormulaButton, caseMaxSlider);
        QWidget::setTabOrder(caseMaxSlider, outputCSVFileButton);
        QWidget::setTabOrder(outputCSVFileButton, outputGraphImageButton);
        QWidget::setTabOrder(outputGraphImageButton, tgtMinSlider);
        QWidget::setTabOrder(tgtMinSlider, pkgMaxSlider);
        QWidget::setTabOrder(pkgMaxSlider, sht_tempBrowser);
        QWidget::setTabOrder(sht_tempBrowser, cas_tempBrowser);
        QWidget::setTabOrder(cas_tempBrowser, pkg_tempBrowser);
        QWidget::setTabOrder(pkg_tempBrowser, len_tempBrowser);
        QWidget::setTabOrder(len_tempBrowser, caseMinSlider);
        QWidget::setTabOrder(caseMinSlider, shMaxSlider);
        QWidget::setTabOrder(shMaxSlider, plotNumberBrowser);
        QWidget::setTabOrder(plotNumberBrowser, tgtMaxSlider);

        retranslateUi(CalibrationGraph);

        QMetaObject::connectSlotsByName(CalibrationGraph);
    } // setupUi

    void retranslateUi(QDialog *CalibrationGraph)
    {
        CalibrationGraph->setWindowTitle(QCoreApplication::translate("CalibrationGraph", "Dialog", nullptr));
        regressionButton->setText(QCoreApplication::translate("CalibrationGraph", "Draw clibration formula", nullptr));
        label->setText(QCoreApplication::translate("CalibrationGraph", "Calibration formula", nullptr));
        regressionFormulaBrowser->setHtml(QCoreApplication::translate("CalibrationGraph", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.SF NS Text'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("CalibrationGraph", "Calibration type", nullptr));
        degreeComboBox->setItemText(0, QCoreApplication::translate("CalibrationGraph", "Black_Body", nullptr));
        degreeComboBox->setItemText(1, QCoreApplication::translate("CalibrationGraph", "7 degree", nullptr));
        degreeComboBox->setItemText(2, QCoreApplication::translate("CalibrationGraph", "6 degree", nullptr));
        degreeComboBox->setItemText(3, QCoreApplication::translate("CalibrationGraph", "5 degree", nullptr));
        degreeComboBox->setItemText(4, QCoreApplication::translate("CalibrationGraph", "4 degree", nullptr));
        degreeComboBox->setItemText(5, QCoreApplication::translate("CalibrationGraph", "3 degree", nullptr));
        degreeComboBox->setItemText(6, QCoreApplication::translate("CalibrationGraph", "2 degree", nullptr));
        degreeComboBox->setItemText(7, QCoreApplication::translate("CalibrationGraph", "1 degree", nullptr));

        label_5->setText(QCoreApplication::translate("CalibrationGraph", "Bolometer Temperature ", nullptr));
        label_2->setText(QCoreApplication::translate("CalibrationGraph", "Target tempareture        ", nullptr));
        label_10->setText(QCoreApplication::translate("CalibrationGraph", "Case Temperature          ", nullptr));
        label_11->setText(QCoreApplication::translate("CalibrationGraph", "Shutter Temperature      ", nullptr));
        label_12->setText(QCoreApplication::translate("CalibrationGraph", "Lens Temperature           ", nullptr));
        label_9->setText(QCoreApplication::translate("CalibrationGraph", "Package Temperature    ", nullptr));
        label_8->setText(QCoreApplication::translate("CalibrationGraph", "Max", nullptr));
        tgtMaxLineEdit->setText(QString());
        label_18->setText(QCoreApplication::translate("CalibrationGraph", "Max", nullptr));
        shMaxLineEdit->setText(QCoreApplication::translate("CalibrationGraph", "0.00", nullptr));
        label_19->setText(QCoreApplication::translate("CalibrationGraph", "Min ", nullptr));
        shMinLineEdit->setText(QCoreApplication::translate("CalibrationGraph", "0.00", nullptr));
        pkgMinLineEdit->setText(QCoreApplication::translate("CalibrationGraph", "0.00", nullptr));
        label_15->setText(QCoreApplication::translate("CalibrationGraph", "Min ", nullptr));
        boloMaxLineEdit->setText(QString());
        label_6->setText(QCoreApplication::translate("CalibrationGraph", "Max", nullptr));
        label_7->setText(QCoreApplication::translate("CalibrationGraph", "Min ", nullptr));
        boloMinLineEdit->setText(QString());
        pkgMaxLineEdit->setText(QCoreApplication::translate("CalibrationGraph", "0.00", nullptr));
        label_14->setText(QCoreApplication::translate("CalibrationGraph", "Max", nullptr));
        label_20->setText(QCoreApplication::translate("CalibrationGraph", "Max", nullptr));
        lensMaxLineEdit->setText(QCoreApplication::translate("CalibrationGraph", "0.00", nullptr));
        label_21->setText(QCoreApplication::translate("CalibrationGraph", "Min ", nullptr));
        lensMinLineEdit->setText(QCoreApplication::translate("CalibrationGraph", "0.00", nullptr));
        label_13->setText(QCoreApplication::translate("CalibrationGraph", "Min ", nullptr));
        tgtMinLineEdit->setText(QString());
        label_16->setText(QCoreApplication::translate("CalibrationGraph", "Max", nullptr));
        caseMaxLineEdit->setText(QCoreApplication::translate("CalibrationGraph", "0.00", nullptr));
        label_22->setText(QCoreApplication::translate("CalibrationGraph", "Number of plot", nullptr));
        label_17->setText(QCoreApplication::translate("CalibrationGraph", "Min ", nullptr));
        caseMinLineEdit->setText(QCoreApplication::translate("CalibrationGraph", "0.00", nullptr));
        label_29->setText(QCoreApplication::translate("CalibrationGraph", "y = ", nullptr));
        replotButton->setText(QCoreApplication::translate("CalibrationGraph", "Plot", nullptr));
        outputCSVFileButton->setText(QCoreApplication::translate("CalibrationGraph", "Output CSV File", nullptr));
        outputGraphImageButton->setText(QCoreApplication::translate("CalibrationGraph", "Output Graph Image", nullptr));
        exportFormulaButton->setText(QCoreApplication::translate("CalibrationGraph", "Export Formula(\345\267\246\343\201\247\346\214\207\345\256\232\343\201\225\343\202\214\343\201\237\347\257\204\345\233\262)", nullptr));
        loadFileButton->setText(QCoreApplication::translate("CalibrationGraph", "Load file", nullptr));
        MaxxlineEdit->setText(QCoreApplication::translate("CalibrationGraph", "327", nullptr));
        MaxylineEdit->setText(QCoreApplication::translate("CalibrationGraph", "247", nullptr));
        MinylineEdit->setText(QCoreApplication::translate("CalibrationGraph", "0", nullptr));
        MinxlineEdit->setText(QCoreApplication::translate("CalibrationGraph", "0", nullptr));
        label_30->setText(QCoreApplication::translate("CalibrationGraph", "y min", nullptr));
        label_31->setText(QCoreApplication::translate("CalibrationGraph", "y max", nullptr));
        label_32->setText(QCoreApplication::translate("CalibrationGraph", "x max", nullptr));
        label_33->setText(QCoreApplication::translate("CalibrationGraph", "x min", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalibrationGraph: public Ui_CalibrationGraph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALIBRATIONGRAPH_H
