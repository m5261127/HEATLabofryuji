/********************************************************************************
** Form generated from reading UI file 'calibration.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALIBRATION_H
#define UI_CALIBRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calibration
{
public:
    QLabel *label_2;
    QLabel *label_15;
    QPushButton *searchPixcelButton;
    QLabel *label_11;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *y;
    QLabel *label_29;
    QLineEdit *x;
    QLabel *label_28;
    QLabel *label_27;
    QListWidget *pixelList;
    QLabel *label_6;
    QListWidget *dbInfoList;
    QPushButton *showGraphButton;
    QLabel *label_26;
    QComboBox *lineComboBox;
    QLabel *label_8;
    QComboBox *yComboBox;
    QComboBox *xComboBox;
    QLabel *label_7;
    QLabel *label_4;
    QLineEdit *targetTh;
    QLabel *label_3;
    QLineEdit *targetTl;
    QLineEdit *bolTh;
    QLabel *label_21;
    QLineEdit *bolTl;
    QLabel *label_20;
    QLineEdit *shutTh;
    QLabel *label_19;
    QLineEdit *shutTl;
    QLabel *label_18;
    QLineEdit *pkgTh;
    QLabel *label_25;
    QLineEdit *pkgTl;
    QLabel *label_24;
    QLineEdit *lensTh;
    QLabel *label_17;
    QLineEdit *lensTl;
    QLabel *label_16;
    QLineEdit *caseTh;
    QLineEdit *caseTl;
    QLabel *label_23;
    QLabel *label_22;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QCheckBox *All;
    QCheckBox *BB;
    QCheckBox *OilBB;
    QCheckBox *Winselwan;
    QCheckBox *MARAr;
    QCheckBox *Murray;
    QCheckBox *Murchison;
    QCheckBox *Sky;
    QCheckBox *Colli_BB;
    QCheckBox *BB_modified;
    QCheckBox *Colli_BB_modified;
    QCheckBox *Furnace_BB_modified;
    QCheckBox *Oil_bath_BB_modified;

    void setupUi(QDialog *Calibration)
    {
        if (Calibration->objectName().isEmpty())
            Calibration->setObjectName(QString::fromUtf8("Calibration"));
        Calibration->resize(1072, 484);
        label_2 = new QLabel(Calibration);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(174, 28, 117, 16));
        label_15 = new QLabel(Calibration);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(174, 379, 131, 16));
        searchPixcelButton = new QPushButton(Calibration);
        searchPixcelButton->setObjectName(QString::fromUtf8("searchPixcelButton"));
        searchPixcelButton->setGeometry(QRect(170, 434, 261, 32));
        label_11 = new QLabel(Calibration);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(174, 262, 126, 16));
        label = new QLabel(Calibration);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(174, 2, 76, 16));
        label_5 = new QLabel(Calibration);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(174, 86, 147, 16));
        label_5->setStyleSheet(QString::fromUtf8(""));
        label_9 = new QLabel(Calibration);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(174, 145, 132, 16));
        label_10 = new QLabel(Calibration);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(174, 204, 112, 16));
        label_12 = new QLabel(Calibration);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(174, 321, 110, 16));
        label_13 = new QLabel(Calibration);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(2, 1, 39, 16));
        y = new QLineEdit(Calibration);
        y->setObjectName(QString::fromUtf8("y"));
        y->setGeometry(QRect(322, 402, 102, 21));
        label_29 = new QLabel(Calibration);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(305, 402, 16, 16));
        x = new QLineEdit(Calibration);
        x->setObjectName(QString::fromUtf8("x"));
        x->setGeometry(QRect(194, 402, 101, 21));
        label_28 = new QLabel(Calibration);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(177, 402, 16, 16));
        label_27 = new QLabel(Calibration);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(440, 0, 165, 16));
        pixelList = new QListWidget(Calibration);
        pixelList->setObjectName(QString::fromUtf8("pixelList"));
        pixelList->setGeometry(QRect(441, 29, 189, 441));
        label_6 = new QLabel(Calibration);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(640, 0, 69, 16));
        dbInfoList = new QListWidget(Calibration);
        dbInfoList->setObjectName(QString::fromUtf8("dbInfoList"));
        dbInfoList->setGeometry(QRect(640, 30, 421, 341));
        showGraphButton = new QPushButton(Calibration);
        showGraphButton->setObjectName(QString::fromUtf8("showGraphButton"));
        showGraphButton->setGeometry(QRect(630, 439, 421, 32));
        label_26 = new QLabel(Calibration);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(946, 380, 59, 16));
        lineComboBox = new QComboBox(Calibration);
        lineComboBox->addItem(QString());
        lineComboBox->addItem(QString());
        lineComboBox->setObjectName(QString::fromUtf8("lineComboBox"));
        lineComboBox->setGeometry(QRect(943, 402, 108, 26));
        label_8 = new QLabel(Calibration);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(793, 380, 37, 16));
        yComboBox = new QComboBox(Calibration);
        yComboBox->addItem(QString());
        yComboBox->addItem(QString());
        yComboBox->addItem(QString());
        yComboBox->addItem(QString());
        yComboBox->addItem(QString());
        yComboBox->addItem(QString());
        yComboBox->addItem(QString());
        yComboBox->addItem(QString());
        yComboBox->addItem(QString());
        yComboBox->setObjectName(QString::fromUtf8("yComboBox"));
        yComboBox->setGeometry(QRect(790, 402, 143, 26));
        xComboBox = new QComboBox(Calibration);
        xComboBox->addItem(QString());
        xComboBox->addItem(QString());
        xComboBox->addItem(QString());
        xComboBox->addItem(QString());
        xComboBox->addItem(QString());
        xComboBox->addItem(QString());
        xComboBox->addItem(QString());
        xComboBox->addItem(QString());
        xComboBox->addItem(QString());
        xComboBox->setObjectName(QString::fromUtf8("xComboBox"));
        xComboBox->setGeometry(QRect(637, 402, 143, 26));
        label_7 = new QLabel(Calibration);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(640, 380, 37, 16));
        label_4 = new QLabel(Calibration);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(296, 51, 41, 16));
        targetTh = new QLineEdit(Calibration);
        targetTh->setObjectName(QString::fromUtf8("targetTh"));
        targetTh->setGeometry(QRect(345, 51, 85, 21));
        label_3 = new QLabel(Calibration);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(171, 51, 22, 16));
        targetTl = new QLineEdit(Calibration);
        targetTl->setObjectName(QString::fromUtf8("targetTl"));
        targetTl->setGeometry(QRect(201, 51, 85, 21));
        bolTh = new QLineEdit(Calibration);
        bolTh->setObjectName(QString::fromUtf8("bolTh"));
        bolTh->setGeometry(QRect(345, 111, 85, 21));
        label_21 = new QLabel(Calibration);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(296, 111, 41, 16));
        bolTl = new QLineEdit(Calibration);
        bolTl->setObjectName(QString::fromUtf8("bolTl"));
        bolTl->setGeometry(QRect(201, 111, 85, 21));
        label_20 = new QLabel(Calibration);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(171, 111, 22, 16));
        shutTh = new QLineEdit(Calibration);
        shutTh->setObjectName(QString::fromUtf8("shutTh"));
        shutTh->setGeometry(QRect(345, 291, 85, 21));
        label_19 = new QLabel(Calibration);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(296, 291, 41, 16));
        shutTl = new QLineEdit(Calibration);
        shutTl->setObjectName(QString::fromUtf8("shutTl"));
        shutTl->setGeometry(QRect(201, 291, 85, 21));
        label_18 = new QLabel(Calibration);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(171, 291, 22, 16));
        pkgTh = new QLineEdit(Calibration);
        pkgTh->setObjectName(QString::fromUtf8("pkgTh"));
        pkgTh->setGeometry(QRect(345, 171, 85, 21));
        label_25 = new QLabel(Calibration);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(296, 171, 41, 16));
        pkgTl = new QLineEdit(Calibration);
        pkgTl->setObjectName(QString::fromUtf8("pkgTl"));
        pkgTl->setGeometry(QRect(201, 171, 85, 21));
        label_24 = new QLabel(Calibration);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(171, 171, 22, 16));
        lensTh = new QLineEdit(Calibration);
        lensTh->setObjectName(QString::fromUtf8("lensTh"));
        lensTh->setGeometry(QRect(345, 351, 85, 21));
        label_17 = new QLabel(Calibration);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(296, 351, 41, 16));
        lensTl = new QLineEdit(Calibration);
        lensTl->setObjectName(QString::fromUtf8("lensTl"));
        lensTl->setGeometry(QRect(201, 351, 85, 21));
        label_16 = new QLabel(Calibration);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(171, 351, 22, 16));
        caseTh = new QLineEdit(Calibration);
        caseTh->setObjectName(QString::fromUtf8("caseTh"));
        caseTh->setGeometry(QRect(350, 230, 81, 21));
        caseTl = new QLineEdit(Calibration);
        caseTl->setObjectName(QString::fromUtf8("caseTl"));
        caseTl->setGeometry(QRect(201, 231, 81, 21));
        label_23 = new QLabel(Calibration);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(300, 230, 41, 16));
        label_22 = new QLabel(Calibration);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(171, 231, 22, 16));
        verticalLayoutWidget = new QWidget(Calibration);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(11, 11, 201, 481));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        All = new QCheckBox(verticalLayoutWidget);
        All->setObjectName(QString::fromUtf8("All"));

        verticalLayout->addWidget(All);

        BB = new QCheckBox(verticalLayoutWidget);
        BB->setObjectName(QString::fromUtf8("BB"));

        verticalLayout->addWidget(BB);

        OilBB = new QCheckBox(verticalLayoutWidget);
        OilBB->setObjectName(QString::fromUtf8("OilBB"));

        verticalLayout->addWidget(OilBB);

        Winselwan = new QCheckBox(verticalLayoutWidget);
        Winselwan->setObjectName(QString::fromUtf8("Winselwan"));

        verticalLayout->addWidget(Winselwan);

        MARAr = new QCheckBox(verticalLayoutWidget);
        MARAr->setObjectName(QString::fromUtf8("MARAr"));

        verticalLayout->addWidget(MARAr);

        Murray = new QCheckBox(verticalLayoutWidget);
        Murray->setObjectName(QString::fromUtf8("Murray"));

        verticalLayout->addWidget(Murray);

        Murchison = new QCheckBox(verticalLayoutWidget);
        Murchison->setObjectName(QString::fromUtf8("Murchison"));

        verticalLayout->addWidget(Murchison);

        Sky = new QCheckBox(verticalLayoutWidget);
        Sky->setObjectName(QString::fromUtf8("Sky"));

        verticalLayout->addWidget(Sky);

        Colli_BB = new QCheckBox(verticalLayoutWidget);
        Colli_BB->setObjectName(QString::fromUtf8("Colli_BB"));

        verticalLayout->addWidget(Colli_BB);

        BB_modified = new QCheckBox(verticalLayoutWidget);
        BB_modified->setObjectName(QString::fromUtf8("BB_modified"));

        verticalLayout->addWidget(BB_modified);

        Colli_BB_modified = new QCheckBox(verticalLayoutWidget);
        Colli_BB_modified->setObjectName(QString::fromUtf8("Colli_BB_modified"));

        verticalLayout->addWidget(Colli_BB_modified);

        Furnace_BB_modified = new QCheckBox(verticalLayoutWidget);
        Furnace_BB_modified->setObjectName(QString::fromUtf8("Furnace_BB_modified"));

        verticalLayout->addWidget(Furnace_BB_modified);

        Oil_bath_BB_modified = new QCheckBox(verticalLayoutWidget);
        Oil_bath_BB_modified->setObjectName(QString::fromUtf8("Oil_bath_BB_modified"));

        verticalLayout->addWidget(Oil_bath_BB_modified);

        QWidget::setTabOrder(OilBB, Winselwan);
        QWidget::setTabOrder(Winselwan, MARAr);
        QWidget::setTabOrder(MARAr, Murray);
        QWidget::setTabOrder(Murray, Murchison);
        QWidget::setTabOrder(Murchison, Sky);
        QWidget::setTabOrder(Sky, targetTl);
        QWidget::setTabOrder(targetTl, targetTh);
        QWidget::setTabOrder(targetTh, bolTl);
        QWidget::setTabOrder(bolTl, bolTh);
        QWidget::setTabOrder(bolTh, pkgTl);
        QWidget::setTabOrder(pkgTl, pkgTh);
        QWidget::setTabOrder(pkgTh, caseTl);
        QWidget::setTabOrder(caseTl, caseTh);
        QWidget::setTabOrder(caseTh, shutTl);
        QWidget::setTabOrder(shutTl, shutTh);
        QWidget::setTabOrder(shutTh, lensTl);
        QWidget::setTabOrder(lensTl, lensTh);
        QWidget::setTabOrder(lensTh, x);
        QWidget::setTabOrder(x, y);
        QWidget::setTabOrder(y, searchPixcelButton);
        QWidget::setTabOrder(searchPixcelButton, pixelList);
        QWidget::setTabOrder(pixelList, dbInfoList);
        QWidget::setTabOrder(dbInfoList, xComboBox);
        QWidget::setTabOrder(xComboBox, yComboBox);
        QWidget::setTabOrder(yComboBox, lineComboBox);
        QWidget::setTabOrder(lineComboBox, showGraphButton);

        retranslateUi(Calibration);

        QMetaObject::connectSlotsByName(Calibration);
    } // setupUi

    void retranslateUi(QDialog *Calibration)
    {
        Calibration->setWindowTitle(QCoreApplication::translate("Calibration", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("Calibration", "Target tempareture", nullptr));
        label_15->setText(QCoreApplication::translate("Calibration", "Detector Coordinates", nullptr));
        searchPixcelButton->setText(QCoreApplication::translate("Calibration", "Search Pixel", nullptr));
        label_11->setText(QCoreApplication::translate("Calibration", "Shutter Temperature", nullptr));
        label->setText(QCoreApplication::translate("Calibration", "Instruments ", nullptr));
        label_5->setText(QCoreApplication::translate("Calibration", "Bolometer Temperature ", nullptr));
        label_9->setText(QCoreApplication::translate("Calibration", "Package Temperature", nullptr));
        label_10->setText(QCoreApplication::translate("Calibration", "Case Temperature", nullptr));
        label_12->setText(QCoreApplication::translate("Calibration", "Lens Temperature", nullptr));
        label_13->setText(QCoreApplication::translate("Calibration", "Target", nullptr));
        y->setText(QCoreApplication::translate("Calibration", "128", nullptr));
        label_29->setText(QCoreApplication::translate("Calibration", "Y", nullptr));
        x->setText(QCoreApplication::translate("Calibration", "192", nullptr));
        label_28->setText(QCoreApplication::translate("Calibration", "X", nullptr));
        label_27->setText(QCoreApplication::translate("Calibration", "Pixel List                               ", nullptr));
        label_6->setText(QCoreApplication::translate("Calibration", "Information", nullptr));
        showGraphButton->setText(QCoreApplication::translate("Calibration", "Show Graph", nullptr));
        label_26->setText(QCoreApplication::translate("Calibration", "Line Type", nullptr));
        lineComboBox->setItemText(0, QCoreApplication::translate("Calibration", "no line", nullptr));
        lineComboBox->setItemText(1, QCoreApplication::translate("Calibration", "solid line", nullptr));

        label_8->setText(QCoreApplication::translate("Calibration", "y-axis", nullptr));
        yComboBox->setItemText(0, QCoreApplication::translate("Calibration", "diff DN", nullptr));
        yComboBox->setItemText(1, QCoreApplication::translate("Calibration", "No.", nullptr));
        yComboBox->setItemText(2, QCoreApplication::translate("Calibration", "target T(degC)", nullptr));
        yComboBox->setItemText(3, QCoreApplication::translate("Calibration", "pkg T(degC)", nullptr));
        yComboBox->setItemText(4, QCoreApplication::translate("Calibration", "case T(degC)", nullptr));
        yComboBox->setItemText(5, QCoreApplication::translate("Calibration", "shtr T(degC)", nullptr));
        yComboBox->setItemText(6, QCoreApplication::translate("Calibration", "lens T(degC)", nullptr));
        yComboBox->setItemText(7, QCoreApplication::translate("Calibration", "open DN", nullptr));
        yComboBox->setItemText(8, QCoreApplication::translate("Calibration", "close DN", nullptr));

        xComboBox->setItemText(0, QCoreApplication::translate("Calibration", "target T(degC)", nullptr));
        xComboBox->setItemText(1, QCoreApplication::translate("Calibration", "No.", nullptr));
        xComboBox->setItemText(2, QCoreApplication::translate("Calibration", "pkg T(degC)", nullptr));
        xComboBox->setItemText(3, QCoreApplication::translate("Calibration", "case T(degC)", nullptr));
        xComboBox->setItemText(4, QCoreApplication::translate("Calibration", "shtr T(degC)", nullptr));
        xComboBox->setItemText(5, QCoreApplication::translate("Calibration", "lens T(degC)", nullptr));
        xComboBox->setItemText(6, QCoreApplication::translate("Calibration", "open DN", nullptr));
        xComboBox->setItemText(7, QCoreApplication::translate("Calibration", "close DN", nullptr));
        xComboBox->setItemText(8, QCoreApplication::translate("Calibration", "diff DN", nullptr));

        label_7->setText(QCoreApplication::translate("Calibration", "x-axis", nullptr));
        label_4->setText(QCoreApplication::translate("Calibration", "to Max", nullptr));
        label_3->setText(QCoreApplication::translate("Calibration", "Min", nullptr));
        label_21->setText(QCoreApplication::translate("Calibration", "to Max", nullptr));
        label_20->setText(QCoreApplication::translate("Calibration", "Min", nullptr));
        label_19->setText(QCoreApplication::translate("Calibration", "to Max", nullptr));
        label_18->setText(QCoreApplication::translate("Calibration", "Min", nullptr));
        label_25->setText(QCoreApplication::translate("Calibration", "to Max", nullptr));
        label_24->setText(QCoreApplication::translate("Calibration", "Min", nullptr));
        label_17->setText(QCoreApplication::translate("Calibration", "to Max", nullptr));
        label_16->setText(QCoreApplication::translate("Calibration", "Min", nullptr));
        label_23->setText(QCoreApplication::translate("Calibration", "to Max", nullptr));
        label_22->setText(QCoreApplication::translate("Calibration", "Min", nullptr));
        All->setText(QCoreApplication::translate("Calibration", "All", nullptr));
        BB->setText(QCoreApplication::translate("Calibration", "Black_body", nullptr));
        OilBB->setText(QCoreApplication::translate("Calibration", "Oil_bath_black_body", nullptr));
        Winselwan->setText(QCoreApplication::translate("Calibration", "Winselwan(meteorite)", nullptr));
        MARAr->setText(QCoreApplication::translate("Calibration", "MARA_rock_plate", nullptr));
        Murray->setText(QCoreApplication::translate("Calibration", "Murray(meteorite)", nullptr));
        Murchison->setText(QCoreApplication::translate("Calibration", "Murchison(meteorite)", nullptr));
        Sky->setText(QCoreApplication::translate("Calibration", "Sky", nullptr));
        Colli_BB->setText(QCoreApplication::translate("Calibration", "Colli_BB", nullptr));
        BB_modified->setText(QCoreApplication::translate("Calibration", "BB_modified", nullptr));
        Colli_BB_modified->setText(QCoreApplication::translate("Calibration", "Colli_BB_modified", nullptr));
        Furnace_BB_modified->setText(QCoreApplication::translate("Calibration", "Furnace_BB_modified", nullptr));
        Oil_bath_BB_modified->setText(QCoreApplication::translate("Calibration", "Oil_bath_BB_modified", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calibration: public Ui_Calibration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALIBRATION_H
