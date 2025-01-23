#ifndef SERVER_H
#define SERVER_H
#include <QTcpServer>
#include <QTcpSocket>
#include <QVector>

class Server : public QTcpServer
{
    Q_OBJECT;

public:
    Server();
    QTcpSocket *socket;
private:
    QVector <QTcpSocket*> Sockets;
    QByteArray Data;
    void SendToClient(QString message);

public slots:
    void incomingConnection(qintptr socketDiscriptor);
    void ReadyToRead();
};

#endif // SERVER_H
