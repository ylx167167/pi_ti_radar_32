/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <maincontent/controltabwidget.h>
#include <maincontent/controltreewidget.h>
#include <titlebar/maintitlebar.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    MainTitleBar *widgetTitle;
    QHBoxLayout *horizontalLayout;
    ControlTreeWidget *widgetTree;
    ControlTabWidget *widgetTab;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1630, 830);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget,QFrame\n"
"{\n"
"background-color: #ffffff;\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widgetTitle = new MainTitleBar(centralWidget);
        widgetTitle->setObjectName(QString::fromUtf8("widgetTitle"));
        widgetTitle->setMinimumSize(QSize(0, 50));
        widgetTitle->setMaximumSize(QSize(16777215, 50));
        widgetTitle->setStyleSheet(QString::fromUtf8("QWidget,QFrame\n"
"{\n"
"background-color: #1A1A1A;\n"
"}"));

        verticalLayout->addWidget(widgetTitle);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        widgetTree = new ControlTreeWidget(centralWidget);
        widgetTree->setObjectName(QString::fromUtf8("widgetTree"));
        widgetTree->setEnabled(true);
        widgetTree->setMinimumSize(QSize(240, 0));
        widgetTree->setMaximumSize(QSize(240, 16777215));
        widgetTree->setStyleSheet(QString::fromUtf8("QWidget,QFrame\n"
"{\n"
"background-color: #1A1A1A;\n"
"}"));

        horizontalLayout->addWidget(widgetTree);

        widgetTab = new ControlTabWidget(centralWidget);
        widgetTab->setObjectName(QString::fromUtf8("widgetTab"));
        widgetTab->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(widgetTab);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setStyleSheet(QString::fromUtf8("QWidget,QFrame\n"
"{\n"
"background-color: #1A1A1A;\n"
"}"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
