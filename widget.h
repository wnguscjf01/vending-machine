#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    int money{0}, m500{0}, m100{0}, m50{0}, m10{0};
    char message[100]={0,};
    void changeMoney(int diff);
    void setButtonState();

private slots:
    void on_pbCoin10_clicked();
    void on_pbCoin50_clicked();
    void on_pbCoin100_clicked();
    void on_pbCoin500_clicked();

    void on_pbCoffee_clicked();
    void on_pbTea_clicked();
    void on_pbMilk_clicked();

    void on_pbReset_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
