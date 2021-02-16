/********************************************************************************
** Form generated from reading UI file 'slidercontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLIDERCONTROL_H
#define UI_SLIDERCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SliderControl
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frameSlider;
    QPushButton *pushButtonLeft;
    QPushButton *pushButtonRight;

    void setupUi(QWidget *SliderControl)
    {
        if (SliderControl->objectName().isEmpty())
            SliderControl->setObjectName(QString::fromUtf8("SliderControl"));
        SliderControl->resize(358, 87);
        verticalLayout = new QVBoxLayout(SliderControl);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frameSlider = new QFrame(SliderControl);
        frameSlider->setObjectName(QString::fromUtf8("frameSlider"));
        frameSlider->setFrameShape(QFrame::StyledPanel);
        frameSlider->setFrameShadow(QFrame::Raised);
        pushButtonLeft = new QPushButton(frameSlider);
        pushButtonLeft->setObjectName(QString::fromUtf8("pushButtonLeft"));
        pushButtonLeft->setGeometry(QRect(30, 30, 16, 22));
        pushButtonLeft->setMinimumSize(QSize(16, 22));
        pushButtonLeft->setMaximumSize(QSize(16, 22));
        pushButtonRight = new QPushButton(frameSlider);
        pushButtonRight->setObjectName(QString::fromUtf8("pushButtonRight"));
        pushButtonRight->setGeometry(QRect(100, 30, 16, 22));
        pushButtonRight->setMinimumSize(QSize(16, 22));
        pushButtonRight->setMaximumSize(QSize(16, 22));

        verticalLayout->addWidget(frameSlider);


        retranslateUi(SliderControl);

        QMetaObject::connectSlotsByName(SliderControl);
    } // setupUi

    void retranslateUi(QWidget *SliderControl)
    {
        SliderControl->setWindowTitle(QCoreApplication::translate("SliderControl", "Form", nullptr));
        pushButtonLeft->setText(QString());
        pushButtonRight->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SliderControl: public Ui_SliderControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLIDERCONTROL_H
