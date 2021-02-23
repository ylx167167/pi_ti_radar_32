/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *loginBt;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(634, 449);
        login->setStyleSheet(QString::fromUtf8("QWidget{\n"
"\n"
"\n"
"}\n"
"\n"
"QLineEdit{\n"
"	border:2px solid#7b7b7b;\n"
"	border-radius:15px;\n"
"}\n"
"\n"
"QPushButton{\n"
"	border:2px solid#7b7b7b;\n"
"	border-radius:15px;\n"
"	\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	background-color:#aa92ff\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#FF90ff\n"
"}\n"
""));
        label_3 = new QLabel(login);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(-70, 10, 801, 141));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(36);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("font: 75 36pt \"Arial\";"));
        label_3->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(login);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(200, 170, 261, 61));
        lineEdit_2 = new QLineEdit(login);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(200, 250, 261, 61));
        loginBt = new QPushButton(login);
        loginBt->setObjectName(QString::fromUtf8("loginBt"));
        loginBt->setGeometry(QRect(250, 340, 160, 60));
        label = new QLabel(login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 170, 111, 51));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(login);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 250, 111, 51));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignCenter);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "\347\231\273\351\231\206", nullptr));
        label_3->setText(QCoreApplication::translate("login", "\350\257\267\347\231\273\345\275\225", nullptr));
        lineEdit->setText(QCoreApplication::translate("login", "Wayneyao", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("login", "\351\251\276\351\251\266\345\221\230\347\274\226\345\217\267\357\274\232", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("login", "123456", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("login", "\346\261\275\350\275\246\347\274\226\345\217\267\357\274\232", nullptr));
        loginBt->setText(QCoreApplication::translate("login", "\347\231\273\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("login", "\350\264\246\346\210\267", nullptr));
        label_2->setText(QCoreApplication::translate("login", "\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
