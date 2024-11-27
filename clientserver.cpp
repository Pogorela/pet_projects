#include "clientserver.h"
#include "ui_clientserver.h"

ClientServer::ClientServer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ClientServer)
{
    ui->setupUi(this);
}

ClientServer::~ClientServer()
{
    delete ui;
}
