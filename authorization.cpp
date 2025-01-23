#include "authorization.h"
#include "ui_authorization.h"


Authorization::Authorization(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Authorization)
{
    ui->setupUi(this);
}

Authorization::~Authorization()
{
    delete ui;
}

void Authorization::on_enterButton_clicked()
{
    Authorization::~Authorization();
}

