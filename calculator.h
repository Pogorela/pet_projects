#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QWidget>

namespace Ui {
class Calculator;
}

class Calculator : public QWidget
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = nullptr);
    ~Calculator();

private slots:
    void on_NullButton_clicked();
    void on_OneButton_clicked();
    void on_TwoButton_clicked();
    void on_ThreeButton_clicked();
    void on_FourButton_clicked();
    void on_FiveButton_clicked();
    void on_SixButton_clicked();
    void on_SevenButton_clicked();
    void on_EightButton_clicked();
    void on_NineButton_clicked();
    void on_PlusButton_clicked();
    void on_MinusButton_clicked();
    void on_EqualityButton_clicked();
    void on_DivisionButton_clicked();
    void on_MultiplicatorButton_clicked();
    void on_clearButton_clicked();
    void on_InputOutputString_textEdited(const QString &arg1);

private:
    void ErrorMessage();
    void clearMessage();
    QWidget errorWindow;
    Ui::Calculator *ui;
    int Buffer;
    QString Value;
    int operation; // operation (1 - Plus,2 - Minus,3 - )
};

#endif // CALCULATOR_H
