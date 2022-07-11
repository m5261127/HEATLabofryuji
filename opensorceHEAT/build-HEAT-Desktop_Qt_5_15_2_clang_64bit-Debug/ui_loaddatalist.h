/********************************************************************************
** Form generated from reading UI file 'loaddatalist.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADDATALIST_H
#define UI_LOADDATALIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoadDataList
{
public:
    QListWidget *loadedDataList;
    QPushButton *loadFileButton;
    QPushButton *changeParameterButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *minT;
    QLabel *label_2;
    QLineEdit *maxT;
    QLabel *label_3;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *tilingButton;
    QPushButton *clearListButton;
    QPushButton *closeAllButton;
    QComboBox *changeColor;
    QPushButton *substract;

    void setupUi(QDialog *LoadDataList)
    {
        if (LoadDataList->objectName().isEmpty())
            LoadDataList->setObjectName(QString::fromUtf8("LoadDataList"));
        LoadDataList->resize(360, 498);
        loadedDataList = new QListWidget(LoadDataList);
        loadedDataList->setObjectName(QString::fromUtf8("loadedDataList"));
        loadedDataList->setGeometry(QRect(10, 50, 339, 271));
        loadFileButton = new QPushButton(LoadDataList);
        loadFileButton->setObjectName(QString::fromUtf8("loadFileButton"));
        loadFileButton->setGeometry(QRect(10, 10, 341, 32));
        loadFileButton->setAutoDefault(false);
        changeParameterButton = new QPushButton(LoadDataList);
        changeParameterButton->setObjectName(QString::fromUtf8("changeParameterButton"));
        changeParameterButton->setGeometry(QRect(202, 430, 141, 32));
        changeParameterButton->setAutoDefault(false);
        horizontalLayoutWidget = new QWidget(LoadDataList);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 380, 331, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        minT = new QLineEdit(horizontalLayoutWidget);
        minT->setObjectName(QString::fromUtf8("minT"));

        horizontalLayout->addWidget(minT);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        maxT = new QLineEdit(horizontalLayoutWidget);
        maxT->setObjectName(QString::fromUtf8("maxT"));

        horizontalLayout->addWidget(maxT);

        label_3 = new QLabel(LoadDataList);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 360, 121, 16));
        horizontalLayoutWidget_2 = new QWidget(LoadDataList);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(6, 320, 341, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        tilingButton = new QPushButton(horizontalLayoutWidget_2);
        tilingButton->setObjectName(QString::fromUtf8("tilingButton"));
        tilingButton->setAutoDefault(false);

        horizontalLayout_2->addWidget(tilingButton);

        clearListButton = new QPushButton(horizontalLayoutWidget_2);
        clearListButton->setObjectName(QString::fromUtf8("clearListButton"));
        clearListButton->setAutoDefault(false);

        horizontalLayout_2->addWidget(clearListButton);

        closeAllButton = new QPushButton(horizontalLayoutWidget_2);
        closeAllButton->setObjectName(QString::fromUtf8("closeAllButton"));
        closeAllButton->setAutoDefault(false);

        horizontalLayout_2->addWidget(closeAllButton);

        changeColor = new QComboBox(LoadDataList);
        changeColor->addItem(QString());
        changeColor->addItem(QString());
        changeColor->addItem(QString());
        changeColor->setObjectName(QString::fromUtf8("changeColor"));
        changeColor->setGeometry(QRect(10, 430, 151, 26));
        substract = new QPushButton(LoadDataList);
        substract->setObjectName(QString::fromUtf8("substract"));
        substract->setGeometry(QRect(10, 470, 151, 32));
        QWidget::setTabOrder(loadFileButton, loadedDataList);
        QWidget::setTabOrder(loadedDataList, tilingButton);
        QWidget::setTabOrder(tilingButton, clearListButton);
        QWidget::setTabOrder(clearListButton, closeAllButton);
        QWidget::setTabOrder(closeAllButton, minT);
        QWidget::setTabOrder(minT, maxT);
        QWidget::setTabOrder(maxT, changeColor);
        QWidget::setTabOrder(changeColor, changeParameterButton);
        QWidget::setTabOrder(changeParameterButton, substract);

        retranslateUi(LoadDataList);

        QMetaObject::connectSlotsByName(LoadDataList);
    } // setupUi

    void retranslateUi(QDialog *LoadDataList)
    {
        LoadDataList->setWindowTitle(QCoreApplication::translate("LoadDataList", "Dialog", nullptr));
        loadFileButton->setText(QCoreApplication::translate("LoadDataList", "Load file", nullptr));
        changeParameterButton->setText(QCoreApplication::translate("LoadDataList", "Apply to all window", nullptr));
        label->setText(QCoreApplication::translate("LoadDataList", "MIN", nullptr));
        label_2->setText(QCoreApplication::translate("LoadDataList", "to MAX", nullptr));
        label_3->setText(QCoreApplication::translate("LoadDataList", "Change parameter", nullptr));
        tilingButton->setText(QCoreApplication::translate("LoadDataList", "Tiling", nullptr));
        clearListButton->setText(QCoreApplication::translate("LoadDataList", "Clear list", nullptr));
        closeAllButton->setText(QCoreApplication::translate("LoadDataList", "Close all window", nullptr));
        changeColor->setItemText(0, QCoreApplication::translate("LoadDataList", "Rainbow", nullptr));
        changeColor->setItemText(1, QCoreApplication::translate("LoadDataList", "Gray scale", nullptr));
        changeColor->setItemText(2, QCoreApplication::translate("LoadDataList", "Iron", nullptr));

        substract->setText(QCoreApplication::translate("LoadDataList", "Subtract", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoadDataList: public Ui_LoadDataList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADDATALIST_H
