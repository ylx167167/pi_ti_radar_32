/********************************************************************************
** Form generated from reading UI file 'controltreewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLTREEWIDGET_H
#define UI_CONTROLTREEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ControlTreeWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidgetMenu;

    void setupUi(QWidget *ControlTreeWidget)
    {
        if (ControlTreeWidget->objectName().isEmpty())
            ControlTreeWidget->setObjectName(QString::fromUtf8("ControlTreeWidget"));
        ControlTreeWidget->resize(240, 624);
        ControlTreeWidget->setMinimumSize(QSize(0, 624));
        verticalLayout = new QVBoxLayout(ControlTreeWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        treeWidgetMenu = new QTreeWidget(ControlTreeWidget);
        QFont font;
        font.setPointSize(50);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        __qtreewidgetitem->setFont(0, font);
        treeWidgetMenu->setHeaderItem(__qtreewidgetitem);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/res/image/right_arrow_hover.png"), QSize(), QIcon::Normal, QIcon::Off);
        QBrush brush(QColor(85, 255, 255, 255));
        brush.setStyle(Qt::NoBrush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::Dense6Pattern);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Courier New"));
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        font1.setKerning(true);
        font1.setStyleStrategy(QFont::NoAntialias);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/res/image/right_arrow_normal.png"), QSize(), QIcon::Normal, QIcon::Off);
        QBrush brush2(QColor(85, 255, 255, 255));
        brush2.setStyle(Qt::DiagCrossPattern);
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::Dense6Pattern);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Courier New"));
        font2.setPointSize(30);
        font2.setBold(true);
        font2.setWeight(75);
        font2.setStyleStrategy(QFont::NoAntialias);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/res/image/right_arrow_pressed.png"), QSize(), QIcon::Normal, QIcon::Off);
        QBrush brush4(QColor(85, 255, 255, 255));
        brush4.setStyle(Qt::Dense6Pattern);
        QBrush brush5(QColor(0, 0, 0, 255));
        brush5.setStyle(Qt::Dense6Pattern);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem1->setTextAlignment(0, Qt::AlignHCenter|Qt::AlignBottom);
        __qtreewidgetitem1->setFont(0, font1);
        __qtreewidgetitem1->setBackground(0, brush1);
        __qtreewidgetitem1->setForeground(0, brush);
        __qtreewidgetitem1->setIcon(0, icon);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem2->setTextAlignment(0, Qt::AlignHCenter|Qt::AlignBottom);
        __qtreewidgetitem2->setFont(0, font2);
        __qtreewidgetitem2->setBackground(0, brush3);
        __qtreewidgetitem2->setForeground(0, brush2);
        __qtreewidgetitem2->setIcon(0, icon1);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem3->setTextAlignment(0, Qt::AlignHCenter|Qt::AlignBottom);
        __qtreewidgetitem3->setFont(0, font2);
        __qtreewidgetitem3->setBackground(0, brush5);
        __qtreewidgetitem3->setForeground(0, brush4);
        __qtreewidgetitem3->setIcon(0, icon2);
        treeWidgetMenu->setObjectName(QString::fromUtf8("treeWidgetMenu"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        treeWidgetMenu->setFont(font3);
        treeWidgetMenu->setFocusPolicy(Qt::ClickFocus);
        treeWidgetMenu->setContextMenuPolicy(Qt::DefaultContextMenu);
        treeWidgetMenu->setFrameShape(QFrame::Box);
        treeWidgetMenu->setFrameShadow(QFrame::Raised);
        treeWidgetMenu->setLineWidth(1);
        treeWidgetMenu->setMidLineWidth(0);
        treeWidgetMenu->setTextElideMode(Qt::ElideMiddle);
        treeWidgetMenu->setHorizontalScrollMode(QAbstractItemView::ScrollPerItem);
        treeWidgetMenu->setIndentation(0);
        treeWidgetMenu->setUniformRowHeights(false);
        treeWidgetMenu->setItemsExpandable(true);
        treeWidgetMenu->setWordWrap(true);
        treeWidgetMenu->header()->setMinimumSectionSize(48);
        treeWidgetMenu->header()->setDefaultSectionSize(200);

        verticalLayout->addWidget(treeWidgetMenu);


        retranslateUi(ControlTreeWidget);

        QMetaObject::connectSlotsByName(ControlTreeWidget);
    } // setupUi

    void retranslateUi(QWidget *ControlTreeWidget)
    {
        ControlTreeWidget->setWindowTitle(QCoreApplication::translate("ControlTreeWidget", "Form", nullptr));

        const bool __sortingEnabled = treeWidgetMenu->isSortingEnabled();
        treeWidgetMenu->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem = treeWidgetMenu->topLevelItem(0);
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("ControlTreeWidget", "\344\270\273\351\241\265", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidgetMenu->topLevelItem(1);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("ControlTreeWidget", "\347\233\221\346\216\247\344\270\255\345\277\203", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidgetMenu->topLevelItem(2);
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("ControlTreeWidget", "\350\256\276\347\275\256", nullptr));
        treeWidgetMenu->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class ControlTreeWidget: public Ui_ControlTreeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLTREEWIDGET_H
