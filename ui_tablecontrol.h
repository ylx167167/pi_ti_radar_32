/********************************************************************************
** Form generated from reading UI file 'tablecontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLECONTROL_H
#define UI_TABLECONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TableControl
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widgetHead;
    QHBoxLayout *horizontalLayout;
    QFrame *frameTableLine;
    QLabel *labelTableText;
    QTableWidget *tableWidgetData;

    void setupUi(QWidget *TableControl)
    {
        if (TableControl->objectName().isEmpty())
            TableControl->setObjectName(QString::fromUtf8("TableControl"));
        TableControl->resize(713, 498);
        verticalLayout = new QVBoxLayout(TableControl);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widgetHead = new QWidget(TableControl);
        widgetHead->setObjectName(QString::fromUtf8("widgetHead"));
        widgetHead->setMinimumSize(QSize(0, 40));
        widgetHead->setMaximumSize(QSize(16777215, 40));
        horizontalLayout = new QHBoxLayout(widgetHead);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 6, 9, 6);
        frameTableLine = new QFrame(widgetHead);
        frameTableLine->setObjectName(QString::fromUtf8("frameTableLine"));
        frameTableLine->setMinimumSize(QSize(4, 0));
        frameTableLine->setMaximumSize(QSize(4, 16777215));
        frameTableLine->setStyleSheet(QString::fromUtf8("background-color:#3B3B3B;"));
        frameTableLine->setFrameShape(QFrame::StyledPanel);
        frameTableLine->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(frameTableLine);

        labelTableText = new QLabel(widgetHead);
        labelTableText->setObjectName(QString::fromUtf8("labelTableText"));

        horizontalLayout->addWidget(labelTableText);


        verticalLayout->addWidget(widgetHead);

        tableWidgetData = new QTableWidget(TableControl);
        if (tableWidgetData->columnCount() < 5)
            tableWidgetData->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetData->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetData->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetData->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetData->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetData->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidgetData->setObjectName(QString::fromUtf8("tableWidgetData"));
        tableWidgetData->setLayoutDirection(Qt::LeftToRight);

        verticalLayout->addWidget(tableWidgetData);


        retranslateUi(TableControl);

        QMetaObject::connectSlotsByName(TableControl);
    } // setupUi

    void retranslateUi(QWidget *TableControl)
    {
        TableControl->setWindowTitle(QCoreApplication::translate("TableControl", "Form", nullptr));
        labelTableText->setText(QCoreApplication::translate("TableControl", "List", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetData->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("TableControl", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetData->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("TableControl", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetData->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("TableControl", "Target", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetData->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("TableControl", "Position", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TableControl: public Ui_TableControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLECONTROL_H
