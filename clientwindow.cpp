#include "clientwindow.h"
#include "ui_clientwindow.h"
#include "QMessageBox"

ClientWindow::ClientWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ClientWindow)
{
    ui->setupUi(this);
    socket = new QTcpSocket(this);
    connect(socket, &QTcpSocket::readyRead, this, &ClientWindow::readyToRead);
    connect(socket, &QTcpSocket::disconnected, socket, &QTcpSocket::deleteLater);
}

ClientWindow::~ClientWindow()
{
    delete ui;
}

void ClientWindow::on_connectButton_clicked()
{
    if (ui->nameSocket->text() == "")
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Ошибка","Сначало введите имя");
        messageBox.setFixedSize(500,200);
    }
    else{
        socket->connectToHost("127.0.0.1",2323);
        qDebug() << (socket->state());
    }
}

void ClientWindow::readyToRead()
{
    QDataStream in(socket);
    in.setVersion(QDataStream::Qt_6_8);
    if(in.status() == QDataStream::Ok)
    {
        QString str;
        in >> str;
        ui->textBrowser->append(str);
    }
    else
    {
        ui->textBrowser->append("read error...");
    }
}
void ClientWindow::SendToServer(QString message){
    Data.clear();
    QDataStream out(&Data,QDataStream::WriteOnly);
    out.setVersion(QDataStream::Qt_6_8);
    out << ui->nameSocket->text() + ": " + message;
    socket->write(Data);
}


void ClientWindow::on_pushButton_clicked()
{
    SendToServer(ui->lineEdit->text());
}


void ClientWindow::on_lineEdit_returnPressed()
{
    SendToServer(ui->lineEdit->text());
}

