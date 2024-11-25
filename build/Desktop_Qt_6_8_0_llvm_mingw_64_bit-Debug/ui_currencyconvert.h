/********************************************************************************
** Form generated from reading UI file 'currencyconvert.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURRENCYCONVERT_H
#define UI_CURRENCYCONVERT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CurrencyConvert
{
public:
    QComboBox *FromCurrencyComboBox;
    QLabel *FromCurrencyLabel;
    QLabel *InCurrencyLabel;
    QComboBox *InCurrencyComboBox;
    QLineEdit *FromCurrency;
    QLineEdit *InCurrency;
    QLabel *Equally;

    void setupUi(QWidget *CurrencyConvert)
    {
        if (CurrencyConvert->objectName().isEmpty())
            CurrencyConvert->setObjectName("CurrencyConvert");
        CurrencyConvert->resize(769, 564);
        FromCurrencyComboBox = new QComboBox(CurrencyConvert);
        FromCurrencyComboBox->addItem(QString());
        FromCurrencyComboBox->addItem(QString());
        FromCurrencyComboBox->addItem(QString());
        FromCurrencyComboBox->setObjectName("FromCurrencyComboBox");
        FromCurrencyComboBox->setGeometry(QRect(100, 110, 151, 51));
        FromCurrencyLabel = new QLabel(CurrencyConvert);
        FromCurrencyLabel->setObjectName("FromCurrencyLabel");
        FromCurrencyLabel->setGeometry(QRect(100, 80, 141, 21));
        FromCurrencyLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        InCurrencyLabel = new QLabel(CurrencyConvert);
        InCurrencyLabel->setObjectName("InCurrencyLabel");
        InCurrencyLabel->setGeometry(QRect(500, 80, 141, 21));
        InCurrencyLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        InCurrencyComboBox = new QComboBox(CurrencyConvert);
        InCurrencyComboBox->addItem(QString());
        InCurrencyComboBox->addItem(QString());
        InCurrencyComboBox->addItem(QString());
        InCurrencyComboBox->setObjectName("InCurrencyComboBox");
        InCurrencyComboBox->setGeometry(QRect(500, 110, 151, 51));
        FromCurrency = new QLineEdit(CurrencyConvert);
        FromCurrency->setObjectName("FromCurrency");
        FromCurrency->setGeometry(QRect(200, 330, 113, 28));
        InCurrency = new QLineEdit(CurrencyConvert);
        InCurrency->setObjectName("InCurrency");
        InCurrency->setGeometry(QRect(430, 330, 113, 28));
        InCurrency->setReadOnly(true);
        Equally = new QLabel(CurrencyConvert);
        Equally->setObjectName("Equally");
        Equally->setGeometry(QRect(340, 330, 63, 20));
        QFont font;
        font.setPointSize(14);
        Equally->setFont(font);
        Equally->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(CurrencyConvert);

        QMetaObject::connectSlotsByName(CurrencyConvert);
    } // setupUi

    void retranslateUi(QWidget *CurrencyConvert)
    {
        CurrencyConvert->setWindowTitle(QCoreApplication::translate("CurrencyConvert", "Currency converter", nullptr));
        FromCurrencyComboBox->setItemText(0, QCoreApplication::translate("CurrencyConvert", "RUB", nullptr));
        FromCurrencyComboBox->setItemText(1, QCoreApplication::translate("CurrencyConvert", "USD", nullptr));
        FromCurrencyComboBox->setItemText(2, QCoreApplication::translate("CurrencyConvert", "CNY", nullptr));

        FromCurrencyLabel->setText(QCoreApplication::translate("CurrencyConvert", "\320\230\320\267 \320\272\320\260\320\272\320\276\320\271 \320\262\320\260\320\273\321\216\321\202\321\213", nullptr));
        InCurrencyLabel->setText(QCoreApplication::translate("CurrencyConvert", "\320\222 \320\272\320\260\320\272\321\203\321\216", nullptr));
        InCurrencyComboBox->setItemText(0, QCoreApplication::translate("CurrencyConvert", "USD", nullptr));
        InCurrencyComboBox->setItemText(1, QCoreApplication::translate("CurrencyConvert", "RUB", nullptr));
        InCurrencyComboBox->setItemText(2, QCoreApplication::translate("CurrencyConvert", "CNY", nullptr));

        Equally->setText(QCoreApplication::translate("CurrencyConvert", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CurrencyConvert: public Ui_CurrencyConvert {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURRENCYCONVERT_H
