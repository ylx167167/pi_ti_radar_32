/********************************************************************************
** Form generated from reading UI file 'framewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAMEWIDGET_H
#define UI_FRAMEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FrameWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frameBackground;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *FrameWidget)
    {
        if (FrameWidget->objectName().isEmpty())
            FrameWidget->setObjectName(QString::fromUtf8("FrameWidget"));
        FrameWidget->resize(839, 567);
        FrameWidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(FrameWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frameBackground = new QFrame(FrameWidget);
        frameBackground->setObjectName(QString::fromUtf8("frameBackground"));
        frameBackground->setFrameShape(QFrame::StyledPanel);
        frameBackground->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frameBackground);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(frameBackground);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setStyleSheet(QString::fromUtf8("QWidget#scrollArea\n"
"{\n"
"border:none;\n"
"}"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 837, 565));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font: 75 11pt \"\345\256\213\344\275\223\";\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"color: rgb(255, 255, 255);\n"
"border-radius:5px;\n"
"background-color:#1874CD;\n"
"font-size:12px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"color: rgb(255, 255, 255);\n"
"border-radius:5px;\n"
"color:white;\n"
"background-color:#1C86EE;\n"
"}"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);


        verticalLayout->addWidget(frameBackground);


        retranslateUi(FrameWidget);

        QMetaObject::connectSlotsByName(FrameWidget);
    } // setupUi

    void retranslateUi(QWidget *FrameWidget)
    {
        FrameWidget->setWindowTitle(QCoreApplication::translate("FrameWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FrameWidget: public Ui_FrameWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAMEWIDGET_H
