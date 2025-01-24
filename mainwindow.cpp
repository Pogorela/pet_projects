#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    AuthorizationWindow = new Authorization();
    AuthorizationWindow->show();

    connect(AuthorizationWindow,&Authorization::setAuthorizated,this,&MainWindow::setAuthorizated);
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
void MainWindow::on_ClientServer_clicked()
{
    client = new ClientWindow();
    client->show();
}
void MainWindow::setAuthorizated(bool isAuthorizated)
{
    if (isAuthorizated == false)
    {
        close();
    }
}
