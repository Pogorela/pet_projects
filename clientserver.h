#ifndef CLIENTSERVER_H
#define CLIENTSERVER_H

#include <QWidget>

namespace Ui {
class ClientServer;
}

class ClientServer : public QWidget
{
    Q_OBJECT

public:
    explicit ClientServer(QWidget *parent = nullptr);
    ~ClientServer();

private:
    Ui::ClientServer *ui;
};

#endif // CLIENTSERVER_H
