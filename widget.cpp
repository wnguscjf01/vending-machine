#include "widget.h"
#include "ui_widget.h"
#include "QMessageBox"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->pbCoffee->setEnabled(false);
    ui->pbTea->setEnabled(false);
    ui->pbMilk->setEnabled(false);
}

Widget::~Widget()
{
    delete ui;
}
void Widget::changeMoney(int diff){
    money+=diff;
    setButtonState();
    ui->lcdNumber->display(money);
}
void Widget::setButtonState(){
    if(money>=100) ui->pbCoffee->setEnabled(true);
    else ui->pbCoffee->setEnabled(false);
    if(money>=150) ui->pbTea->setEnabled(true);
    else ui->pbTea->setEnabled(false);
    if(money>=200) ui->pbMilk->setEnabled(true);
    else ui->pbMilk->setEnabled(false);
}
void Widget::on_pbCoin10_clicked()
{
    changeMoney(10);
    ui->lcdNumber->display(money);
}
void Widget::on_pbCoin50_clicked()
{
    changeMoney(50);
    ui->lcdNumber->display(money);
}
void Widget::on_pbCoin100_clicked()
{
    changeMoney(100);
    ui->lcdNumber->display(money);
}
void Widget::on_pbCoin500_clicked()
{
    changeMoney(500);
    ui->lcdNumber->display(money);
}
void Widget::on_pbCoffee_clicked()
{
    changeMoney(-100);
    ui->lcdNumber->display(money);
}
void Widget::on_pbTea_clicked()
{
    changeMoney(-150);
    ui->lcdNumber->display(money);
}
void Widget::on_pbMilk_clicked()
{
    changeMoney(-200);
    ui->lcdNumber->display(money);
}
void Widget::on_pbReset_clicked()
{
    m500 = money/500;
    money %= 500;
    m100 = money/100;
    money %= 100;
    m50 = money/50;
    money %= 50;
    m10 = money/10;

    sprintf(message,"500원 %d개, 100원 %d개, 50원 %d개, 10원 %d개",m500,m100,m50,m10);
    changeMoney(-money);
    QMessageBox mb;
    mb.information(this,"take out",message);
}









