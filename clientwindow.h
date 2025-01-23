#ifndef CLIENTWINDOW_H
#define CLIENTWINDOW_H

#include <QWidget>
#include <QTcpSocket>
#include "server.h"

namespace Ui {
class ClientWindow;
}

class ClientWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ClientWindow(QWidget *parent = nullptr);
    ~ClientWindow();

private slots:
    void on_connectButton_clicked();

    void on_pushButton_clicked();

    void on_lineEdit_returnPressed();

private:
    Ui::ClientWindow *ui;
    QTcpSocket *socket;
    QByteArray Data;
    void SendToServer(QString message);
public slots:
    void readyToRead();
};

#endif // CLIENTWINDOW_H
