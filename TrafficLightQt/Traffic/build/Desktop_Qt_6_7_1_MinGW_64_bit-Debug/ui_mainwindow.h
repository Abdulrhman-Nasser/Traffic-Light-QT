/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pb_red;
    QPushButton *pb_yellow;
    QPushButton *pb_green;
    QVBoxLayout *verticalLayout_2;
    QLabel *l_color;
    QLCDNumber *lcdNumber;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(70, 60, 651, 431));
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 50, 601, 361));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        pb_red = new QPushButton(widget);
        pb_red->setObjectName("pb_red");
        pb_red->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);\n"
"font: 700 12pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(pb_red);

        pb_yellow = new QPushButton(widget);
        pb_yellow->setObjectName("pb_yellow");
        pb_yellow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);\n"
"font: 700 12pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(pb_yellow);

        pb_green = new QPushButton(widget);
        pb_green->setObjectName("pb_green");
        pb_green->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 0);\n"
"font: 700 12pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(pb_green);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        l_color = new QLabel(widget);
        l_color->setObjectName("l_color");
        l_color->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(l_color);

        lcdNumber = new QLCDNumber(widget);
        lcdNumber->setObjectName("lcdNumber");

        verticalLayout_2->addWidget(lcdNumber);


        horizontalLayout->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "QT TrafficLight System", nullptr));
        pb_red->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        pb_yellow->setText(QCoreApplication::translate("MainWindow", "Yellow", nullptr));
        pb_green->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        l_color->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
