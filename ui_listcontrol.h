/********************************************************************************
** Form generated from reading UI file 'listcontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTCONTROL_H
#define UI_LISTCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListControl
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *labelImage;
    QVBoxLayout *verticalLayout;
    QLabel *labelAppName;
    QLabel *labelAppText;
    QWidget *widgetStar;
    QPushButton *pushButtonInstall;
    QFrame *frameLine;

    void setupUi(QWidget *ListControl)
    {
        if (ListControl->objectName().isEmpty())
            ListControl->setObjectName(QString::fromUtf8("ListControl"));
        ListControl->resize(626, 86);
        verticalLayout_2 = new QVBoxLayout(ListControl);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(9, 9, 9, 9);
        labelImage = new QLabel(ListControl);
        labelImage->setObjectName(QString::fromUtf8("labelImage"));
        labelImage->setMinimumSize(QSize(36, 36));
        labelImage->setMaximumSize(QSize(36, 36));
        labelImage->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/image.png")));
        labelImage->setScaledContents(true);

        horizontalLayout->addWidget(labelImage);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(9, 9, 9, 9);
        labelAppName = new QLabel(ListControl);
        labelAppName->setObjectName(QString::fromUtf8("labelAppName"));
        labelAppName->setScaledContents(true);

        verticalLayout->addWidget(labelAppName);

        labelAppText = new QLabel(ListControl);
        labelAppText->setObjectName(QString::fromUtf8("labelAppText"));
        labelAppText->setScaledContents(true);

        verticalLayout->addWidget(labelAppText);


        horizontalLayout->addLayout(verticalLayout);

        widgetStar = new QWidget(ListControl);
        widgetStar->setObjectName(QString::fromUtf8("widgetStar"));

        horizontalLayout->addWidget(widgetStar);

        pushButtonInstall = new QPushButton(ListControl);
        pushButtonInstall->setObjectName(QString::fromUtf8("pushButtonInstall"));
        pushButtonInstall->setMinimumSize(QSize(100, 30));
        pushButtonInstall->setMaximumSize(QSize(100, 30));

        horizontalLayout->addWidget(pushButtonInstall);


        verticalLayout_2->addLayout(horizontalLayout);

        frameLine = new QFrame(ListControl);
        frameLine->setObjectName(QString::fromUtf8("frameLine"));
        frameLine->setMinimumSize(QSize(0, 1));
        frameLine->setMaximumSize(QSize(16777215, 1));
        frameLine->setFrameShape(QFrame::StyledPanel);
        frameLine->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(frameLine);


        retranslateUi(ListControl);

        QMetaObject::connectSlotsByName(ListControl);
    } // setupUi

    void retranslateUi(QWidget *ListControl)
    {
        ListControl->setWindowTitle(QCoreApplication::translate("ListControl", "Form", nullptr));
        labelImage->setText(QString());
        labelAppName->setText(QCoreApplication::translate("ListControl", "QCoolPage", nullptr));
        labelAppText->setText(QCoreApplication::translate("ListControl", "Qt\347\202\253\351\205\267\347\225\214\351\235\242\357\274\214Qt\345\274\200\346\272\220\351\241\271\347\233\256\357\274\201", nullptr));
        pushButtonInstall->setText(QCoreApplication::translate("ListControl", "\345\256\211\350\243\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListControl: public Ui_ListControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTCONTROL_H
