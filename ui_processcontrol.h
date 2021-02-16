/********************************************************************************
** Form generated from reading UI file 'processcontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCESSCONTROL_H
#define UI_PROCESSCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProcessControl
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frameProcess;
    QHBoxLayout *horizontalLayout;
    QLabel *labelImage;
    QLabel *labelText;

    void setupUi(QWidget *ProcessControl)
    {
        if (ProcessControl->objectName().isEmpty())
            ProcessControl->setObjectName(QString::fromUtf8("ProcessControl"));
        ProcessControl->resize(132, 56);
        verticalLayout = new QVBoxLayout(ProcessControl);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frameProcess = new QFrame(ProcessControl);
        frameProcess->setObjectName(QString::fromUtf8("frameProcess"));
        frameProcess->setFrameShape(QFrame::StyledPanel);
        frameProcess->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frameProcess);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelImage = new QLabel(frameProcess);
        labelImage->setObjectName(QString::fromUtf8("labelImage"));
        labelImage->setMinimumSize(QSize(36, 36));
        labelImage->setMaximumSize(QSize(36, 36));
        labelImage->setPixmap(QPixmap(QString::fromUtf8(":/res/res/image/image.png")));
        labelImage->setScaledContents(true);

        horizontalLayout->addWidget(labelImage);

        labelText = new QLabel(frameProcess);
        labelText->setObjectName(QString::fromUtf8("labelText"));
        labelText->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(labelText);


        verticalLayout->addWidget(frameProcess);


        retranslateUi(ProcessControl);

        QMetaObject::connectSlotsByName(ProcessControl);
    } // setupUi

    void retranslateUi(QWidget *ProcessControl)
    {
        ProcessControl->setWindowTitle(QCoreApplication::translate("ProcessControl", "Form", nullptr));
        labelImage->setText(QString());
        labelText->setText(QCoreApplication::translate("ProcessControl", "QCoolPage", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProcessControl: public Ui_ProcessControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESSCONTROL_H
