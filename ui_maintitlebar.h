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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainTitleBar
{
public:
    QGridLayout *gridLayout;
    QFrame *frameBorder;
    QGridLayout *gridLayout_2;
    QLabel *labelTitleName;
    QLabel *labelImage;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QPushButton *pushButtonMin;
    QPushButton *pushButtonNormalMax;
    QPushButton *pushButtonClose;

    void setupUi(QWidget *MainTitleBar)
    {
        if (MainTitleBar->objectName().isEmpty())
            MainTitleBar->setObjectName(QString::fromUtf8("MainTitleBar"));
        MainTitleBar->resize(1448, 45);
        MainTitleBar->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(MainTitleBar);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frameBorder = new QFrame(MainTitleBar);
        frameBorder->setObjectName(QString::fromUtf8("frameBorder"));
        frameBorder->setFrameShape(QFrame::StyledPanel);
        frameBorder->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frameBorder);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        labelTitleName = new QLabel(frameBorder);
        labelTitleName->setObjectName(QString::fromUtf8("labelTitleName"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        labelTitleName->setFont(font);
        labelTitleName->setScaledContents(true);

        gridLayout_2->addWidget(labelTitleName, 0, 0, 1, 1);

        labelImage = new QLabel(frameBorder);
        labelImage->setObjectName(QString::fromUtf8("labelImage"));
        labelImage->setMinimumSize(QSize(25, 25));
        labelImage->setMaximumSize(QSize(25, 25));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        labelImage->setFont(font1);
        labelImage->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/image1.png")));
        labelImage->setScaledContents(true);

        gridLayout_2->addWidget(labelImage, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(1023, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 1);

        label = new QLabel(frameBorder);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(200, 20));
        label->setSizeIncrement(QSize(1222, 21212));

        gridLayout_2->addWidget(label, 0, 3, 1, 1);

        pushButtonMin = new QPushButton(frameBorder);
        pushButtonMin->setObjectName(QString::fromUtf8("pushButtonMin"));
        pushButtonMin->setMinimumSize(QSize(20, 20));
        pushButtonMin->setMaximumSize(QSize(20, 20));
        QFont font2;
        font2.setPointSize(6);
        pushButtonMin->setFont(font2);
        pushButtonMin->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../res/image/min_hover.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonMin->setIcon(icon);

        gridLayout_2->addWidget(pushButtonMin, 0, 4, 1, 1);

        pushButtonNormalMax = new QPushButton(frameBorder);
        pushButtonNormalMax->setObjectName(QString::fromUtf8("pushButtonNormalMax"));
        pushButtonNormalMax->setMinimumSize(QSize(20, 20));
        pushButtonNormalMax->setMaximumSize(QSize(20, 20));
        pushButtonNormalMax->setFont(font2);
        pushButtonNormalMax->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../res/image/max_hover.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonNormalMax->setIcon(icon1);

        gridLayout_2->addWidget(pushButtonNormalMax, 0, 5, 1, 1);

        pushButtonClose = new QPushButton(frameBorder);
        pushButtonClose->setObjectName(QString::fromUtf8("pushButtonClose"));
        pushButtonClose->setMinimumSize(QSize(20, 20));
        pushButtonClose->setMaximumSize(QSize(20, 20));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../res/image/close_hover.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonClose->setIcon(icon2);

        gridLayout_2->addWidget(pushButtonClose, 0, 6, 1, 1);


        gridLayout->addWidget(frameBorder, 0, 0, 1, 1);


        retranslateUi(MainTitleBar);

        QMetaObject::connectSlotsByName(MainTitleBar);
    } // setupUi

    void retranslateUi(QWidget *MainTitleBar)
    {
        MainTitleBar->setWindowTitle(QCoreApplication::translate("MainTitleBar", "Form", nullptr));
        labelTitleName->setText(QCoreApplication::translate("MainTitleBar", "Wayneyao", nullptr));
        labelImage->setText(QString());
        label->setText(QCoreApplication::translate("MainTitleBar", "TextLabel", nullptr));
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
