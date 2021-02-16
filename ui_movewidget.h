/********************************************************************************
** Form generated from reading UI file 'movewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVEWIDGET_H
#define UI_MOVEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MoveWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frameBackground;

    void setupUi(QWidget *MoveWidget)
    {
        if (MoveWidget->objectName().isEmpty())
            MoveWidget->setObjectName(QString::fromUtf8("MoveWidget"));
        MoveWidget->resize(400, 300);
        MoveWidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(MoveWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frameBackground = new QFrame(MoveWidget);
        frameBackground->setObjectName(QString::fromUtf8("frameBackground"));
        frameBackground->setFrameShape(QFrame::StyledPanel);
        frameBackground->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frameBackground);


        retranslateUi(MoveWidget);

        QMetaObject::connectSlotsByName(MoveWidget);
    } // setupUi

    void retranslateUi(QWidget *MoveWidget)
    {
        MoveWidget->setWindowTitle(QCoreApplication::translate("MoveWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MoveWidget: public Ui_MoveWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVEWIDGET_H
