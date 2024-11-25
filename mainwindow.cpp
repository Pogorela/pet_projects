#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_currencyConvert_clicked()
{
    CurrencyConvertWindow = new CurrencyConvert();
    CurrencyConvertWindow->show();
}
void MainWindow::on_Calculator_clicked(){
    CalculatorWindow = new Calculator();
    CalculatorWindow->show();
}

