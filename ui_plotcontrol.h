/********************************************************************************
** Form generated from reading UI file 'plotcontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOTCONTROL_H
#define UI_PLOTCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qcustomplot/qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_PlotControl
{
public:
    QVBoxLayout *verticalLayout;
    QCustomPlot *widgetCustomPlot;

    void setupUi(QWidget *PlotControl)
    {
        if (PlotControl->objectName().isEmpty())
            PlotControl->setObjectName(QString::fromUtf8("PlotControl"));
        PlotControl->resize(400, 300);
        verticalLayout = new QVBoxLayout(PlotControl);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widgetCustomPlot = new QCustomPlot(PlotControl);
        widgetCustomPlot->setObjectName(QString::fromUtf8("widgetCustomPlot"));

        verticalLayout->addWidget(widgetCustomPlot);


        retranslateUi(PlotControl);

        QMetaObject::connectSlotsByName(PlotControl);
    } // setupUi

    void retranslateUi(QWidget *PlotControl)
    {
        PlotControl->setWindowTitle(QCoreApplication::translate("PlotControl", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlotControl: public Ui_PlotControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOTCONTROL_H
