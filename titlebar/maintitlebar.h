/*****************************************
 * 作者: YYC
 * 日期: 2020-04-26
 * 功能：主标题栏，内含有窗体最大化，最小化，关闭
 * 以及窗口的Title，以及名称
 * ***************************************/
#ifndef MAINTITLEBAR_H
#define MAINTITLEBAR_H

#include <QWidget>
#include "titlebar/titlebar.h"
#include <QTimer>

namespace Ui {
class MainTitleBar;
}

class MainTitleBar : public TitleBar
{
    Q_OBJECT

public:
    explicit MainTitleBar(QWidget *parent = 0);
    ~MainTitleBar();

private slots:
    void on_pushButtonClose_clicked();
    void on_pushButtonMin_clicked();
    void on_pushButtonNormalMax_clicked();
    void qtimeSlot();

private:
    Ui::MainTitleBar *ui;
    QTimer *timer;

};

#endif // MAINTITLEBAR_H
