#include "server.h"

Server::Server()
{
    if(this->listen(QHostAddress::Any,2323))
    {
        qDebug() << "start";
    }
    else
    {
        qDebug() << "error";
    }
}
void Server::incomingConnection(qintptr socketDiscriptor)
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
        QString str;
        in >> str;
        Server::SendToClient(str);
    }
    else
    {
        qDebug() << "DataStream error";
    }
}
void Server::SendToClient(QString message){
    Data.clear();
    QDataStream out(&Data,QDataStream::WriteOnly);
    out.setVersion(QDataStream::Qt_6_8);
    out << message;
    //socket->write(Data);
    for(int i = 0;i < Sockets.size();i++)
    {
        Sockets[i]->write(Data);
    }
}
