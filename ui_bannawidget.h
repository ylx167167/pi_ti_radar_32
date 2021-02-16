/********************************************************************************
** Form generated from reading UI file 'bannawidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANNAWIDGET_H
#define UI_BANNAWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <maincontent/controlwidget/bannacontrol/bannacontrol.h>

QT_BEGIN_NAMESPACE

class Ui_BannaWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frameBackground;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    BannaControl *widgetBanna;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *BannaWidget)
    {
        if (BannaWidget->objectName().isEmpty())
            BannaWidget->setObjectName(QString::fromUtf8("BannaWidget"));
        BannaWidget->resize(941, 590);
        BannaWidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(BannaWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frameBackground = new QFrame(BannaWidget);
        frameBackground->setObjectName(QString::fromUtf8("frameBackground"));
        frameBackground->setFrameShape(QFrame::StyledPanel);
        frameBackground->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frameBackground);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        widgetBanna = new BannaControl(frameBackground);
        widgetBanna->setObjectName(QString::fromUtf8("widgetBanna"));
        widgetBanna->setMinimumSize(QSize(797, 430));
        widgetBanna->setMaximumSize(QSize(797, 430));

        horizontalLayout->addWidget(widgetBanna);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 77, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        verticalLayout_2->addWidget(frameBackground);


        retranslateUi(BannaWidget);

        QMetaObject::connectSlotsByName(BannaWidget);
    } // setupUi

    void retranslateUi(QWidget *BannaWidget)
    {
        BannaWidget->setWindowTitle(QCoreApplication::translate("BannaWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BannaWidget: public Ui_BannaWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANNAWIDGET_H
