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
        ControlTreeWidget->resize(194, 299);
        verticalLayout = new QVBoxLayout(ControlTreeWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        treeWidgetMenu = new QTreeWidget(ControlTreeWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidgetMenu->setHeaderItem(__qtreewidgetitem);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/res/image/image.png"), QSize(), QIcon::Normal, QIcon::On);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/res/image/image.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem1->setTextAlignment(0, Qt::AlignLeading|Qt::AlignVCenter);
        __qtreewidgetitem1->setIcon(0, icon);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem2->setIcon(0, icon1);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem3->setIcon(0, icon1);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem4->setIcon(0, icon1);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem5->setIcon(0, icon1);
        QTreeWidgetItem *__qtreewidgetitem6 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem6->setIcon(0, icon1);
        QTreeWidgetItem *__qtreewidgetitem7 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem7->setIcon(0, icon1);
        QTreeWidgetItem *__qtreewidgetitem8 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem8->setIcon(0, icon1);
        QTreeWidgetItem *__qtreewidgetitem9 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem9->setIcon(0, icon1);
        QTreeWidgetItem *__qtreewidgetitem10 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem10->setIcon(0, icon);
        QTreeWidgetItem *__qtreewidgetitem11 = new QTreeWidgetItem(treeWidgetMenu);
        __qtreewidgetitem11->setIcon(0, icon1);
        treeWidgetMenu->setObjectName(QString::fromUtf8("treeWidgetMenu"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        treeWidgetMenu->setFont(font);

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
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("ControlTreeWidget", "\350\275\256\346\222\255\345\233\276", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidgetMenu->topLevelItem(1);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("ControlTreeWidget", "\346\237\261\347\212\266\345\233\276", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidgetMenu->topLevelItem(2);
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("ControlTreeWidget", "\350\277\233\345\272\246\346\235\241", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidgetMenu->topLevelItem(3);
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("ControlTreeWidget", "\351\235\242\346\235\277", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidgetMenu->topLevelItem(4);
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("ControlTreeWidget", "\345\210\227\350\241\250", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidgetMenu->topLevelItem(5);
        ___qtreewidgetitem5->setText(0, QCoreApplication::translate("ControlTreeWidget", "\345\235\220\346\240\207\347\263\273", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = treeWidgetMenu->topLevelItem(6);
        ___qtreewidgetitem6->setText(0, QCoreApplication::translate("ControlTreeWidget", "\347\247\273\345\212\250\346\214\211\351\222\256", nullptr));
        QTreeWidgetItem *___qtreewidgetitem7 = treeWidgetMenu->topLevelItem(7);
        ___qtreewidgetitem7->setText(0, QCoreApplication::translate("ControlTreeWidget", "\350\241\250\346\240\274", nullptr));
        QTreeWidgetItem *___qtreewidgetitem8 = treeWidgetMenu->topLevelItem(8);
        ___qtreewidgetitem8->setText(0, QCoreApplication::translate("ControlTreeWidget", "\347\247\273\345\212\250\350\277\233\345\272\246", nullptr));
        QTreeWidgetItem *___qtreewidgetitem9 = treeWidgetMenu->topLevelItem(9);
        ___qtreewidgetitem9->setText(0, QCoreApplication::translate("ControlTreeWidget", "\346\265\201\347\250\213\350\277\233\345\272\246", nullptr));
        QTreeWidgetItem *___qtreewidgetitem10 = treeWidgetMenu->topLevelItem(10);
        ___qtreewidgetitem10->setText(0, QCoreApplication::translate("ControlTreeWidget", "\344\270\211\347\273\264\346\250\241\345\236\213", nullptr));
        treeWidgetMenu->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class ControlTreeWidget: public Ui_ControlTreeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLTREEWIDGET_H
