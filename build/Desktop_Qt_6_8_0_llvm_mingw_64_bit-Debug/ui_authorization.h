/********************************************************************************
** Form generated from reading UI file 'authorization.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHORIZATION_H
#define UI_AUTHORIZATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Authorization
{
public:
    QStackedWidget *stackedWidget;
    QWidget *authorizationPage;
    QLineEdit *loginEnterLineEdit;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *passwordEnterLineEdit;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *registrationPageButton;
    QPushButton *enterButton;
    QWidget *registrationPage;
    QLabel *label_5;
    QPushButton *registrationButton;
    QLineEdit *loginRegLineEdit;
    QLineEdit *passwordRegLineEdit;
    QLineEdit *confirmPasswordRegLineEdit;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QWidget *Authorization)
    {
        if (Authorization->objectName().isEmpty())
            Authorization->setObjectName("Authorization");
        Authorization->setWindowModality(Qt::WindowModality::ApplicationModal);
        Authorization->resize(779, 479);
        stackedWidget = new QStackedWidget(Authorization);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 771, 471));
        authorizationPage = new QWidget();
        authorizationPage->setObjectName("authorizationPage");
        loginEnterLineEdit = new QLineEdit(authorizationPage);
        loginEnterLineEdit->setObjectName("loginEnterLineEdit");
        loginEnterLineEdit->setGeometry(QRect(290, 190, 221, 21));
        label = new QLabel(authorizationPage);
        label->setObjectName("label");
        label->setGeometry(QRect(380, 160, 51, 20));
        label_2 = new QLabel(authorizationPage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(360, 30, 91, 20));
        passwordEnterLineEdit = new QLineEdit(authorizationPage);
        passwordEnterLineEdit->setObjectName("passwordEnterLineEdit");
        passwordEnterLineEdit->setGeometry(QRect(290, 260, 221, 21));
        label_3 = new QLabel(authorizationPage);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(380, 230, 61, 20));
        label_4 = new QLabel(authorizationPage);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 30, 221, 20));
        registrationPageButton = new QPushButton(authorizationPage);
        registrationPageButton->setObjectName("registrationPageButton");
        registrationPageButton->setGeometry(QRect(30, 80, 171, 61));
        enterButton = new QPushButton(authorizationPage);
        enterButton->setObjectName("enterButton");
        enterButton->setGeometry(QRect(340, 320, 121, 51));
        stackedWidget->addWidget(authorizationPage);
        registrationPage = new QWidget();
        registrationPage->setObjectName("registrationPage");
        label_5 = new QLabel(registrationPage);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(360, 30, 91, 20));
        registrationButton = new QPushButton(registrationPage);
        registrationButton->setObjectName("registrationButton");
        registrationButton->setGeometry(QRect(320, 370, 161, 51));
        loginRegLineEdit = new QLineEdit(registrationPage);
        loginRegLineEdit->setObjectName("loginRegLineEdit");
        loginRegLineEdit->setGeometry(QRect(292, 110, 231, 28));
        passwordRegLineEdit = new QLineEdit(registrationPage);
        passwordRegLineEdit->setObjectName("passwordRegLineEdit");
        passwordRegLineEdit->setGeometry(QRect(292, 180, 231, 28));
        confirmPasswordRegLineEdit = new QLineEdit(registrationPage);
        confirmPasswordRegLineEdit->setObjectName("confirmPasswordRegLineEdit");
        confirmPasswordRegLineEdit->setGeometry(QRect(292, 250, 231, 28));
        label_6 = new QLabel(registrationPage);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(380, 80, 63, 20));
        label_7 = new QLabel(registrationPage);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(380, 150, 63, 20));
        label_8 = new QLabel(registrationPage);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(320, 220, 181, 20));
        stackedWidget->addWidget(registrationPage);

        retranslateUi(Authorization);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Authorization);
    } // setupUi

    void retranslateUi(QWidget *Authorization)
    {
        Authorization->setWindowTitle(QCoreApplication::translate("Authorization", "Form", nullptr));
        label->setText(QCoreApplication::translate("Authorization", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_2->setText(QCoreApplication::translate("Authorization", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        passwordEnterLineEdit->setText(QString());
        label_3->setText(QCoreApplication::translate("Authorization", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_4->setText(QCoreApplication::translate("Authorization", "\320\225\321\201\320\273\320\270 \321\203 \320\262\320\260\321\201 \320\265\321\211\320\265 \320\275\320\265\321\202 \320\260\320\272\320\272\320\260\321\203\320\275\321\202\320\260", nullptr));
        registrationPageButton->setText(QCoreApplication::translate("Authorization", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        enterButton->setText(QCoreApplication::translate("Authorization", "\320\222\321\205\320\276\320\264", nullptr));
        label_5->setText(QCoreApplication::translate("Authorization", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        registrationButton->setText(QCoreApplication::translate("Authorization", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        label_6->setText(QCoreApplication::translate("Authorization", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_7->setText(QCoreApplication::translate("Authorization", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_8->setText(QCoreApplication::translate("Authorization", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\266\320\264\320\265\320\275\320\270\320\265 \320\277\320\260\321\200\320\276\320\273\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Authorization: public Ui_Authorization {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHORIZATION_H
