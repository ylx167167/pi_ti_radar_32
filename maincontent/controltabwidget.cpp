﻿/*****************************************
 * 作者: YYC
 * 日期: 2020-04-26
 * 功能：界面右侧的TabWidget，显示当前已有的
 * 页面，与TreeWidget相对应
 * ***************************************/
#include "controltabwidget.h"
#include "ui_controltabwidget.h"
#include <QDateTime>

/******************   构造函数     *********************/
ControlTabWidget::ControlTabWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ControlTabWidget)
{
    ui->setupUi(this);
    this->initValue();

}

/******************   析构函数     *********************/
ControlTabWidget::~ControlTabWidget()
{
    delete ui;
}

/******************   初始化数据     *********************/
void ControlTabWidget::initValue()
{
    ui->tabWidgetControl->tabBar()->setHidden(true);

    QPalette palette;
    palette.setColor(QPalette::Background, QColor(30, 30, 30));
    ui->tabWidgetControl->setAutoFillBackground(true);
    ui->tabWidgetControl->setPalette(palette);
    ui->tabWidgetControl->tabBar()->setPalette(palette);

    {
        TabWidgetData tabWidgetData;
        tabWidgetData.currentWidget = ui->radar;
        tabWidgetData.currentTabText = ui->tabWidgetControl->tabText(TAB_MONITOR);
        mapTabWidget[TAB_MONITOR] = tabWidgetData;
    }
    {
        TabWidgetData tabWidgetData;
        tabWidgetData.currentWidget =  ui->banana;
        tabWidgetData.currentTabText = ui->tabWidgetControl->tabText(TAB_MAIN);
        mapTabWidget[TAB_MAIN] = tabWidgetData;
    }

    {
        TabWidgetData tabWidgetData;
        tabWidgetData.currentWidget = ui->tabTableWidget;
        tabWidgetData.currentTabText = ui->tabWidgetControl->tabText(TAB_SET);
        mapTabWidget[TAB_SET] = tabWidgetData;
    }

}

/******************   点击树形项显示对应Tab页     *********************/
void ControlTabWidget::receiveShowCurrentTab(WidgetTabType widgetTabType)
{

//        if(widgetTabType >= TAB_MAX) return;
    if(widgetTabType >= TAB_MAX) return;
    TabWidgetData tabWidgetData = mapTabWidget.value(widgetTabType);
    if (ui->tabWidgetControl->indexOf(tabWidgetData.currentWidget) < 0) {
        ui->tabWidgetControl->addTab(tabWidgetData.currentWidget, tabWidgetData.currentTabText);
    }
    ui->tabWidgetControl->setCurrentWidget(tabWidgetData.currentWidget);
}
