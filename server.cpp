#include "server.h"

Server::Server()
{
    if(this->listen(QHostAddress::Any,1905))
    {
        qDebug() << "start";
    }
    else
    {
        qDebug() << "error";
    }
}
void Server::incommingConnecting(qintptr socketDiscriptor)
{
    socket = new QTcpSocket;
    socket->setSocketDescriptor(socketDiscriptor);
    connect(socket,&QTcpSocket::readyRead,this,&Server::ReadyToRead);
    connect(socket,&QTcpSocket::disconnected,socket,&QTcpSocket::deleteLater);

    Sockets.push_back(socket);
    qDebug() << "client connected" << socketDiscriptor;
}
void Server::ReadyToRead()
{
    socket = (QTcpSocket*)sender();
    QDataStream in(socket);
    in.setVersion(QDataStream::Qt_6_8);
    if(in.status() == QDataStream::Ok)
    {
        qDebug() << "read...";
    }
    else
    {
        qDebug() << "DataStream error";
    }
}
