/*****************************************
 * 作者: YYC
 * 日期: 2021-01-07
 * 功能：初始化类
 * ***************************************/
#include "mainobject.h"
#include "mainwindow.h"
#include "splashscreen.h"
#include <QDebug>


MainObject::MainObject(QObject *parent) :
    QObject(parent)
{
}

MainObject::~MainObject()
{
    delete m_mainWindow;
}

void MainObject::setInit()
{
    SplashScreen::getInstance()->setStagePercent(0,tr("欢迎进入Wayneyao车内生命体征监测系统 初始化请稍等..."));
    m_mainWindow = new MainWindow(nullptr);
    m_mainWindow->setWindowTitle(tr("Wayneyao"));
//    SplashScreen::getInstance()->setStart(m_mainWindow, tr("Wayneyao"), QString(":/res/res/image/image.png"));
    SplashScreen::getInstance()->setStagePercent(40, tr("欢迎进入Wayneyao车内生命体征监测系统 初始化主界面 ..."));
    SplashScreen::getInstance()->setStagePercent(80, tr("欢迎进入Wayneyao车内生命体征监测系统 加载界面 ..."));
    SplashScreen::getInstance()->setStagePercent(100, tr("欢迎进入Wayneyao车内生命体征监测系统 加载完毕！"));
    SplashScreen::getInstance()->setFinish();

    m_mainWindow->showNormal();
}


