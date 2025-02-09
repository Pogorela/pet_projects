/********************************************************************************
** Form generated from reading UI file 'clientwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWINDOW_H
#define UI_CLIENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientWindow
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;
    QComboBox *comboBox;
    QTextBrowser *textBrowser;
    QPushButton *connectButton;
    QLineEdit *nameSocket;
    QLabel *label_2;

    void setupUi(QWidget *ClientWindow)
    {
        if (ClientWindow->objectName().isEmpty())
            ClientWindow->setObjectName("ClientWindow");
        ClientWindow->resize(698, 728);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        ClientWindow->setFont(font);
        pushButton = new QPushButton(ClientWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(460, 558, 83, 81));
        lineEdit = new QLineEdit(ClientWindow);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(190, 550, 251, 101));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(22);
        lineEdit->setFont(font1);
        lineEdit->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        lineEdit->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label = new QLabel(ClientWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(192, 130, 351, 20));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setHintingPreference(QFont::PreferDefaultHinting);
        label->setFont(font2);
        label->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        label->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        comboBox = new QComboBox(ClientWindow);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(190, 90, 351, 28));
        textBrowser = new QTextBrowser(ClientWindow);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(190, 170, 351, 341));
        connectButton = new QPushButton(ClientWindow);
        connectButton->setObjectName("connectButton");
        connectButton->setGeometry(QRect(192, 50, 351, 29));
        nameSocket = new QLineEdit(ClientWindow);
        nameSocket->setObjectName("nameSocket");
        nameSocket->setGeometry(QRect(20, 90, 113, 28));
        label_2 = new QLabel(ClientWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 60, 31, 20));

        retranslateUi(ClientWindow);

        QMetaObject::connectSlotsByName(ClientWindow);
    } // setupUi

    void retranslateUi(QWidget *ClientWindow)
    {
        ClientWindow->setWindowTitle(QCoreApplication::translate("ClientWindow", "\320\247\320\260\321\202", nullptr));
        pushButton->setText(QCoreApplication::translate("ClientWindow", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("ClientWindow", "\320\247\320\260\321\202", nullptr));
        connectButton->setText(QCoreApplication::translate("ClientWindow", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217 \320\272 \321\201\320\265\321\200\320\262\320\265\321\200\321\203", nullptr));
        nameSocket->setText(QString());
        label_2->setText(QCoreApplication::translate("ClientWindow", "\320\230\320\274\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientWindow: public Ui_ClientWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWINDOW_H
