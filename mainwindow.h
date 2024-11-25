#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "currencyconvert.h"
#include "calculator.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_currencyConvert_clicked();
    void on_Calculator_clicked();

private:
    Ui::MainWindow *ui;
    CurrencyConvert *CurrencyConvertWindow;
    Calculator *CalculatorWindow;

};
#endif // MAINWINDOW_H
