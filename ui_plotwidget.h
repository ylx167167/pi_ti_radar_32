/********************************************************************************
** Form generated from reading UI file 'plotwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOTWIDGET_H
#define UI_PLOTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>
#include "maincontent/controlwidget/plotcontrol/plotcontrol.h"

QT_BEGIN_NAMESPACE

class Ui_PlotWidget
{
public:
    QGridLayout *gridLayout;
    PlotControl *widgetFirst;
    PlotControl *widgetSecond;
    PlotControl *widgetThird;
    PlotControl *widgetFourth;

    void setupUi(QWidget *PlotWidget)
    {
        if (PlotWidget->objectName().isEmpty())
            PlotWidget->setObjectName(QString::fromUtf8("PlotWidget"));
        PlotWidget->resize(717, 458);
        PlotWidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(PlotWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widgetFirst = new PlotControl(PlotWidget);
        widgetFirst->setObjectName(QString::fromUtf8("widgetFirst"));

        gridLayout->addWidget(widgetFirst, 0, 0, 1, 1);

        widgetSecond = new PlotControl(PlotWidget);
        widgetSecond->setObjectName(QString::fromUtf8("widgetSecond"));

        gridLayout->addWidget(widgetSecond, 0, 1, 1, 1);

        widgetThird = new PlotControl(PlotWidget);
        widgetThird->setObjectName(QString::fromUtf8("widgetThird"));

        gridLayout->addWidget(widgetThird, 1, 0, 1, 1);

        widgetFourth = new PlotControl(PlotWidget);
        widgetFourth->setObjectName(QString::fromUtf8("widgetFourth"));

        gridLayout->addWidget(widgetFourth, 1, 1, 1, 1);


        retranslateUi(PlotWidget);

        QMetaObject::connectSlotsByName(PlotWidget);
    } // setupUi

    void retranslateUi(QWidget *PlotWidget)
    {
        PlotWidget->setWindowTitle(QCoreApplication::translate("PlotWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlotWidget: public Ui_PlotWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOTWIDGET_H
