/********************************************************************************
** Form generated from reading UI file 'progresscontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRESSCONTROL_H
#define UI_PROGRESSCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProgressControl
{
public:

    void setupUi(QWidget *ProgressControl)
    {
        if (ProgressControl->objectName().isEmpty())
            ProgressControl->setObjectName(QString::fromUtf8("ProgressControl"));
        ProgressControl->resize(481, 63);

        retranslateUi(ProgressControl);

        QMetaObject::connectSlotsByName(ProgressControl);
    } // setupUi

    void retranslateUi(QWidget *ProgressControl)
    {
        ProgressControl->setWindowTitle(QCoreApplication::translate("ProgressControl", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProgressControl: public Ui_ProgressControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRESSCONTROL_H
