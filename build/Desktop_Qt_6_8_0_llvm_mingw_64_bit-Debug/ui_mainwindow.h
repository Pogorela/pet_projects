/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *currencyConvert;
    QPushButton *Calculator;
    QPushButton *ClientServer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        currencyConvert = new QPushButton(centralwidget);
        currencyConvert->setObjectName("currencyConvert");
        currencyConvert->setGeometry(QRect(70, 90, 200, 100));
        currencyConvert->setMinimumSize(QSize(200, 100));
        currencyConvert->setBaseSize(QSize(200, 100));
        Calculator = new QPushButton(centralwidget);
        Calculator->setObjectName("Calculator");
        Calculator->setGeometry(QRect(70, 220, 200, 100));
        Calculator->setMinimumSize(QSize(200, 100));
        Calculator->setBaseSize(QSize(200, 100));
        ClientServer = new QPushButton(centralwidget);
        ClientServer->setObjectName("ClientServer");
        ClientServer->setGeometry(QRect(70, 350, 200, 100));
        ClientServer->setMinimumSize(QSize(200, 100));
        ClientServer->setBaseSize(QSize(200, 100));
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
        currencyConvert->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\275\320\262\320\265\321\200\321\202\320\265\321\200 \320\262\320\260\320\273\321\216\321\202", nullptr));
        Calculator->setText(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        ClientServer->setText(QCoreApplication::translate("MainWindow", "\320\232\320\273\320\270\320\265\320\275\321\202-\320\241\320\265\321\200\320\262\320\265\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
