/********************************************************************************
** Form generated from reading UI file 'maintitlebar.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTITLEBAR_H
#define UI_MAINTITLEBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainTitleBar
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frameBorder;
    QHBoxLayout *horizontalLayout;
    QLabel *labelTitleName;
    QLabel *labelImage;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonMin;
    QPushButton *pushButtonNormalMax;
    QPushButton *pushButtonClose;

    void setupUi(QWidget *MainTitleBar)
    {
        if (MainTitleBar->objectName().isEmpty())
            MainTitleBar->setObjectName(QString::fromUtf8("MainTitleBar"));
        MainTitleBar->resize(688, 45);
        MainTitleBar->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(MainTitleBar);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frameBorder = new QFrame(MainTitleBar);
        frameBorder->setObjectName(QString::fromUtf8("frameBorder"));
        frameBorder->setFrameShape(QFrame::StyledPanel);
        frameBorder->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frameBorder);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(9, 9, 9, 9);
        labelTitleName = new QLabel(frameBorder);
        labelTitleName->setObjectName(QString::fromUtf8("labelTitleName"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        labelTitleName->setFont(font);
        labelTitleName->setScaledContents(true);

        horizontalLayout->addWidget(labelTitleName);

        labelImage = new QLabel(frameBorder);
        labelImage->setObjectName(QString::fromUtf8("labelImage"));
        labelImage->setMinimumSize(QSize(25, 25));
        labelImage->setMaximumSize(QSize(25, 25));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        labelImage->setFont(font1);
        labelImage->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/image.png")));
        labelImage->setScaledContents(true);

        horizontalLayout->addWidget(labelImage);

        horizontalSpacer = new QSpacerItem(492, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonMin = new QPushButton(frameBorder);
        pushButtonMin->setObjectName(QString::fromUtf8("pushButtonMin"));
        pushButtonMin->setMinimumSize(QSize(20, 20));
        pushButtonMin->setMaximumSize(QSize(20, 20));
        QFont font2;
        font2.setPointSize(6);
        pushButtonMin->setFont(font2);
        pushButtonMin->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(pushButtonMin);

        pushButtonNormalMax = new QPushButton(frameBorder);
        pushButtonNormalMax->setObjectName(QString::fromUtf8("pushButtonNormalMax"));
        pushButtonNormalMax->setMinimumSize(QSize(20, 20));
        pushButtonNormalMax->setMaximumSize(QSize(20, 20));
        pushButtonNormalMax->setFont(font2);
        pushButtonNormalMax->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(pushButtonNormalMax);

        pushButtonClose = new QPushButton(frameBorder);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
        pushButtonClose->setMinimumSize(QSize(20, 20));
        pushButtonClose->setMaximumSize(QSize(20, 20));

        horizontalLayout->addWidget(pushButtonClose);


        verticalLayout->addWidget(frameBorder);


        retranslateUi(MainTitleBar);

        QMetaObject::connectSlotsByName(MainTitleBar);
    } // setupUi

    void retranslateUi(QWidget *MainTitleBar)
    {
        MainTitleBar->setWindowTitle(QCoreApplication::translate("MainTitleBar", "Form", nullptr));
        labelTitleName->setText(QCoreApplication::translate("MainTitleBar", "QCoolPage", nullptr));
        labelImage->setText(QString());
        pushButtonMin->setText(QString());
        pushButtonNormalMax->setText(QString());
        pushButtonClose->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainTitleBar: public Ui_MainTitleBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTITLEBAR_H
