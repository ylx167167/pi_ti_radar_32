/********************************************************************************
** Form generated from reading UI file 'movecontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVECONTROL_H
#define UI_MOVECONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MoveControl
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonCloseControl;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelImage;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *MoveControl)
    {
        if (MoveControl->objectName().isEmpty())
            MoveControl->setObjectName(QString::fromUtf8("MoveControl"));
        MoveControl->resize(86, 92);
        MoveControl->setMinimumSize(QSize(86, 92));
        verticalLayout = new QVBoxLayout(MoveControl);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonCloseControl = new QPushButton(MoveControl);
        pushButtonCloseControl->setObjectName(QString::fromUtf8("pushButtonCloseControl"));
        pushButtonCloseControl->setMinimumSize(QSize(24, 24));
        pushButtonCloseControl->setMaximumSize(QSize(24, 24));
        pushButtonCloseControl->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(pushButtonCloseControl);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelImage = new QLabel(MoveControl);
        labelImage->setObjectName(QString::fromUtf8("labelImage"));
        labelImage->setMinimumSize(QSize(64, 64));
        labelImage->setMaximumSize(QSize(64, 64));
        labelImage->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/other/circle.png")));
        labelImage->setScaledContents(true);

        horizontalLayout_2->addWidget(labelImage);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_2->addItem(verticalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(MoveControl);

        QMetaObject::connectSlotsByName(MoveControl);
    } // setupUi

    void retranslateUi(QWidget *MoveControl)
    {
        MoveControl->setWindowTitle(QCoreApplication::translate("MoveControl", "Form", nullptr));
        pushButtonCloseControl->setText(QString());
        labelImage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MoveControl: public Ui_MoveControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVECONTROL_H
