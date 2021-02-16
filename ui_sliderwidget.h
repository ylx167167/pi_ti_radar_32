/********************************************************************************
** Form generated from reading UI file 'sliderwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLIDERWIDGET_H
#define UI_SLIDERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SliderWidget
{
public:

    void setupUi(QWidget *SliderWidget)
    {
        if (SliderWidget->objectName().isEmpty())
            SliderWidget->setObjectName(QString::fromUtf8("SliderWidget"));
        SliderWidget->resize(400, 300);
        SliderWidget->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(SliderWidget);

        QMetaObject::connectSlotsByName(SliderWidget);
    } // setupUi

    void retranslateUi(QWidget *SliderWidget)
    {
        SliderWidget->setWindowTitle(QCoreApplication::translate("SliderWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SliderWidget: public Ui_SliderWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLIDERWIDGET_H
