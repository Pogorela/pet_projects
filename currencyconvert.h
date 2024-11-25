#ifndef CURRENCYCONVERT_H
#define CURRENCYCONVERT_H
#define RUB_TO_USD   0.009932
#define RUB_TO_CYN = 0.072035
#define USD_TO_RUB = 100.68
#define USD_TO_CYN = 7.24
#define CYN_TO_USD = 0.13815
#define CYN_TO_RUB = 13.88


#include <QWidget>

namespace Ui {
class CurrencyConvert;
}

class CurrencyConvert : public QWidget
{
    Q_OBJECT

public:
    explicit CurrencyConvert(QWidget *parent = nullptr);
    ~CurrencyConvert();

private slots:
    void on_FromCurrency_textChanged(const QString &arg1);

    void on_FromCurrencyComboBox_activated(int index);

    void on_InCurrencyComboBox_activated(int index);

private:
    Ui::CurrencyConvert *ui;
    double Value;
    QVector<QVector<double>> coefficients =
    {
        {0.009932, 1.0, 0.072035}, // Коэффициент домножения для конветации RUB -> USD, RUB, CYN (Согласно 2-му InCurrencyComboBox)
        {1.0, 100.68, 7.24},       // Коэффициент домножения для конветации USD -> USD, RUB, CYN (Согласно 2-му InCurrencyComboBox)
        {0.13815, 13.88, 1.0},     // Коэффициент домножения для конветации CYN -> USD, RUB, CYN (Согласно 2-му InCurrencyComboBox)
    };

    double ConvertValue;
    int FromCurrencyComboBoxIndex = 0;
    int InCurrencyComboBoxIndex = 0;
};

#endif // CURRENCYCONVERT_H
