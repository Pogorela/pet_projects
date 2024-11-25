/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QLineEdit *InputOutputString;
    QPushButton *SevenButton;
    QPushButton *EightButton;
    QPushButton *NineButton;
    QPushButton *FourButton;
    QPushButton *FiveButton;
    QPushButton *SixButton;
    QPushButton *OneButton;
    QPushButton *TwoButton;
    QPushButton *ThreeButton;
    QPushButton *NullButton;
    QPushButton *PlusButton;
    QPushButton *DivisionButton;
    QPushButton *MinusButton;
    QPushButton *MultiplicatorButton;
    QPushButton *EqualityButton;
    QPushButton *clearButton;

    void setupUi(QWidget *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName("Calculator");
        Calculator->resize(968, 679);
        QFont font;
        font.setFamilies({QString::fromUtf8("Gotham")});
        Calculator->setFont(font);
        InputOutputString = new QLineEdit(Calculator);
        InputOutputString->setObjectName("InputOutputString");
        InputOutputString->setGeometry(QRect(50, 80, 841, 111));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Gotham")});
        font1.setPointSize(30);
        InputOutputString->setFont(font1);
        InputOutputString->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        SevenButton = new QPushButton(Calculator);
        SevenButton->setObjectName("SevenButton");
        SevenButton->setGeometry(QRect(60, 230, 101, 81));
        SevenButton->setFont(font1);
        EightButton = new QPushButton(Calculator);
        EightButton->setObjectName("EightButton");
        EightButton->setGeometry(QRect(210, 230, 101, 81));
        EightButton->setFont(font1);
        NineButton = new QPushButton(Calculator);
        NineButton->setObjectName("NineButton");
        NineButton->setGeometry(QRect(360, 230, 101, 81));
        NineButton->setFont(font1);
        FourButton = new QPushButton(Calculator);
        FourButton->setObjectName("FourButton");
        FourButton->setGeometry(QRect(60, 340, 101, 81));
        FourButton->setFont(font1);
        FiveButton = new QPushButton(Calculator);
        FiveButton->setObjectName("FiveButton");
        FiveButton->setGeometry(QRect(210, 340, 101, 81));
        FiveButton->setFont(font1);
        SixButton = new QPushButton(Calculator);
        SixButton->setObjectName("SixButton");
        SixButton->setGeometry(QRect(360, 340, 101, 81));
        SixButton->setFont(font1);
        OneButton = new QPushButton(Calculator);
        OneButton->setObjectName("OneButton");
        OneButton->setGeometry(QRect(60, 450, 101, 81));
        OneButton->setFont(font1);
        TwoButton = new QPushButton(Calculator);
        TwoButton->setObjectName("TwoButton");
        TwoButton->setGeometry(QRect(210, 450, 101, 81));
        TwoButton->setFont(font1);
        ThreeButton = new QPushButton(Calculator);
        ThreeButton->setObjectName("ThreeButton");
        ThreeButton->setGeometry(QRect(360, 450, 101, 81));
        ThreeButton->setFont(font1);
        NullButton = new QPushButton(Calculator);
        NullButton->setObjectName("NullButton");
        NullButton->setGeometry(QRect(210, 560, 101, 81));
        NullButton->setFont(font1);
        PlusButton = new QPushButton(Calculator);
        PlusButton->setObjectName("PlusButton");
        PlusButton->setGeometry(QRect(660, 330, 81, 81));
        PlusButton->setFont(font1);
        DivisionButton = new QPushButton(Calculator);
        DivisionButton->setObjectName("DivisionButton");
        DivisionButton->setGeometry(QRect(660, 450, 81, 81));
        DivisionButton->setFont(font1);
        MinusButton = new QPushButton(Calculator);
        MinusButton->setObjectName("MinusButton");
        MinusButton->setGeometry(QRect(800, 330, 81, 81));
        MinusButton->setFont(font1);
        MultiplicatorButton = new QPushButton(Calculator);
        MultiplicatorButton->setObjectName("MultiplicatorButton");
        MultiplicatorButton->setGeometry(QRect(800, 450, 81, 81));
        MultiplicatorButton->setFont(font1);
        EqualityButton = new QPushButton(Calculator);
        EqualityButton->setObjectName("EqualityButton");
        EqualityButton->setGeometry(QRect(730, 560, 81, 81));
        EqualityButton->setFont(font1);
        clearButton = new QPushButton(Calculator);
        clearButton->setObjectName("clearButton");
        clearButton->setGeometry(QRect(730, 220, 81, 81));
        clearButton->setFont(font1);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QWidget *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Form", nullptr));
        SevenButton->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        EightButton->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        NineButton->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        FourButton->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        FiveButton->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        SixButton->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        OneButton->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        TwoButton->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        ThreeButton->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        NullButton->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        PlusButton->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        DivisionButton->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        MinusButton->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        MultiplicatorButton->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        EqualityButton->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        clearButton->setText(QCoreApplication::translate("Calculator", "C", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
