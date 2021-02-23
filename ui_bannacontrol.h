/********************************************************************************
** Form generated from reading UI file 'bannacontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANNACONTROL_H
#define UI_BANNACONTROL_H

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

class Ui_BannaControl
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widgetImage;
    QLabel *labelFirst;
    QLabel *labelSecond;
    QLabel *labelThird;
    QLabel *labelFourth;
    QLabel *labelFifth;
    QPushButton *pushButtonLeft;
    QPushButton *pushButtonRight;
    QFrame *frameDot;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonFirst;
    QPushButton *pushButtonSecond;
    QPushButton *pushButtonThird;
    QPushButton *pushButtonFourth;
    QPushButton *pushButtonFifth;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *BannaControl)
    {
        if (BannaControl->objectName().isEmpty())
            BannaControl->setObjectName(QString::fromUtf8("BannaControl"));
        BannaControl->resize(797, 430);
        BannaControl->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(BannaControl);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widgetImage = new QWidget(BannaControl);
        widgetImage->setObjectName(QString::fromUtf8("widgetImage"));
        widgetImage->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"border-radius:6px;\n"
"}"));
        labelFirst = new QLabel(widgetImage);
        labelFirst->setObjectName(QString::fromUtf8("labelFirst"));
        labelFirst->setGeometry(QRect(20, 100, 320, 200));
        labelSecond = new QLabel(widgetImage);
        labelSecond->setObjectName(QString::fromUtf8("labelSecond"));
        labelSecond->setGeometry(QRect(70, 70, 400, 250));
        labelThird = new QLabel(widgetImage);
        labelThird->setObjectName(QString::fromUtf8("labelThird"));
        labelThird->setGeometry(QRect(150, 50, 480, 300));
        labelFourth = new QLabel(widgetImage);
        labelFourth->setObjectName(QString::fromUtf8("labelFourth"));
        labelFourth->setGeometry(QRect(330, 70, 400, 250));
        labelFifth = new QLabel(widgetImage);
        labelFifth->setObjectName(QString::fromUtf8("labelFifth"));
        labelFifth->setGeometry(QRect(470, 100, 320, 200));
        pushButtonLeft = new QPushButton(widgetImage);
        pushButtonLeft->setObjectName(QString::fromUtf8("pushButtonLeft"));
        pushButtonLeft->setGeometry(QRect(20, 180, 48, 48));
        pushButtonLeft->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border-image: url(:/res/res/image/other/less_than.png);"));
        pushButtonRight = new QPushButton(widgetImage);
        pushButtonRight->setObjectName(QString::fromUtf8("pushButtonRight"));
        pushButtonRight->setGeometry(QRect(740, 180, 48, 48));
        pushButtonRight->setStyleSheet(QString::fromUtf8("background-color: transparent;background-color: transparent;\n"
"border-image: url(:/res/res/image/other/more_than.png);"));

        verticalLayout->addWidget(widgetImage);

        frameDot = new QFrame(BannaControl);
        frameDot->setObjectName(QString::fromUtf8("frameDot"));
        frameDot->setMinimumSize(QSize(0, 30));
        frameDot->setMaximumSize(QSize(16777215, 80));
        frameDot->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	border-image: url(:/res/res/image/other/normal_gray.png);\n"
"}\n"
"\n"
"QPushButton:checked\n"
"{\n"
"border-image: url(:/res/res/image/other/hover_blue.png);\n"
"}"));
        frameDot->setFrameShape(QFrame::StyledPanel);
        frameDot->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frameDot);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 25, 0, 35);
        horizontalSpacer = new QSpacerItem(287, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonFirst = new QPushButton(frameDot);
        pushButtonFirst->setObjectName(QString::fromUtf8("pushButtonFirst"));
        pushButtonFirst->setMinimumSize(QSize(16, 16));
        pushButtonFirst->setMaximumSize(QSize(16, 16));
        pushButtonFirst->setCheckable(true);

        horizontalLayout->addWidget(pushButtonFirst);

        pushButtonSecond = new QPushButton(frameDot);
        pushButtonSecond->setObjectName(QString::fromUtf8("pushButtonSecond"));
        pushButtonSecond->setMinimumSize(QSize(16, 16));
        pushButtonSecond->setMaximumSize(QSize(16, 16));
        pushButtonSecond->setCheckable(true);

        horizontalLayout->addWidget(pushButtonSecond);

        pushButtonThird = new QPushButton(frameDot);
        pushButtonThird->setObjectName(QString::fromUtf8("pushButtonThird"));
        pushButtonThird->setMinimumSize(QSize(16, 16));
        pushButtonThird->setMaximumSize(QSize(16, 16));
        pushButtonThird->setCheckable(true);
        pushButtonThird->setChecked(true);

        horizontalLayout->addWidget(pushButtonThird);

        pushButtonFourth = new QPushButton(frameDot);
        pushButtonFourth->setObjectName(QString::fromUtf8("pushButtonFourth"));
        pushButtonFourth->setMinimumSize(QSize(16, 16));
        pushButtonFourth->setMaximumSize(QSize(16, 16));
        pushButtonFourth->setCheckable(true);

        horizontalLayout->addWidget(pushButtonFourth);

        pushButtonFifth = new QPushButton(frameDot);
        pushButtonFifth->setObjectName(QString::fromUtf8("pushButtonFifth"));
        pushButtonFifth->setMinimumSize(QSize(16, 16));
        pushButtonFifth->setMaximumSize(QSize(16, 16));
        pushButtonFifth->setCheckable(true);

        horizontalLayout->addWidget(pushButtonFifth);

        horizontalSpacer_2 = new QSpacerItem(287, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(frameDot);


        retranslateUi(BannaControl);

        QMetaObject::connectSlotsByName(BannaControl);
    } // setupUi

    void retranslateUi(QWidget *BannaControl)
    {
        BannaControl->setWindowTitle(QCoreApplication::translate("BannaControl", "BannaWidget", nullptr));
        labelFirst->setText(QString());
        labelSecond->setText(QString());
        labelThird->setText(QString());
        labelFourth->setText(QString());
        labelFifth->setText(QString());
        pushButtonLeft->setText(QString());
        pushButtonRight->setText(QString());
        pushButtonFirst->setText(QString());
        pushButtonSecond->setText(QString());
        pushButtonThird->setText(QString());
        pushButtonFourth->setText(QString());
        pushButtonFifth->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BannaControl: public Ui_BannaControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANNACONTROL_H
