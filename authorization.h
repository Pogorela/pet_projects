#ifndef AUTHORIZATION_H
#define AUTHORIZATION_H

#include <QWidget>
#include <QtSql/QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
class Authorization;
}

class Authorization : public QWidget
{
    Q_OBJECT

public:
    explicit Authorization(QWidget *parent = nullptr);
    ~Authorization();

private slots:
    void on_enterButton_clicked();
    void on_registrationPageButton_clicked();

    void on_registrationButton_clicked();


    void on_authorizationPageButton_clicked();


    void on_loginEnterLineEdit_returnPressed();

    void on_passwordEnterLineEdit_returnPressed();

signals:
    void setAuthorizated(bool isAuthorizated);


private:
    bool isAuthorizated = false;;
    Ui::Authorization *ui;
    QSqlDatabase db;
    QSqlQuery *query;

};

#endif // AUTHORIZATION_H
