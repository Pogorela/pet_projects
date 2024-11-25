#include "currencyconvert.h"
#include "ui_currencyconvert.h"

CurrencyConvert::CurrencyConvert(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CurrencyConvert)
{
    ui->setupUi(this);
}

CurrencyConvert::~CurrencyConvert()
{
    delete ui;
}


void CurrencyConvert::on_FromCurrency_textChanged(const QString &arg1)
{
    if(arg1.toDouble())
    {
    CurrencyConvert::Value = arg1.toDouble();
    CurrencyConvert::ConvertValue = Value*(CurrencyConvert::coefficients[CurrencyConvert::FromCurrencyComboBoxIndex][CurrencyConvert::InCurrencyComboBoxIndex]);
    ui->InCurrency->setText(QString::number(CurrencyConvert::ConvertValue));
    }
    else
    {
        ui->InCurrency->setText("");
    }
}

void CurrencyConvert::on_FromCurrencyComboBox_activated(int index)
{
    CurrencyConvert::FromCurrencyComboBoxIndex = index;
    CurrencyConvert::ConvertValue = CurrencyConvert::Value*(CurrencyConvert::coefficients[CurrencyConvert::FromCurrencyComboBoxIndex][CurrencyConvert::InCurrencyComboBoxIndex]);
    if(CurrencyConvert::ConvertValue)
    {
        ui->InCurrency->setText(QString::number(CurrencyConvert::ConvertValue));
    }
}


void CurrencyConvert::on_InCurrencyComboBox_activated(int index)
{
    CurrencyConvert::InCurrencyComboBoxIndex = index;
    CurrencyConvert::ConvertValue = CurrencyConvert::Value*(CurrencyConvert::coefficients[CurrencyConvert::FromCurrencyComboBoxIndex][CurrencyConvert::InCurrencyComboBoxIndex]);
    if(CurrencyConvert::ConvertValue)
    {
        ui->InCurrency->setText(QString::number(CurrencyConvert::ConvertValue));
    }
}


