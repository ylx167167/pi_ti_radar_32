/********************************************************************************
** Form generated from reading UI file 'tablewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEWIDGET_H
#define UI_TABLEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <maincontent/controlwidget/tablecontrol/tablecontrol.h>

QT_BEGIN_NAMESPACE

class Ui_TableWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frameBackground;
    QVBoxLayout *verticalLayout_2;
    TableControl *widgetTable;

    void setupUi(QWidget *TableWidget)
    {
        if (TableWidget->objectName().isEmpty())
            TableWidget->setObjectName(QString::fromUtf8("TableWidget"));
        TableWidget->resize(717, 458);
        TableWidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(TableWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frameBackground = new QFrame(TableWidget);
        frameBackground->setObjectName(QString::fromUtf8("frameBackground"));
        frameBackground->setFrameShape(QFrame::StyledPanel);
        frameBackground->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frameBackground);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widgetTable = new TableControl(frameBackground);
        widgetTable->setObjectName(QString::fromUtf8("widgetTable"));

        verticalLayout_2->addWidget(widgetTable);


        verticalLayout->addWidget(frameBackground);


        retranslateUi(TableWidget);

        QMetaObject::connectSlotsByName(TableWidget);
    } // setupUi

    void retranslateUi(QWidget *TableWidget)
    {
        TableWidget->setWindowTitle(QCoreApplication::translate("TableWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TableWidget: public Ui_TableWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEWIDGET_H
