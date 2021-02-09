/********************************************************************************
** Form generated from reading UI file 'cylinderwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CYLINDERWIDGET_H
#define UI_CYLINDERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <maincontent/controlwidget/cylindercontrol/cylindercontrol.h>

QT_BEGIN_NAMESPACE

class Ui_CylinderWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frameBackground;
    QHBoxLayout *horizontalLayout;
    CylinderControl *widgetFirst;
    CylinderControl *widgetSecond;
    CylinderControl *widgetThird;
    CylinderControl *widgetFourth;
    CylinderControl *widgetFifth;
    CylinderControl *widgetSixth;

    void setupUi(QWidget *CylinderWidget)
    {
        if (CylinderWidget->objectName().isEmpty())
            CylinderWidget->setObjectName(QString::fromUtf8("CylinderWidget"));
        CylinderWidget->resize(636, 398);
        CylinderWidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(CylinderWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frameBackground = new QFrame(CylinderWidget);
        frameBackground->setObjectName(QString::fromUtf8("frameBackground"));
        frameBackground->setFrameShape(QFrame::StyledPanel);
        frameBackground->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frameBackground);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widgetFirst = new CylinderControl(frameBackground);
        widgetFirst->setObjectName(QString::fromUtf8("widgetFirst"));

        horizontalLayout->addWidget(widgetFirst);

        widgetSecond = new CylinderControl(frameBackground);
        widgetSecond->setObjectName(QString::fromUtf8("widgetSecond"));

        horizontalLayout->addWidget(widgetSecond);

        widgetThird = new CylinderControl(frameBackground);
        widgetThird->setObjectName(QString::fromUtf8("widgetThird"));

        horizontalLayout->addWidget(widgetThird);

        widgetFourth = new CylinderControl(frameBackground);
        widgetFourth->setObjectName(QString::fromUtf8("widgetFourth"));

        horizontalLayout->addWidget(widgetFourth);

        widgetFifth = new CylinderControl(frameBackground);
        widgetFifth->setObjectName(QString::fromUtf8("widgetFifth"));

        horizontalLayout->addWidget(widgetFifth);

        widgetSixth = new CylinderControl(frameBackground);
        widgetSixth->setObjectName(QString::fromUtf8("widgetSixth"));

        horizontalLayout->addWidget(widgetSixth);


        verticalLayout->addWidget(frameBackground);


        retranslateUi(CylinderWidget);

        QMetaObject::connectSlotsByName(CylinderWidget);
    } // setupUi

    void retranslateUi(QWidget *CylinderWidget)
    {
        CylinderWidget->setWindowTitle(QCoreApplication::translate("CylinderWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CylinderWidget: public Ui_CylinderWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CYLINDERWIDGET_H
