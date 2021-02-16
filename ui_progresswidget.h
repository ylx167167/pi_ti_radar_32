/********************************************************************************
** Form generated from reading UI file 'progresswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRESSWIDGET_H
#define UI_PROGRESSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <maincontent/controlwidget/progresscontrol/progresscontrol.h>

QT_BEGIN_NAMESPACE

class Ui_ProgressWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frameBackground;
    QVBoxLayout *verticalLayout_2;
    ProgressControl *widgetFirst;
    ProgressControl *widgetSecond;
    ProgressControl *widgetThird;
    ProgressControl *widgetFourth;
    ProgressControl *widgetFifth;
    ProgressControl *widgetSixth;

    void setupUi(QWidget *ProgressWidget)
    {
        if (ProgressWidget->objectName().isEmpty())
            ProgressWidget->setObjectName(QString::fromUtf8("ProgressWidget"));
        ProgressWidget->resize(612, 416);
        ProgressWidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(ProgressWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frameBackground = new QFrame(ProgressWidget);
        frameBackground->setObjectName(QString::fromUtf8("frameBackground"));
        frameBackground->setFrameShape(QFrame::StyledPanel);
        frameBackground->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frameBackground);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widgetFirst = new ProgressControl(frameBackground);
        widgetFirst->setObjectName(QString::fromUtf8("widgetFirst"));

        verticalLayout_2->addWidget(widgetFirst);

        widgetSecond = new ProgressControl(frameBackground);
        widgetSecond->setObjectName(QString::fromUtf8("widgetSecond"));

        verticalLayout_2->addWidget(widgetSecond);

        widgetThird = new ProgressControl(frameBackground);
        widgetThird->setObjectName(QString::fromUtf8("widgetThird"));

        verticalLayout_2->addWidget(widgetThird);

        widgetFourth = new ProgressControl(frameBackground);
        widgetFourth->setObjectName(QString::fromUtf8("widgetFourth"));

        verticalLayout_2->addWidget(widgetFourth);

        widgetFifth = new ProgressControl(frameBackground);
        widgetFifth->setObjectName(QString::fromUtf8("widgetFifth"));

        verticalLayout_2->addWidget(widgetFifth);

        widgetSixth = new ProgressControl(frameBackground);
        widgetSixth->setObjectName(QString::fromUtf8("widgetSixth"));

        verticalLayout_2->addWidget(widgetSixth);


        verticalLayout->addWidget(frameBackground);


        retranslateUi(ProgressWidget);

        QMetaObject::connectSlotsByName(ProgressWidget);
    } // setupUi

    void retranslateUi(QWidget *ProgressWidget)
    {
        ProgressWidget->setWindowTitle(QCoreApplication::translate("ProgressWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProgressWidget: public Ui_ProgressWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRESSWIDGET_H
