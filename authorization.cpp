#include "authorization.h"
#include "ui_authorization.h"
#include "QMessageBox"


Authorization::Authorization(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Authorization)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_DeleteOnClose);
    ui->registrationPage->close();
    ui->authorizationPage->show();

    isAuthorizated = false;

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./userDB.db");
    if (db.open())
    {
        qDebug("open");
    }

    query = new QSqlQuery(db);
    query->exec("CREATE TABLE IF NOT EXISTS UserData(Login TEXT PRIMARY KEY, Password TEXT);");

}

Authorization::~Authorization()
{
    setAuthorizated(isAuthorizated);
    delete ui;
}

void Authorization::on_enterButton_clicked()
{
    if (ui->loginEnterLineEdit->text() != "" && ui->passwordEnterLineEdit->text() != "")
    {
        isAuthorizated = true;
        close();
    }
    else
    {
        QMessageBox errorMessageBox;
        errorMessageBox.setFixedSize(500,200);
        errorMessageBox.critical(0,"Error","Пожалуйста, авторизируйтесь");
    }

}

void Authorization::on_registrationPageButton_clicked()
{
    ui->authorizationPage->close();
    ui->registrationPage->show();
}




void Authorization::on_registrationButton_clicked()
{
    if(ui->loginRegLineEdit->text() != "" && ui->passwordRegLineEdit->text() != "" && ui->confirmPasswordRegLineEdit->text() != "")
    {
        query->exec(QString("SELECT Login,Password FROM UserData WHERE Login='%1';").arg(ui->loginRegLineEdit->text()));
        query->next();
        if (query->value(0).toString() == "")
        {
            if (ui->passwordRegLineEdit->text() == ui->confirmPasswordRegLineEdit->text())
            {
                query->exec(QString("INSERT INTO UserData (Login,Password) VALUES ('%1','%2');").arg(ui->loginRegLineEdit->text(),ui->passwordRegLineEdit->text()));
                QMessageBox regMessageBox;
                regMessageBox.setFixedSize(500,200);
                regMessageBox.information(0,"Вы зарегистрированы!","Поздравляю, вы зарегистрировали аккаунт!");
            }
            else
            {
                QMessageBox errorMessageBox;
                errorMessageBox.setFixedSize(500,200);
                errorMessageBox.critical(0,"Error","Пароли не совпадают!");
            }
        }
        else
        {
            QMessageBox errorMessageBox;
            errorMessageBox.setFixedSize(500,200);
            errorMessageBox.critical(0,"Error","Такой логин уже используется!");
        }
    }
    else
    {
        QMessageBox errorMessageBox;
        errorMessageBox.setFixedSize(500,200);
        errorMessageBox.critical(0,"Error","Проверьте, заполнены ли все поля!");
    }
}


void Authorization::on_authorizationPageButton_clicked()
{
    ui->registrationPage->close();
    ui->authorizationPage->show();
}

