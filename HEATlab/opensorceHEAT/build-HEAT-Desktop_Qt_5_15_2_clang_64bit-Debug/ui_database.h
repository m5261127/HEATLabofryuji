/********************************************************************************
** Form generated from reading UI file 'database.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASE_H
#define UI_DATABASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "showimage.h"

QT_BEGIN_NAMESPACE

class Ui_Database
{
public:
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_13;
    QSpacerItem *verticalSpacer_2;
    QCheckBox *All;
    QSpacerItem *verticalSpacer_3;
    QCheckBox *BB;
    QSpacerItem *verticalSpacer_4;
    QCheckBox *OilBB;
    QSpacerItem *verticalSpacer_5;
    QCheckBox *Winselwan;
    QSpacerItem *verticalSpacer_6;
    QCheckBox *MARAr;
    QSpacerItem *verticalSpacer_7;
    QCheckBox *Murray;
    QSpacerItem *verticalSpacer_8;
    QCheckBox *Murchison;
    QSpacerItem *verticalSpacer_9;
    QCheckBox *Sky;
    QSpacerItem *verticalSpacer_10;
    QCheckBox *ColliBB;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *targetTl;
    QLabel *label_4;
    QLineEdit *targetTh;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_20;
    QLineEdit *bolTl;
    QLabel *label_21;
    QLineEdit *bolTh;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_24;
    QLineEdit *pkgTl;
    QLabel *label_25;
    QLineEdit *pkgTh;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_22;
    QLineEdit *caseTl;
    QLabel *label_23;
    QLineEdit *caseTh;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_18;
    QLineEdit *shutTl;
    QLabel *label_19;
    QLineEdit *shutTh;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_16;
    QLineEdit *lensTl;
    QLabel *label_17;
    QLineEdit *lensTh;
    QPushButton *dbSearchButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_14;
    QListWidget *dbSearchList;
    ShowImage *thumbnailView;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_4;
    QPushButton *loadLogButton;
    QPushButton *crearLogButton;
    QPushButton *showInfoButton;
    QPushButton *subPair;
    QLineEdit *heightValue;
    QLineEdit *widthValue;
    QLineEdit *pixelValue;
    QPushButton *showGraph;
    QLabel *label_15;
    QLabel *label_26;
    QLabel *label_27;
    QPushButton *setTIRDirectory;
    QLabel *connectState;

    void setupUi(QDialog *Database)
    {
        if (Database->objectName().isEmpty())
            Database->setObjectName(QString::fromUtf8("Database"));
        Database->resize(1068, 432);
        horizontalLayoutWidget_2 = new QWidget(Database);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 10, 371, 411));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_13 = new QLabel(horizontalLayoutWidget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_2->addWidget(label_13);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        All = new QCheckBox(horizontalLayoutWidget_2);
        All->setObjectName(QString::fromUtf8("All"));

        verticalLayout_2->addWidget(All);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        BB = new QCheckBox(horizontalLayoutWidget_2);
        BB->setObjectName(QString::fromUtf8("BB"));

        verticalLayout_2->addWidget(BB);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        OilBB = new QCheckBox(horizontalLayoutWidget_2);
        OilBB->setObjectName(QString::fromUtf8("OilBB"));

        verticalLayout_2->addWidget(OilBB);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        Winselwan = new QCheckBox(horizontalLayoutWidget_2);
        Winselwan->setObjectName(QString::fromUtf8("Winselwan"));

        verticalLayout_2->addWidget(Winselwan);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

        MARAr = new QCheckBox(horizontalLayoutWidget_2);
        MARAr->setObjectName(QString::fromUtf8("MARAr"));

        verticalLayout_2->addWidget(MARAr);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_7);

        Murray = new QCheckBox(horizontalLayoutWidget_2);
        Murray->setObjectName(QString::fromUtf8("Murray"));

        verticalLayout_2->addWidget(Murray);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_8);

        Murchison = new QCheckBox(horizontalLayoutWidget_2);
        Murchison->setObjectName(QString::fromUtf8("Murchison"));

        verticalLayout_2->addWidget(Murchison);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_9);

        Sky = new QCheckBox(horizontalLayoutWidget_2);
        Sky->setObjectName(QString::fromUtf8("Sky"));

        verticalLayout_2->addWidget(Sky);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_10);

        ColliBB = new QCheckBox(horizontalLayoutWidget_2);
        ColliBB->setObjectName(QString::fromUtf8("ColliBB"));

        verticalLayout_2->addWidget(ColliBB);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(horizontalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(horizontalLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        targetTl = new QLineEdit(horizontalLayoutWidget_2);
        targetTl->setObjectName(QString::fromUtf8("targetTl"));

        horizontalLayout->addWidget(targetTl);

        label_4 = new QLabel(horizontalLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        targetTh = new QLineEdit(horizontalLayoutWidget_2);
        targetTh->setObjectName(QString::fromUtf8("targetTh"));

        horizontalLayout->addWidget(targetTh);


        verticalLayout->addLayout(horizontalLayout);

        label_5 = new QLabel(horizontalLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(label_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_20 = new QLabel(horizontalLayoutWidget_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_6->addWidget(label_20);

        bolTl = new QLineEdit(horizontalLayoutWidget_2);
        bolTl->setObjectName(QString::fromUtf8("bolTl"));

        horizontalLayout_6->addWidget(bolTl);

        label_21 = new QLabel(horizontalLayoutWidget_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_6->addWidget(label_21);

        bolTh = new QLineEdit(horizontalLayoutWidget_2);
        bolTh->setObjectName(QString::fromUtf8("bolTh"));

        horizontalLayout_6->addWidget(bolTh);


        verticalLayout->addLayout(horizontalLayout_6);

        label_9 = new QLabel(horizontalLayoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout->addWidget(label_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_24 = new QLabel(horizontalLayoutWidget_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        horizontalLayout_8->addWidget(label_24);

        pkgTl = new QLineEdit(horizontalLayoutWidget_2);
        pkgTl->setObjectName(QString::fromUtf8("pkgTl"));

        horizontalLayout_8->addWidget(pkgTl);

        label_25 = new QLabel(horizontalLayoutWidget_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        horizontalLayout_8->addWidget(label_25);

        pkgTh = new QLineEdit(horizontalLayoutWidget_2);
        pkgTh->setObjectName(QString::fromUtf8("pkgTh"));

        horizontalLayout_8->addWidget(pkgTh);


        verticalLayout->addLayout(horizontalLayout_8);

        label_10 = new QLabel(horizontalLayoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout->addWidget(label_10);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_22 = new QLabel(horizontalLayoutWidget_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_7->addWidget(label_22);

        caseTl = new QLineEdit(horizontalLayoutWidget_2);
        caseTl->setObjectName(QString::fromUtf8("caseTl"));

        horizontalLayout_7->addWidget(caseTl);

        label_23 = new QLabel(horizontalLayoutWidget_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        horizontalLayout_7->addWidget(label_23);

        caseTh = new QLineEdit(horizontalLayoutWidget_2);
        caseTh->setObjectName(QString::fromUtf8("caseTh"));

        horizontalLayout_7->addWidget(caseTh);


        verticalLayout->addLayout(horizontalLayout_7);

        label_11 = new QLabel(horizontalLayoutWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout->addWidget(label_11);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_18 = new QLabel(horizontalLayoutWidget_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_5->addWidget(label_18);

        shutTl = new QLineEdit(horizontalLayoutWidget_2);
        shutTl->setObjectName(QString::fromUtf8("shutTl"));

        horizontalLayout_5->addWidget(shutTl);

        label_19 = new QLabel(horizontalLayoutWidget_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_5->addWidget(label_19);

        shutTh = new QLineEdit(horizontalLayoutWidget_2);
        shutTh->setObjectName(QString::fromUtf8("shutTh"));

        horizontalLayout_5->addWidget(shutTh);


        verticalLayout->addLayout(horizontalLayout_5);

        label_12 = new QLabel(horizontalLayoutWidget_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout->addWidget(label_12);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_16 = new QLabel(horizontalLayoutWidget_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_4->addWidget(label_16);

        lensTl = new QLineEdit(horizontalLayoutWidget_2);
        lensTl->setObjectName(QString::fromUtf8("lensTl"));

        horizontalLayout_4->addWidget(lensTl);

        label_17 = new QLabel(horizontalLayoutWidget_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_4->addWidget(label_17);

        lensTh = new QLineEdit(horizontalLayoutWidget_2);
        lensTh->setObjectName(QString::fromUtf8("lensTh"));

        horizontalLayout_4->addWidget(lensTh);


        verticalLayout->addLayout(horizontalLayout_4);

        dbSearchButton = new QPushButton(horizontalLayoutWidget_2);
        dbSearchButton->setObjectName(QString::fromUtf8("dbSearchButton"));
        dbSearchButton->setAutoDefault(false);

        verticalLayout->addWidget(dbSearchButton);


        horizontalLayout_2->addLayout(verticalLayout);

        layoutWidget = new QWidget(Database);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(380, 10, 171, 411));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout_3->addWidget(label_14);

        dbSearchList = new QListWidget(layoutWidget);
        dbSearchList->setObjectName(QString::fromUtf8("dbSearchList"));

        verticalLayout_3->addWidget(dbSearchList);

        thumbnailView = new ShowImage(Database);
        thumbnailView->setObjectName(QString::fromUtf8("thumbnailView"));
        thumbnailView->setGeometry(QRect(560, 40, 494, 276));
        verticalLayoutWidget = new QWidget(Database);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(820, 320, 231, 71));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        loadLogButton = new QPushButton(verticalLayoutWidget);
        loadLogButton->setObjectName(QString::fromUtf8("loadLogButton"));
        loadLogButton->setAutoDefault(false);

        verticalLayout_4->addWidget(loadLogButton);

        crearLogButton = new QPushButton(verticalLayoutWidget);
        crearLogButton->setObjectName(QString::fromUtf8("crearLogButton"));
        crearLogButton->setAutoDefault(false);

        verticalLayout_4->addWidget(crearLogButton);

        showInfoButton = new QPushButton(Database);
        showInfoButton->setObjectName(QString::fromUtf8("showInfoButton"));
        showInfoButton->setGeometry(QRect(550, 320, 141, 51));
        showInfoButton->setAutoDefault(false);
        showInfoButton->setFlat(false);
        subPair = new QPushButton(Database);
        subPair->setObjectName(QString::fromUtf8("subPair"));
        subPair->setGeometry(QRect(690, 320, 121, 32));
        heightValue = new QLineEdit(Database);
        heightValue->setObjectName(QString::fromUtf8("heightValue"));
        heightValue->setGeometry(QRect(730, 10, 101, 21));
        widthValue = new QLineEdit(Database);
        widthValue->setObjectName(QString::fromUtf8("widthValue"));
        widthValue->setGeometry(QRect(580, 10, 113, 21));
        pixelValue = new QLineEdit(Database);
        pixelValue->setObjectName(QString::fromUtf8("pixelValue"));
        pixelValue->setGeometry(QRect(880, 10, 113, 21));
        showGraph = new QPushButton(Database);
        showGraph->setObjectName(QString::fromUtf8("showGraph"));
        showGraph->setGeometry(QRect(690, 350, 131, 32));
        label_15 = new QLabel(Database);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(560, 10, 21, 16));
        label_26 = new QLabel(Database);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(700, 10, 21, 16));
        label_27 = new QLabel(Database);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(840, 10, 41, 20));
        setTIRDirectory = new QPushButton(Database);
        setTIRDirectory->setObjectName(QString::fromUtf8("setTIRDirectory"));
        setTIRDirectory->setGeometry(QRect(860, 390, 161, 32));
        connectState = new QLabel(Database);
        connectState->setObjectName(QString::fromUtf8("connectState"));
        connectState->setGeometry(QRect(570, 400, 281, 17));

        retranslateUi(Database);

        showInfoButton->setDefault(false);


        QMetaObject::connectSlotsByName(Database);
    } // setupUi

    void retranslateUi(QDialog *Database)
    {
        Database->setWindowTitle(QCoreApplication::translate("Database", "Dialog", nullptr));
        label_13->setText(QCoreApplication::translate("Database", "Target", nullptr));
        All->setText(QCoreApplication::translate("Database", "All", nullptr));
        BB->setText(QCoreApplication::translate("Database", "Black_body", nullptr));
        OilBB->setText(QCoreApplication::translate("Database", "Oil_bath_black_body", nullptr));
        Winselwan->setText(QCoreApplication::translate("Database", "Winselwan(meteorite)", nullptr));
        MARAr->setText(QCoreApplication::translate("Database", "MARA_rock_plate", nullptr));
        Murray->setText(QCoreApplication::translate("Database", "Murray(meteorite)", nullptr));
        Murchison->setText(QCoreApplication::translate("Database", "Murchison(meteorite)", nullptr));
        Sky->setText(QCoreApplication::translate("Database", "Sky", nullptr));
        ColliBB->setText(QCoreApplication::translate("Database", "Colli_BB", nullptr));
        label->setText(QCoreApplication::translate("Database", "Instruments ", nullptr));
        label_2->setText(QCoreApplication::translate("Database", "Target tempareture", nullptr));
        label_3->setText(QCoreApplication::translate("Database", "Min", nullptr));
        label_4->setText(QCoreApplication::translate("Database", "to Max", nullptr));
        label_5->setText(QCoreApplication::translate("Database", "Bolometer Temperature ", nullptr));
        label_20->setText(QCoreApplication::translate("Database", "Min", nullptr));
        label_21->setText(QCoreApplication::translate("Database", "to Max", nullptr));
        label_9->setText(QCoreApplication::translate("Database", "Package Temperature", nullptr));
        label_24->setText(QCoreApplication::translate("Database", "Min", nullptr));
        label_25->setText(QCoreApplication::translate("Database", "to Max", nullptr));
        label_10->setText(QCoreApplication::translate("Database", "Case Temperature", nullptr));
        label_22->setText(QCoreApplication::translate("Database", "Min", nullptr));
        label_23->setText(QCoreApplication::translate("Database", "to Max", nullptr));
        label_11->setText(QCoreApplication::translate("Database", "Shutter Temperature", nullptr));
        label_18->setText(QCoreApplication::translate("Database", "Min", nullptr));
        label_19->setText(QCoreApplication::translate("Database", "to Max", nullptr));
        label_12->setText(QCoreApplication::translate("Database", "Lens Temperature", nullptr));
        label_16->setText(QCoreApplication::translate("Database", "Min", nullptr));
        label_17->setText(QCoreApplication::translate("Database", "to Max", nullptr));
        dbSearchButton->setText(QCoreApplication::translate("Database", "Search from Database", nullptr));
        label_14->setText(QCoreApplication::translate("Database", "Search Result List", nullptr));
        loadLogButton->setText(QCoreApplication::translate("Database", "Load searched log file", nullptr));
        crearLogButton->setText(QCoreApplication::translate("Database", "Clear all searched log file", nullptr));
        showInfoButton->setText(QCoreApplication::translate("Database", "Show info", nullptr));
        subPair->setText(QCoreApplication::translate("Database", "Subtract", nullptr));
        showGraph->setText(QCoreApplication::translate("Database", "Show Y line graph", nullptr));
        label_15->setText(QCoreApplication::translate("Database", "X:", nullptr));
        label_26->setText(QCoreApplication::translate("Database", "Y:", nullptr));
        label_27->setText(QCoreApplication::translate("Database", "Value:", nullptr));
        setTIRDirectory->setText(QCoreApplication::translate("Database", "Set TIR data directory", nullptr));
        connectState->setText(QCoreApplication::translate("Database", "Status: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Database: public Ui_Database {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASE_H
