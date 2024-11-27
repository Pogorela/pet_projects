/********************************************************************************
** Form generated from reading UI file 'clientserver.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTSERVER_H
#define UI_CLIENTSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientServer
{
public:

    void setupUi(QWidget *ClientServer)
    {
        if (ClientServer->objectName().isEmpty())
            ClientServer->setObjectName("ClientServer");
        ClientServer->resize(581, 439);

        retranslateUi(ClientServer);

        QMetaObject::connectSlotsByName(ClientServer);
    } // setupUi

    void retranslateUi(QWidget *ClientServer)
    {
        ClientServer->setWindowTitle(QCoreApplication::translate("ClientServer", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientServer: public Ui_ClientServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTSERVER_H
