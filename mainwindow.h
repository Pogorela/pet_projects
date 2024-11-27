#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "currencyconvert.h"
#include "calculator.h"
#include "server.h"

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
    void on_ClientServer_clicked();

private:
    Ui::MainWindow *ui;
    CurrencyConvert *CurrencyConvertWindow;
    Calculator *CalculatorWindow;
    Server *server;

};
#endif // MAINWINDOW_H
