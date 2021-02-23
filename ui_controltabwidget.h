/********************************************************************************
** Form generated from reading UI file 'controltabwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLTABWIDGET_H
#define UI_CONTROLTABWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <maincontent/controlwidget/bannacontrol/bannawidget.h>
#include <maincontent/controlwidget/radarcontrol/radarcontrol.h>
#include <maincontent/controlwidget/tablecontrol/tablecontrol.h>

QT_BEGIN_NAMESPACE

class Ui_ControlTabWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidgetControl;
    BannaWidget *banana;
    RadarControl *radar;
    TableControl *tabTableWidget;

    void setupUi(QWidget *ControlTabWidget)
    {
        if (ControlTabWidget->objectName().isEmpty())
            ControlTabWidget->setObjectName(QString::fromUtf8("ControlTabWidget"));
        ControlTabWidget->resize(697, 436);
        verticalLayout = new QVBoxLayout(ControlTabWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidgetControl = new QTabWidget(ControlTabWidget);
        tabWidgetControl->setObjectName(QString::fromUtf8("tabWidgetControl"));
        banana = new BannaWidget();
        banana->setObjectName(QString::fromUtf8("banana"));
        tabWidgetControl->addTab(banana, QString());
        radar = new RadarControl();
        radar->setObjectName(QString::fromUtf8("radar"));
        tabWidgetControl->addTab(radar, QString());
        tabTableWidget = new TableControl();
        tabTableWidget->setObjectName(QString::fromUtf8("tabTableWidget"));
        tabWidgetControl->addTab(tabTableWidget, QString());

        verticalLayout->addWidget(tabWidgetControl);


        retranslateUi(ControlTabWidget);

        tabWidgetControl->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ControlTabWidget);
    } // setupUi

    void retranslateUi(QWidget *ControlTabWidget)
    {
        ControlTabWidget->setWindowTitle(QCoreApplication::translate("ControlTabWidget", "Form", nullptr));
        tabWidgetControl->setTabText(tabWidgetControl->indexOf(banana), QCoreApplication::translate("ControlTabWidget", "\344\270\273\351\241\265", nullptr));
        tabWidgetControl->setTabText(tabWidgetControl->indexOf(radar), QCoreApplication::translate("ControlTabWidget", " \347\233\221\346\216\247\344\270\255\345\277\203", nullptr));
        tabWidgetControl->setTabText(tabWidgetControl->indexOf(tabTableWidget), QCoreApplication::translate("ControlTabWidget", "\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ControlTabWidget: public Ui_ControlTabWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLTABWIDGET_H
