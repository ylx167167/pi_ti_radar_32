/********************************************************************************
** Form generated from reading UI file 'openglwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENGLWIDGET_H
#define UI_OPENGLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <maincontent/controlwidget/openglcontrol/openglcontrol.h>

QT_BEGIN_NAMESPACE

class Ui_OpenglWidget
{
public:
    QVBoxLayout *verticalLayout;
    OpenglControl *openGLWidget;

    void setupUi(QWidget *OpenglWidget)
    {
        if (OpenglWidget->objectName().isEmpty())
            OpenglWidget->setObjectName(QString::fromUtf8("OpenglWidget"));
        OpenglWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(OpenglWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        openGLWidget = new OpenglControl(OpenglWidget);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));

        verticalLayout->addWidget(openGLWidget);


        retranslateUi(OpenglWidget);

        QMetaObject::connectSlotsByName(OpenglWidget);
    } // setupUi

    void retranslateUi(QWidget *OpenglWidget)
    {
        OpenglWidget->setWindowTitle(QCoreApplication::translate("OpenglWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OpenglWidget: public Ui_OpenglWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENGLWIDGET_H
