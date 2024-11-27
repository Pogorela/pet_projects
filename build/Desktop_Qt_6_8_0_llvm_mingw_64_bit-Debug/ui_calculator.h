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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QGridLayout *gridLayout;
    QLineEdit *InputOutputString;
    QPushButton *SevenButton;
    QPushButton *EightButton;
    QPushButton *NineButton;
    QPushButton *clearButton;
    QPushButton *FourButton;
    QPushButton *FiveButton;
    QPushButton *SixButton;
    QPushButton *PlusButton;
    QPushButton *MinusButton;
    QPushButton *OneButton;
    QPushButton *TwoButton;
    QPushButton *ThreeButton;
    QPushButton *DivisionButton;
    QPushButton *MultiplicatorButton;
    QPushButton *NullButton;
    QPushButton *EqualityButton;

    void setupUi(QWidget *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName("Calculator");
        Calculator->resize(1038, 760);
        QFont font;
        font.setFamilies({QString::fromUtf8("Gotham")});
        Calculator->setFont(font);
        gridLayout = new QGridLayout(Calculator);
        gridLayout->setObjectName("gridLayout");
        InputOutputString = new QLineEdit(Calculator);
        InputOutputString->setObjectName("InputOutputString");
        InputOutputString->setMinimumSize(QSize(0, 100));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Gotham")});
        font1.setPointSize(30);
        InputOutputString->setFont(font1);
        InputOutputString->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(InputOutputString, 0, 0, 1, 5);

        SevenButton = new QPushButton(Calculator);
        SevenButton->setObjectName("SevenButton");
        SevenButton->setFont(font1);

        gridLayout->addWidget(SevenButton, 1, 0, 1, 1);

        EightButton = new QPushButton(Calculator);
        EightButton->setObjectName("EightButton");
        EightButton->setFont(font1);

        gridLayout->addWidget(EightButton, 1, 1, 1, 1);

        NineButton = new QPushButton(Calculator);
        NineButton->setObjectName("NineButton");
        NineButton->setFont(font1);

        gridLayout->addWidget(NineButton, 1, 2, 1, 1);

        clearButton = new QPushButton(Calculator);
        clearButton->setObjectName("clearButton");
        clearButton->setFont(font1);

        gridLayout->addWidget(clearButton, 1, 3, 1, 2);

        FourButton = new QPushButton(Calculator);
        FourButton->setObjectName("FourButton");
        FourButton->setFont(font1);

        gridLayout->addWidget(FourButton, 2, 0, 1, 1);

        FiveButton = new QPushButton(Calculator);
        FiveButton->setObjectName("FiveButton");
        FiveButton->setFont(font1);

        gridLayout->addWidget(FiveButton, 2, 1, 1, 1);

        SixButton = new QPushButton(Calculator);
        SixButton->setObjectName("SixButton");
        SixButton->setFont(font1);

        gridLayout->addWidget(SixButton, 2, 2, 1, 1);

        PlusButton = new QPushButton(Calculator);
        PlusButton->setObjectName("PlusButton");
        PlusButton->setFont(font1);

        gridLayout->addWidget(PlusButton, 2, 3, 1, 1);

        MinusButton = new QPushButton(Calculator);
        MinusButton->setObjectName("MinusButton");
        MinusButton->setFont(font1);

        gridLayout->addWidget(MinusButton, 2, 4, 1, 1);

        OneButton = new QPushButton(Calculator);
        OneButton->setObjectName("OneButton");
        OneButton->setFont(font1);

        gridLayout->addWidget(OneButton, 3, 0, 1, 1);

        TwoButton = new QPushButton(Calculator);
        TwoButton->setObjectName("TwoButton");
        TwoButton->setFont(font1);

        gridLayout->addWidget(TwoButton, 3, 1, 1, 1);

        ThreeButton = new QPushButton(Calculator);
        ThreeButton->setObjectName("ThreeButton");
        ThreeButton->setFont(font1);

        gridLayout->addWidget(ThreeButton, 3, 2, 1, 1);

        DivisionButton = new QPushButton(Calculator);
        DivisionButton->setObjectName("DivisionButton");
        DivisionButton->setFont(font1);

        gridLayout->addWidget(DivisionButton, 3, 3, 1, 1);

        MultiplicatorButton = new QPushButton(Calculator);
        MultiplicatorButton->setObjectName("MultiplicatorButton");
        MultiplicatorButton->setFont(font1);

        gridLayout->addWidget(MultiplicatorButton, 3, 4, 1, 1);

        NullButton = new QPushButton(Calculator);
        NullButton->setObjectName("NullButton");
        NullButton->setFont(font1);

        gridLayout->addWidget(NullButton, 4, 1, 1, 1);

        EqualityButton = new QPushButton(Calculator);
        EqualityButton->setObjectName("EqualityButton");
        EqualityButton->setFont(font1);

        gridLayout->addWidget(EqualityButton, 4, 3, 1, 2);


        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QWidget *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Form", nullptr));
        SevenButton->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        EightButton->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        NineButton->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        clearButton->setText(QCoreApplication::translate("Calculator", "C", nullptr));
        FourButton->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        FiveButton->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        SixButton->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        PlusButton->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        MinusButton->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        OneButton->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        TwoButton->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        ThreeButton->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        DivisionButton->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        MultiplicatorButton->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        NullButton->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        EqualityButton->setText(QCoreApplication::translate("Calculator", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
