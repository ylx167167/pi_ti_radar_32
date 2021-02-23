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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TableControl
{
public:
    QGroupBox *groupBox;
    QRadioButton *radioButton_BackMeasurements;
    QRadioButton *radioButton_FrontMeasurements;
    QLineEdit *lineEdit_ProfileBack;
    QLineEdit *lineEdit_ProfileFront;
    QCheckBox *checkBox_xCorr;
    QCheckBox *checkBox_AutoDetectPorts;
    QCheckBox *checkBox_displayPlots;
    QCheckBox *checkBox_FFT;
    QCheckBox *checkBox_LoadConfig;
    QCheckBox *checkBox_SaveData;
    QGroupBox *groupBox_2;
    QLineEdit *lineEdit_data_port;
    QLineEdit *lineEdit_UART_port;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_Icon;
    QPushButton *pushButton_start;
    QPushButton *pushButton_pause;
    QPushButton *pushButton_stop;
    QPushButton *pushButton_Refresh;
    QPushButton *pushButton_settings;
    QLabel *labelTableText_2;

    void setupUi(QWidget *TableControl)
    {
        if (TableControl->objectName().isEmpty())
            TableControl->setObjectName(QString::fromUtf8("TableControl"));
        TableControl->resize(1056, 769);
        TableControl->setAutoFillBackground(false);
        TableControl->setStyleSheet(QString::fromUtf8("QWidget,QFrame\n"
"{\n"
"background-color: #FFFFFF;\n"
"}"));
        groupBox = new QGroupBox(TableControl);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(60, 420, 311, 131));
        groupBox->setMinimumSize(QSize(0, 80));
        radioButton_BackMeasurements = new QRadioButton(groupBox);
        radioButton_BackMeasurements->setObjectName(QString::fromUtf8("radioButton_BackMeasurements"));
        radioButton_BackMeasurements->setGeometry(QRect(10, 10, 291, 51));
        QFont font;
        font.setPointSize(12);
        radioButton_BackMeasurements->setFont(font);
        radioButton_BackMeasurements->setStyleSheet(QString::fromUtf8(""));
        radioButton_BackMeasurements->setChecked(false);
        radioButton_FrontMeasurements = new QRadioButton(groupBox);
        radioButton_FrontMeasurements->setObjectName(QString::fromUtf8("radioButton_FrontMeasurements"));
        radioButton_FrontMeasurements->setGeometry(QRect(10, 70, 291, 50));
        radioButton_FrontMeasurements->setMinimumSize(QSize(0, 50));
        radioButton_FrontMeasurements->setFont(font);
        radioButton_FrontMeasurements->setChecked(true);
        lineEdit_ProfileBack = new QLineEdit(groupBox);
        lineEdit_ProfileBack->setObjectName(QString::fromUtf8("lineEdit_ProfileBack"));
        lineEdit_ProfileBack->setGeometry(QRect(80, 20, 211, 21));
        lineEdit_ProfileFront = new QLineEdit(groupBox);
        lineEdit_ProfileFront->setObjectName(QString::fromUtf8("lineEdit_ProfileFront"));
        lineEdit_ProfileFront->setGeometry(QRect(80, 80, 211, 21));
        checkBox_xCorr = new QCheckBox(TableControl);
        checkBox_xCorr->setObjectName(QString::fromUtf8("checkBox_xCorr"));
        checkBox_xCorr->setGeometry(QRect(80, 120, 193, 22));
        checkBox_xCorr->setFont(font);
        checkBox_xCorr->setChecked(false);
        checkBox_AutoDetectPorts = new QCheckBox(TableControl);
        checkBox_AutoDetectPorts->setObjectName(QString::fromUtf8("checkBox_AutoDetectPorts"));
        checkBox_AutoDetectPorts->setGeometry(QRect(530, 218, 193, 22));
        checkBox_AutoDetectPorts->setFont(font);
        checkBox_AutoDetectPorts->setChecked(true);
        checkBox_displayPlots = new QCheckBox(TableControl);
        checkBox_displayPlots->setObjectName(QString::fromUtf8("checkBox_displayPlots"));
        checkBox_displayPlots->setGeometry(QRect(530, 168, 193, 22));
        checkBox_displayPlots->setFont(font);
        checkBox_displayPlots->setChecked(true);
        checkBox_FFT = new QCheckBox(TableControl);
        checkBox_FFT->setObjectName(QString::fromUtf8("checkBox_FFT"));
        checkBox_FFT->setGeometry(QRect(80, 170, 193, 22));
        checkBox_FFT->setFont(font);
        checkBox_LoadConfig = new QCheckBox(TableControl);
        checkBox_LoadConfig->setObjectName(QString::fromUtf8("checkBox_LoadConfig"));
        checkBox_LoadConfig->setGeometry(QRect(530, 118, 193, 22));
        checkBox_LoadConfig->setFont(font);
        checkBox_SaveData = new QCheckBox(TableControl);
        checkBox_SaveData->setObjectName(QString::fromUtf8("checkBox_SaveData"));
        checkBox_SaveData->setGeometry(QRect(80, 220, 193, 22));
        checkBox_SaveData->setFont(font);
        groupBox_2 = new QGroupBox(TableControl);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(60, 260, 311, 151));
        lineEdit_data_port = new QLineEdit(groupBox_2);
        lineEdit_data_port->setObjectName(QString::fromUtf8("lineEdit_data_port"));
        lineEdit_data_port->setGeometry(QRect(30, 120, 261, 21));
        lineEdit_UART_port = new QLineEdit(groupBox_2);
        lineEdit_UART_port->setObjectName(QString::fromUtf8("lineEdit_UART_port"));
        lineEdit_UART_port->setGeometry(QRect(30, 50, 261, 21));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 131, 31));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        label->setPalette(palette);
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 80, 131, 31));
        pushButton_Icon = new QPushButton(TableControl);
        pushButton_Icon->setObjectName(QString::fromUtf8("pushButton_Icon"));
        pushButton_Icon->setGeometry(QRect(500, 270, 341, 281));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_Icon->sizePolicy().hasHeightForWidth());
        pushButton_Icon->setSizePolicy(sizePolicy);
        pushButton_Icon->setAutoFillBackground(false);
        pushButton_Icon->setText(QString::fromUtf8(""));
        pushButton_Icon->setIconSize(QSize(300, 135));
        pushButton_Icon->setFlat(true);
        pushButton_start = new QPushButton(TableControl);
        pushButton_start->setObjectName(QString::fromUtf8("pushButton_start"));
        pushButton_start->setGeometry(QRect(100, 580, 151, 41));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_start->sizePolicy().hasHeightForWidth());
        pushButton_start->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_start->setFont(font1);
        pushButton_pause = new QPushButton(TableControl);
        pushButton_pause->setObjectName(QString::fromUtf8("pushButton_pause"));
        pushButton_pause->setGeometry(QRect(260, 580, 151, 41));
        pushButton_pause->setFont(font1);
        pushButton_stop = new QPushButton(TableControl);
        pushButton_stop->setObjectName(QString::fromUtf8("pushButton_stop"));
        pushButton_stop->setGeometry(QRect(420, 580, 151, 41));
        sizePolicy1.setHeightForWidth(pushButton_stop->sizePolicy().hasHeightForWidth());
        pushButton_stop->setSizePolicy(sizePolicy1);
        pushButton_stop->setFont(font1);
        pushButton_Refresh = new QPushButton(TableControl);
        pushButton_Refresh->setObjectName(QString::fromUtf8("pushButton_Refresh"));
        pushButton_Refresh->setGeometry(QRect(580, 580, 151, 41));
        sizePolicy1.setHeightForWidth(pushButton_Refresh->sizePolicy().hasHeightForWidth());
        pushButton_Refresh->setSizePolicy(sizePolicy1);
        pushButton_Refresh->setFont(font1);
        pushButton_settings = new QPushButton(TableControl);
        pushButton_settings->setObjectName(QString::fromUtf8("pushButton_settings"));
        pushButton_settings->setGeometry(QRect(740, 580, 151, 41));
        sizePolicy1.setHeightForWidth(pushButton_settings->sizePolicy().hasHeightForWidth());
        pushButton_settings->setSizePolicy(sizePolicy1);
        pushButton_settings->setFont(font1);
        labelTableText_2 = new QLabel(TableControl);
        labelTableText_2->setObjectName(QString::fromUtf8("labelTableText_2"));
        labelTableText_2->setGeometry(QRect(10, 40, 686, 71));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush2(QColor(0, 0, 0, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        QBrush brush3(QColor(255, 255, 255, 127));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        QBrush brush4(QColor(231, 231, 231, 128));
        brush4.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        labelTableText_2->setPalette(palette1);
        QFont font2;
        font2.setPointSize(30);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        labelTableText_2->setFont(font2);
        labelTableText_2->setLayoutDirection(Qt::LeftToRight);
        labelTableText_2->setAutoFillBackground(false);

        retranslateUi(TableControl);

        QMetaObject::connectSlotsByName(TableControl);
    } // setupUi

    void retranslateUi(QWidget *TableControl)
    {
        TableControl->setWindowTitle(QCoreApplication::translate("TableControl", "Form", nullptr));
        groupBox->setTitle(QString());
        radioButton_BackMeasurements->setText(QCoreApplication::translate("TableControl", "Back", nullptr));
        radioButton_FrontMeasurements->setText(QCoreApplication::translate("TableControl", "Front", nullptr));
        checkBox_xCorr->setText(QCoreApplication::translate("TableControl", "\344\275\277\347\224\250\346\227\266\345\237\237(Time-Domain)", nullptr));
        checkBox_AutoDetectPorts->setText(QCoreApplication::translate("TableControl", "\350\207\252\345\212\250\346\240\241\345\207\206\344\270\262\345\217\243\346\263\242\347\211\271\347\216\207", nullptr));
        checkBox_displayPlots->setText(QCoreApplication::translate("TableControl", "\350\277\220\350\241\214\346\225\260\346\215\256\345\235\220\346\240\207", nullptr));
        checkBox_FFT->setText(QCoreApplication::translate("TableControl", "\344\275\277\347\224\250\351\242\221\345\237\237(Freq-Domain)", nullptr));
        checkBox_LoadConfig->setText(QCoreApplication::translate("TableControl", "\345\212\240\350\275\275\351\205\215\347\275\256\346\226\207\344\273\266", nullptr));
        checkBox_SaveData->setText(QCoreApplication::translate("TableControl", "\344\277\235\345\255\230\346\225\260\346\215\256", nullptr));
        groupBox_2->setTitle(QString());
        label->setText(QCoreApplication::translate("TableControl", "\350\256\276\345\244\207\347\253\257\345\217\243", nullptr));
        label_2->setText(QCoreApplication::translate("TableControl", "\346\225\260\346\215\256\347\253\257\345\217\243", nullptr));
        pushButton_start->setText(QCoreApplication::translate("TableControl", "\345\274\200\345\247\213", nullptr));
        pushButton_pause->setText(QCoreApplication::translate("TableControl", "\346\232\202\345\201\234", nullptr));
        pushButton_stop->setText(QCoreApplication::translate("TableControl", "\345\201\234\346\255\242", nullptr));
        pushButton_Refresh->setText(QCoreApplication::translate("TableControl", "\345\210\267\346\226\260", nullptr));
        pushButton_settings->setText(QCoreApplication::translate("TableControl", "\350\256\276\347\275\256", nullptr));
        labelTableText_2->setText(QCoreApplication::translate("TableControl", "                  \347\263\273\347\273\237\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TableControl: public Ui_TableControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLECONTROL_H
