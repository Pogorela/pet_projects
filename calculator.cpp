#include "calculator.h"
#include "ui_calculator.h"
#include <QWidget>

Calculator::Calculator(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Calculator)
{

    Buffer = 0;
    operation = 0;
    ui->setupUi(this);
    ui->InputOutputString->setText("");
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::clearMessage()
{
    if(Calculator::Buffer > 0)
    {
        ui->clearButton->setText("CE");
    }
}
void Calculator::ErrorMessage(){
    errorWindow.resize(300,200);
    errorWindow.setWindowTitle("Error");
    errorWindow.show();
}

void Calculator::on_InputOutputString_textEdited(const QString &arg1){
    Calculator::Value = QString::number(arg1.toInt());
    ui->InputOutputString->setText(Calculator::Value);
}

void Calculator::on_clearButton_clicked()
{
    if (ui->clearButton->text() == "CE")
    {
        Calculator::Value = "";
        ui->clearButton->setText("C");
        ui->InputOutputString->setText("");
    }
    else
    {
        Calculator::Value = "";
        Calculator::Buffer = 0;
        ui->InputOutputString->setText("");
    }
}

void Calculator::on_PlusButton_clicked(){
    ui->clearButton->setText("C");
    Calculator::Value = QString::number(Calculator::Value.toInt());
    Calculator::Buffer += Calculator::Value.toInt();
    Calculator::Value = "";
    Calculator::operation = 1;
    ui->InputOutputString->setText(QString::number(Calculator::Buffer));

}

void Calculator::on_MinusButton_clicked(){
    ui->clearButton->setText("C");
    Calculator::Value = QString::number(Calculator::Value.toInt());
    if(Calculator::operation == 0){
        Calculator::Buffer += Calculator::Value.toInt();
    }
    else{
        Calculator::Buffer -= Calculator::Value.toInt();
    }
    Calculator::Value = "";
    Calculator::operation = 2;
    ui->InputOutputString->setText(QString::number(Calculator::Buffer));
}
void Calculator::on_DivisionButton_clicked(){
    ui->clearButton->setText("C");
    Calculator::Value = QString::number(Calculator::Value.toInt());
    if(Calculator::operation == 0){
        Calculator::Buffer += Calculator::Value.toInt();
    }
    else if (Calculator::operation == 5){
        Calculator::operation = 3;
        Calculator::Value = "";
        return;
    }
    else{
        if (Calculator::Value.toInt() == 0 && Calculator::Value.size() > 0){
            ErrorMessage();
        }
        else{
            Calculator::Buffer /= Calculator::Value.toInt();
        }
    }
    Calculator::Value = "";
    Calculator::operation = 3;
    ui->InputOutputString->setText(QString::number(Calculator::Buffer));

}
void Calculator::on_MultiplicatorButton_clicked(){
    ui->clearButton->setText("C");
    Calculator::Value = QString::number(Calculator::Value.toInt());
    if (Calculator::operation == 0){
        Calculator::Buffer += Calculator::Value.toInt();
    }
    else{
        Calculator::Buffer *= Calculator::Value.toInt();
    }
    Calculator::Value = "";
    Calculator::operation = 4;
    ui->InputOutputString->setText(QString::number(Calculator::Buffer));
}
void Calculator::on_EqualityButton_clicked(){
    Calculator::Value = QString::number(Calculator::Value.toInt());
    switch (Calculator::operation){
    case 1:
        Calculator::Buffer += Calculator::Value.toInt();
        Calculator::Value = "";
        break;
    case 2:
        Calculator::Buffer -= Calculator::Value.toInt();
        Calculator::Value = "";
        break;
    case 3:
        if(Calculator::Value.toInt() == 0){
            ErrorMessage();
            break;
        }
        Calculator::Buffer /= Calculator::Value.toDouble();
        Calculator::Value = "";
        break;
    case 4:
        Calculator::Buffer *= Calculator::Value.toInt();
        Calculator::Value = "";
        break;
    }
    Calculator::operation = operation = 5;
    ui->clearButton->setText("C");
    ui->InputOutputString->setText(QString::number(Calculator::Buffer));
}

void Calculator::on_NullButton_clicked(){
    clearMessage();
    Calculator::Value += "0";
    ui->InputOutputString->setText(Calculator::Value);

}
void Calculator::on_OneButton_clicked(){
    clearMessage();
    Calculator::Value += "1";
    ui->InputOutputString->setText(Calculator::Value);


}
void Calculator::on_TwoButton_clicked(){
    clearMessage();
    Calculator::Value += "2";
    ui->InputOutputString->setText(Calculator::Value);

}
void Calculator::on_ThreeButton_clicked(){
    clearMessage();
    Calculator::Value += "3";
    ui->InputOutputString->setText(Calculator::Value);

}
void Calculator::on_FourButton_clicked(){
    clearMessage();
    Calculator::Value += "4";
    ui->InputOutputString->setText(Calculator::Value);

}
void Calculator::on_FiveButton_clicked(){
    clearMessage();
    Calculator::Value += "5";
    ui->InputOutputString->setText(Calculator::Value);
}
void Calculator::on_SixButton_clicked(){
    clearMessage();
    Calculator::Value += "6";
    ui->InputOutputString->setText(Calculator::Value);

}
void Calculator::on_SevenButton_clicked(){
    clearMessage();
    Calculator::Value += "7";
    ui->InputOutputString->setText(Calculator::Value);

}
void Calculator::on_EightButton_clicked(){
    clearMessage();
        Calculator::Value += "8";
        ui->InputOutputString->setText(Calculator::Value);
}
void Calculator::on_NineButton_clicked(){
    clearMessage();
    Calculator::Value += "9";
    ui->InputOutputString->setText(Calculator::Value);
}


