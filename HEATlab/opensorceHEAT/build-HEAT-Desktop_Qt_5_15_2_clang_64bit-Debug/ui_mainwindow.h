/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "rendering.h"
#include "showimage.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *Open;
    QAction *action_Open;
    QAction *actionSelect_TIR_directory;
    QAction *actionChange_DB_info;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    Rendering *modelRendering;
    ShowImage *imageViewer;
    QWidget *horizontalLayoutWidget_9;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_7;
    QListWidget *pixelInfoList;
    QPushButton *pushButton_4;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *coordinate_x;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *coordinate_y;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QComboBox *comboBox_2;
    QLabel *label_26;
    QComboBox *comboBox;
    QLabel *label_28;
    QComboBox *modelSelect;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_7;
    QPushButton *loadDataButton;
    QLabel *label_8;
    QListWidget *loadedDataList;
    QHBoxLayout *horizontalLayout;
    QPushButton *exportWindowButton;
    QPushButton *pushButton;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_27;
    QListWidget *windowList;
    QPushButton *tilingWindowButton;
    QWidget *tab_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1040, 707);
        Open = new QAction(MainWindow);
        Open->setObjectName(QString::fromUtf8("Open"));
        action_Open = new QAction(MainWindow);
        action_Open->setObjectName(QString::fromUtf8("action_Open"));
        actionSelect_TIR_directory = new QAction(MainWindow);
        actionSelect_TIR_directory->setObjectName(QString::fromUtf8("actionSelect_TIR_directory"));
        actionSelect_TIR_directory->setCheckable(false);
        actionSelect_TIR_directory->setEnabled(true);
        actionSelect_TIR_directory->setIconVisibleInMenu(true);
        actionChange_DB_info = new QAction(MainWindow);
        actionChange_DB_info->setObjectName(QString::fromUtf8("actionChange_DB_info"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(-2, 0, 1041, 651));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        modelRendering = new Rendering(tab);
        modelRendering->setObjectName(QString::fromUtf8("modelRendering"));
        modelRendering->setGeometry(QRect(540, 340, 491, 276));
        imageViewer = new ShowImage(tab);
        imageViewer->setObjectName(QString::fromUtf8("imageViewer"));
        imageViewer->setGeometry(QRect(10, 340, 494, 276));
        horizontalLayoutWidget_9 = new QWidget(tab);
        horizontalLayoutWidget_9->setObjectName(QString::fromUtf8("horizontalLayoutWidget_9"));
        horizontalLayoutWidget_9->setGeometry(QRect(10, 180, 1021, 159));
        horizontalLayout_9 = new QHBoxLayout(horizontalLayoutWidget_9);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_7 = new QLabel(horizontalLayoutWidget_9);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_6->addWidget(label_7);

        pixelInfoList = new QListWidget(horizontalLayoutWidget_9);
        new QListWidgetItem(pixelInfoList);
        new QListWidgetItem(pixelInfoList);
        new QListWidgetItem(pixelInfoList);
        new QListWidgetItem(pixelInfoList);
        pixelInfoList->setObjectName(QString::fromUtf8("pixelInfoList"));

        verticalLayout_6->addWidget(pixelInfoList);

        pushButton_4 = new QPushButton(horizontalLayoutWidget_9);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout_6->addWidget(pushButton_4);


        horizontalLayout_9->addLayout(verticalLayout_6);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(horizontalLayoutWidget_9);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 3, 0, 1, 1);

        coordinate_x = new QLineEdit(horizontalLayoutWidget_9);
        coordinate_x->setObjectName(QString::fromUtf8("coordinate_x"));

        gridLayout_2->addWidget(coordinate_x, 4, 0, 1, 1);

        label_4 = new QLabel(horizontalLayoutWidget_9);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        label_2 = new QLabel(horizontalLayoutWidget_9);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 5, 0, 1, 1);

        coordinate_y = new QLineEdit(horizontalLayoutWidget_9);
        coordinate_y->setObjectName(QString::fromUtf8("coordinate_y"));

        gridLayout_2->addWidget(coordinate_y, 6, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 7, 0, 1, 1);


        horizontalLayout_9->addLayout(gridLayout_2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_6 = new QLabel(horizontalLayoutWidget_9);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_5->addWidget(label_6);

        comboBox_2 = new QComboBox(horizontalLayoutWidget_9);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        verticalLayout_5->addWidget(comboBox_2);

        label_26 = new QLabel(horizontalLayoutWidget_9);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        verticalLayout_5->addWidget(label_26);

        comboBox = new QComboBox(horizontalLayoutWidget_9);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout_5->addWidget(comboBox);

        label_28 = new QLabel(horizontalLayoutWidget_9);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        verticalLayout_5->addWidget(label_28);

        modelSelect = new QComboBox(horizontalLayoutWidget_9);
        modelSelect->addItem(QString());
        modelSelect->addItem(QString());
        modelSelect->setObjectName(QString::fromUtf8("modelSelect"));

        verticalLayout_5->addWidget(modelSelect);


        horizontalLayout_9->addLayout(verticalLayout_5);

        verticalLayoutWidget_3 = new QWidget(tab);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 0, 351, 184));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        loadDataButton = new QPushButton(verticalLayoutWidget_3);
        loadDataButton->setObjectName(QString::fromUtf8("loadDataButton"));

        verticalLayout_7->addWidget(loadDataButton);

        label_8 = new QLabel(verticalLayoutWidget_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_7->addWidget(label_8);

        loadedDataList = new QListWidget(verticalLayoutWidget_3);
        loadedDataList->setObjectName(QString::fromUtf8("loadedDataList"));

        verticalLayout_7->addWidget(loadedDataList);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        exportWindowButton = new QPushButton(verticalLayoutWidget_3);
        exportWindowButton->setObjectName(QString::fromUtf8("exportWindowButton"));

        horizontalLayout->addWidget(exportWindowButton);

        pushButton = new QPushButton(verticalLayoutWidget_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout_7->addLayout(horizontalLayout);

        verticalLayoutWidget_4 = new QWidget(tab);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(370, 0, 351, 171));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_27 = new QLabel(verticalLayoutWidget_4);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        verticalLayout_8->addWidget(label_27);

        windowList = new QListWidget(verticalLayoutWidget_4);
        windowList->setObjectName(QString::fromUtf8("windowList"));

        verticalLayout_8->addWidget(windowList);

        tilingWindowButton = new QPushButton(verticalLayoutWidget_4);
        tilingWindowButton->setObjectName(QString::fromUtf8("tilingWindowButton"));

        verticalLayout_8->addWidget(tilingWindowButton);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1040, 22));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Open->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        action_Open->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSelect_TIR_directory->setText(QCoreApplication::translate("MainWindow", "&Select TIR directory", nullptr));
        actionChange_DB_info->setText(QCoreApplication::translate("MainWindow", "&Change DB info", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Pixel information", nullptr));

        const bool __sortingEnabled = pixelInfoList->isSortingEnabled();
        pixelInfoList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = pixelInfoList->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "coordinate of pixel", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = pixelInfoList->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "value", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = pixelInfoList->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        pixelInfoList->setSortingEnabled(__sortingEnabled);

        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Data export", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "x ", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Coordinate of pointer", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "y", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Select value", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "Digital Number", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "Temperature", nullptr));

        label_26->setText(QCoreApplication::translate("MainWindow", "Select temparature correction method", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Nothing", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Correction formula", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Bilinear", nullptr));

        label_28->setText(QCoreApplication::translate("MainWindow", "Select Model", nullptr));
        modelSelect->setItemText(0, QCoreApplication::translate("MainWindow", "Itokawa", nullptr));
        modelSelect->setItemText(1, QCoreApplication::translate("MainWindow", "Ryugu", nullptr));

        loadDataButton->setText(QCoreApplication::translate("MainWindow", "Load data", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Loaded data list", nullptr));
        exportWindowButton->setText(QCoreApplication::translate("MainWindow", "Export to window", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Search similar image", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "Window list", nullptr));
        tilingWindowButton->setText(QCoreApplication::translate("MainWindow", "Tiling window", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
