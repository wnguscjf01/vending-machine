/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLCDNumber *lcdNumber;
    QPushButton *pbCoin10;
    QPushButton *pbCoin50;
    QPushButton *pbCoffee;
    QPushButton *pbTea;
    QPushButton *pbMilk;
    QPushButton *pbReset;
    QPushButton *pbCoin100;
    QPushButton *pbCoin500;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        lcdNumber = new QLCDNumber(Widget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(10, 10, 161, 51));
        lcdNumber->setDigitCount(10);
        pbCoin10 = new QPushButton(Widget);
        pbCoin10->setObjectName("pbCoin10");
        pbCoin10->setGeometry(QRect(10, 70, 89, 25));
        pbCoin50 = new QPushButton(Widget);
        pbCoin50->setObjectName("pbCoin50");
        pbCoin50->setGeometry(QRect(10, 110, 89, 25));
        pbCoffee = new QPushButton(Widget);
        pbCoffee->setObjectName("pbCoffee");
        pbCoffee->setGeometry(QRect(120, 70, 131, 25));
        pbTea = new QPushButton(Widget);
        pbTea->setObjectName("pbTea");
        pbTea->setGeometry(QRect(120, 110, 131, 25));
        pbMilk = new QPushButton(Widget);
        pbMilk->setObjectName("pbMilk");
        pbMilk->setGeometry(QRect(120, 150, 131, 25));
        pbReset = new QPushButton(Widget);
        pbReset->setObjectName("pbReset");
        pbReset->setGeometry(QRect(120, 190, 89, 25));
        pbCoin100 = new QPushButton(Widget);
        pbCoin100->setObjectName("pbCoin100");
        pbCoin100->setGeometry(QRect(10, 150, 89, 25));
        pbCoin500 = new QPushButton(Widget);
        pbCoin500->setObjectName("pbCoin500");
        pbCoin500->setGeometry(QRect(10, 190, 89, 25));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pbCoin10->setText(QCoreApplication::translate("Widget", "10", nullptr));
        pbCoin50->setText(QCoreApplication::translate("Widget", "50", nullptr));
        pbCoffee->setText(QCoreApplication::translate("Widget", "Coffee(100)", nullptr));
        pbTea->setText(QCoreApplication::translate("Widget", "Tee(150)", nullptr));
        pbMilk->setText(QCoreApplication::translate("Widget", "Milk(200)", nullptr));
        pbReset->setText(QCoreApplication::translate("Widget", "Reset", nullptr));
        pbCoin100->setText(QCoreApplication::translate("Widget", "100", nullptr));
        pbCoin500->setText(QCoreApplication::translate("Widget", "500", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
