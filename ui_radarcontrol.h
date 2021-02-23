/********************************************************************************
** Form generated from reading UI file 'radarcontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RADARCONTROL_H
#define UI_RADARCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qcustomplot/qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_RadarControl
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_BreathingRate;
    QLCDNumber *lcdNumber_Breathingrate;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_HeartRate;
    QLCDNumber *lcdNumber_HeartRate;
    QHBoxLayout *horizontalLayout_3;
    QCustomPlot *BreathingWfmPlot;
    QCustomPlot *heartWfmPlot;
    QHBoxLayout *horizontalLayout_4;
    QCustomPlot *phaseWfmPlot;
    QCustomPlot *plot_RangeProfile;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_Count;
    QLCDNumber *lcdNumber_FrameCount;
    QLabel *label_BR_pk;
    QLCDNumber *lcdNumber_Breath_pk;
    QLabel *label_5;
    QLCDNumber *lcdNumber_Breath_FT;
    QLCDNumber *lcdNumber_Breath_xCorr;
    QLCDNumber *lcdNumber_breathRate_HarmEnergy;
    QLabel *label_7;
    QLCDNumber *lcdNumber_CM_Breath;
    QLCDNumber *lcdNumber_CM_Breath_xCorr;
    QLCDNumber *lcdNumber_reserved2;
    QLabel *label;
    QLCDNumber *lcdNumber_BreathEnergy;
    QLabel *label_9;
    QDoubleSpinBox *SpinBox_TH_Breath;
    QLabel *label_4;
    QLCDNumber *lcdNumber_RCS;
    QGridLayout *gridLayout;
    QLCDNumber *lcdNumber_Heart_FT;
    QLCDNumber *lcdNumber_Heart_FT_4Hz;
    QLCDNumber *lcdNumber_Display4;
    QLCDNumber *lcdNumber_Index;
    QLCDNumber *lcdNumber_Heart_pk;
    QLCDNumber *lcdNumber_CM_Heart;
    QLabel *label_HR_pk;
    QLabel *label_11;
    QLCDNumber *lcdNumber_CM_Heart_xCorr;
    QDoubleSpinBox *SpinBox_RCS;
    QLabel *label_8;
    QLabel *label_10;
    QDoubleSpinBox *SpinBox_TH_Heart;
    QLabel *label_6;
    QLCDNumber *lcdNumber_Heart_xCorr;
    QLabel *label_3;
    QLCDNumber *lcdNumber_HeartEnergy;
    QLabel *label_Index;
    QWidget *widget;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QLCDNumber *lcdNumber_Display3;
    QSplitter *splitter_2;
    QLCDNumber *lcdNumber_ReliabilityMetric;

    void setupUi(QWidget *RadarControl)
    {
        if (RadarControl->objectName().isEmpty())
            RadarControl->setObjectName(QString::fromUtf8("RadarControl"));
        RadarControl->resize(1388, 741);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RadarControl->sizePolicy().hasHeightForWidth());
        RadarControl->setSizePolicy(sizePolicy);
        RadarControl->setStyleSheet(QString::fromUtf8("QWidget,QFrame\n"
"{\n"
"background-color: #1A1A1A;\n"
"}"));
        layoutWidget = new QWidget(RadarControl);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(260, 0, 1121, 671));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_BreathingRate = new QLabel(layoutWidget);
        label_BreathingRate->setObjectName(QString::fromUtf8("label_BreathingRate"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(40);
        font.setBold(true);
        font.setWeight(75);
        label_BreathingRate->setFont(font);
        label_BreathingRate->setAutoFillBackground(false);
        label_BreathingRate->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_4->addWidget(label_BreathingRate);

        lcdNumber_Breathingrate = new QLCDNumber(layoutWidget);
        lcdNumber_Breathingrate->setObjectName(QString::fromUtf8("lcdNumber_Breathingrate"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lcdNumber_Breathingrate->sizePolicy().hasHeightForWidth());
        lcdNumber_Breathingrate->setSizePolicy(sizePolicy1);
        lcdNumber_Breathingrate->setMinimumSize(QSize(0, 70));
        lcdNumber_Breathingrate->setLayoutDirection(Qt::LeftToRight);
        lcdNumber_Breathingrate->setFrameShape(QFrame::Box);
        lcdNumber_Breathingrate->setSegmentStyle(QLCDNumber::Filled);

        verticalLayout_4->addWidget(lcdNumber_Breathingrate);


        horizontalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_HeartRate = new QLabel(layoutWidget);
        label_HeartRate->setObjectName(QString::fromUtf8("label_HeartRate"));
        label_HeartRate->setFont(font);
        label_HeartRate->setAutoFillBackground(false);
        label_HeartRate->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_3->addWidget(label_HeartRate);

        lcdNumber_HeartRate = new QLCDNumber(layoutWidget);
        lcdNumber_HeartRate->setObjectName(QString::fromUtf8("lcdNumber_HeartRate"));
        sizePolicy1.setHeightForWidth(lcdNumber_HeartRate->sizePolicy().hasHeightForWidth());
        lcdNumber_HeartRate->setSizePolicy(sizePolicy1);
        lcdNumber_HeartRate->setMinimumSize(QSize(0, 70));

        verticalLayout_3->addWidget(lcdNumber_HeartRate);


        horizontalLayout_5->addLayout(verticalLayout_3);


        gridLayout_3->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        BreathingWfmPlot = new QCustomPlot(layoutWidget);
        BreathingWfmPlot->setObjectName(QString::fromUtf8("BreathingWfmPlot"));
        sizePolicy1.setHeightForWidth(BreathingWfmPlot->sizePolicy().hasHeightForWidth());
        BreathingWfmPlot->setSizePolicy(sizePolicy1);
        BreathingWfmPlot->setMinimumSize(QSize(471, 250));

        horizontalLayout_3->addWidget(BreathingWfmPlot);

        heartWfmPlot = new QCustomPlot(layoutWidget);
        heartWfmPlot->setObjectName(QString::fromUtf8("heartWfmPlot"));
        sizePolicy1.setHeightForWidth(heartWfmPlot->sizePolicy().hasHeightForWidth());
        heartWfmPlot->setSizePolicy(sizePolicy1);
        heartWfmPlot->setMinimumSize(QSize(471, 250));

        horizontalLayout_3->addWidget(heartWfmPlot);


        gridLayout_3->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        phaseWfmPlot = new QCustomPlot(layoutWidget);
        phaseWfmPlot->setObjectName(QString::fromUtf8("phaseWfmPlot"));
        sizePolicy1.setHeightForWidth(phaseWfmPlot->sizePolicy().hasHeightForWidth());
        phaseWfmPlot->setSizePolicy(sizePolicy1);
        phaseWfmPlot->setMinimumSize(QSize(560, 231));
        phaseWfmPlot->setMaximumSize(QSize(559, 16777215));

        horizontalLayout_4->addWidget(phaseWfmPlot);

        plot_RangeProfile = new QCustomPlot(layoutWidget);
        plot_RangeProfile->setObjectName(QString::fromUtf8("plot_RangeProfile"));
        sizePolicy1.setHeightForWidth(plot_RangeProfile->sizePolicy().hasHeightForWidth());
        plot_RangeProfile->setSizePolicy(sizePolicy1);
        plot_RangeProfile->setMinimumSize(QSize(391, 231));
        plot_RangeProfile->setMaximumSize(QSize(559, 16777215));

        horizontalLayout_4->addWidget(plot_RangeProfile);


        gridLayout_3->addLayout(horizontalLayout_4, 2, 0, 1, 1);

        layoutWidget1 = new QWidget(RadarControl);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(259, 680, 1127, 58));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_Count = new QLabel(layoutWidget1);
        label_Count->setObjectName(QString::fromUtf8("label_Count"));
        label_Count->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_Count);

        lcdNumber_FrameCount = new QLCDNumber(layoutWidget1);
        lcdNumber_FrameCount->setObjectName(QString::fromUtf8("lcdNumber_FrameCount"));
        lcdNumber_FrameCount->setDigitCount(8);
        lcdNumber_FrameCount->setProperty("intValue", QVariant(0));

        horizontalLayout->addWidget(lcdNumber_FrameCount);

        label_BR_pk = new QLabel(layoutWidget1);
        label_BR_pk->setObjectName(QString::fromUtf8("label_BR_pk"));
        label_BR_pk->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_BR_pk);

        lcdNumber_Breath_pk = new QLCDNumber(layoutWidget1);
        lcdNumber_Breath_pk->setObjectName(QString::fromUtf8("lcdNumber_Breath_pk"));

        horizontalLayout->addWidget(lcdNumber_Breath_pk);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_5);

        lcdNumber_Breath_FT = new QLCDNumber(layoutWidget1);
        lcdNumber_Breath_FT->setObjectName(QString::fromUtf8("lcdNumber_Breath_FT"));

        horizontalLayout->addWidget(lcdNumber_Breath_FT);

        lcdNumber_Breath_xCorr = new QLCDNumber(layoutWidget1);
        lcdNumber_Breath_xCorr->setObjectName(QString::fromUtf8("lcdNumber_Breath_xCorr"));

        horizontalLayout->addWidget(lcdNumber_Breath_xCorr);

        lcdNumber_breathRate_HarmEnergy = new QLCDNumber(layoutWidget1);
        lcdNumber_breathRate_HarmEnergy->setObjectName(QString::fromUtf8("lcdNumber_breathRate_HarmEnergy"));

        horizontalLayout->addWidget(lcdNumber_breathRate_HarmEnergy);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_7);

        lcdNumber_CM_Breath = new QLCDNumber(layoutWidget1);
        lcdNumber_CM_Breath->setObjectName(QString::fromUtf8("lcdNumber_CM_Breath"));

        horizontalLayout->addWidget(lcdNumber_CM_Breath);

        lcdNumber_CM_Breath_xCorr = new QLCDNumber(layoutWidget1);
        lcdNumber_CM_Breath_xCorr->setObjectName(QString::fromUtf8("lcdNumber_CM_Breath_xCorr"));

        horizontalLayout->addWidget(lcdNumber_CM_Breath_xCorr);

        lcdNumber_reserved2 = new QLCDNumber(layoutWidget1);
        lcdNumber_reserved2->setObjectName(QString::fromUtf8("lcdNumber_reserved2"));

        horizontalLayout->addWidget(lcdNumber_reserved2);

        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        lcdNumber_BreathEnergy = new QLCDNumber(layoutWidget1);
        lcdNumber_BreathEnergy->setObjectName(QString::fromUtf8("lcdNumber_BreathEnergy"));

        horizontalLayout->addWidget(lcdNumber_BreathEnergy);

        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_9);

        SpinBox_TH_Breath = new QDoubleSpinBox(layoutWidget1);
        SpinBox_TH_Breath->setObjectName(QString::fromUtf8("SpinBox_TH_Breath"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(SpinBox_TH_Breath->sizePolicy().hasHeightForWidth());
        SpinBox_TH_Breath->setSizePolicy(sizePolicy2);
        SpinBox_TH_Breath->setDecimals(3);
        SpinBox_TH_Breath->setMaximum(1000.000000000000000);
        SpinBox_TH_Breath->setSingleStep(0.010000000000000);
        SpinBox_TH_Breath->setValue(0.005000000000000);

        horizontalLayout->addWidget(SpinBox_TH_Breath);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_4);

        lcdNumber_RCS = new QLCDNumber(layoutWidget1);
        lcdNumber_RCS->setObjectName(QString::fromUtf8("lcdNumber_RCS"));

        horizontalLayout->addWidget(lcdNumber_RCS);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lcdNumber_Heart_FT = new QLCDNumber(layoutWidget1);
        lcdNumber_Heart_FT->setObjectName(QString::fromUtf8("lcdNumber_Heart_FT"));

        gridLayout->addWidget(lcdNumber_Heart_FT, 0, 5, 1, 1);

        lcdNumber_Heart_FT_4Hz = new QLCDNumber(layoutWidget1);
        lcdNumber_Heart_FT_4Hz->setObjectName(QString::fromUtf8("lcdNumber_Heart_FT_4Hz"));

        gridLayout->addWidget(lcdNumber_Heart_FT_4Hz, 0, 7, 1, 1);

        lcdNumber_Display4 = new QLCDNumber(layoutWidget1);
        lcdNumber_Display4->setObjectName(QString::fromUtf8("lcdNumber_Display4"));

        gridLayout->addWidget(lcdNumber_Display4, 0, 11, 1, 1);

        lcdNumber_Index = new QLCDNumber(layoutWidget1);
        lcdNumber_Index->setObjectName(QString::fromUtf8("lcdNumber_Index"));
        lcdNumber_Index->setDigitCount(5);

        gridLayout->addWidget(lcdNumber_Index, 0, 1, 1, 1);

        lcdNumber_Heart_pk = new QLCDNumber(layoutWidget1);
        lcdNumber_Heart_pk->setObjectName(QString::fromUtf8("lcdNumber_Heart_pk"));

        gridLayout->addWidget(lcdNumber_Heart_pk, 0, 3, 1, 1);

        lcdNumber_CM_Heart = new QLCDNumber(layoutWidget1);
        lcdNumber_CM_Heart->setObjectName(QString::fromUtf8("lcdNumber_CM_Heart"));

        gridLayout->addWidget(lcdNumber_CM_Heart, 0, 9, 1, 1);

        label_HR_pk = new QLabel(layoutWidget1);
        label_HR_pk->setObjectName(QString::fromUtf8("label_HR_pk"));
        label_HR_pk->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_HR_pk, 0, 2, 1, 1);

        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_11, 0, 16, 1, 1);

        lcdNumber_CM_Heart_xCorr = new QLCDNumber(layoutWidget1);
        lcdNumber_CM_Heart_xCorr->setObjectName(QString::fromUtf8("lcdNumber_CM_Heart_xCorr"));

        gridLayout->addWidget(lcdNumber_CM_Heart_xCorr, 0, 10, 1, 1);

        SpinBox_RCS = new QDoubleSpinBox(layoutWidget1);
        SpinBox_RCS->setObjectName(QString::fromUtf8("SpinBox_RCS"));
        sizePolicy2.setHeightForWidth(SpinBox_RCS->sizePolicy().hasHeightForWidth());
        SpinBox_RCS->setSizePolicy(sizePolicy2);
        SpinBox_RCS->setDecimals(0);
        SpinBox_RCS->setMaximum(10000.000000000000000);
        SpinBox_RCS->setValue(500.000000000000000);

        gridLayout->addWidget(SpinBox_RCS, 0, 17, 1, 1);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 0, 8, 1, 1);

        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_10, 0, 14, 1, 1);

        SpinBox_TH_Heart = new QDoubleSpinBox(layoutWidget1);
        SpinBox_TH_Heart->setObjectName(QString::fromUtf8("SpinBox_TH_Heart"));
        sizePolicy2.setHeightForWidth(SpinBox_TH_Heart->sizePolicy().hasHeightForWidth());
        SpinBox_TH_Heart->setSizePolicy(sizePolicy2);
        SpinBox_TH_Heart->setDecimals(3);
        SpinBox_TH_Heart->setSingleStep(0.010000000000000);
        SpinBox_TH_Heart->setValue(0.000000000000000);

        gridLayout->addWidget(SpinBox_TH_Heart, 0, 15, 1, 1);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 0, 4, 1, 1);

        lcdNumber_Heart_xCorr = new QLCDNumber(layoutWidget1);
        lcdNumber_Heart_xCorr->setObjectName(QString::fromUtf8("lcdNumber_Heart_xCorr"));

        gridLayout->addWidget(lcdNumber_Heart_xCorr, 0, 6, 1, 1);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 0, 12, 1, 1);

        lcdNumber_HeartEnergy = new QLCDNumber(layoutWidget1);
        lcdNumber_HeartEnergy->setObjectName(QString::fromUtf8("lcdNumber_HeartEnergy"));

        gridLayout->addWidget(lcdNumber_HeartEnergy, 0, 13, 1, 1);

        label_Index = new QLabel(layoutWidget1);
        label_Index->setObjectName(QString::fromUtf8("label_Index"));
        label_Index->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_Index, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        widget = new QWidget(RadarControl);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 4, 251, 731));
        gridLayout_4 = new QGridLayout(widget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(0, 50));

        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(0, 50));

        gridLayout_4->addWidget(groupBox_2, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter = new QSplitter(widget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        lcdNumber_Display3 = new QLCDNumber(splitter);
        lcdNumber_Display3->setObjectName(QString::fromUtf8("lcdNumber_Display3"));
        lcdNumber_Display3->setLayoutDirection(Qt::LeftToRight);
        splitter->addWidget(lcdNumber_Display3);

        verticalLayout->addWidget(splitter);

        splitter_2 = new QSplitter(widget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        lcdNumber_ReliabilityMetric = new QLCDNumber(splitter_2);
        lcdNumber_ReliabilityMetric->setObjectName(QString::fromUtf8("lcdNumber_ReliabilityMetric"));
        splitter_2->addWidget(lcdNumber_ReliabilityMetric);

        verticalLayout->addWidget(splitter_2);


        gridLayout_4->addLayout(verticalLayout, 2, 0, 1, 1);


        retranslateUi(RadarControl);

        QMetaObject::connectSlotsByName(RadarControl);
    } // setupUi

    void retranslateUi(QWidget *RadarControl)
    {
        RadarControl->setWindowTitle(QCoreApplication::translate("RadarControl", "WayneYao_radar", nullptr));
        label_BreathingRate->setText(QCoreApplication::translate("RadarControl", "\345\221\274\345\220\270", nullptr));
        label_HeartRate->setText(QCoreApplication::translate("RadarControl", "\345\277\203\347\216\207", nullptr));
        label_Count->setText(QCoreApplication::translate("RadarControl", "Count", nullptr));
        label_BR_pk->setText(QCoreApplication::translate("RadarControl", "BR-pk", nullptr));
        label_5->setText(QCoreApplication::translate("RadarControl", "BR-FT", nullptr));
        label_7->setText(QCoreApplication::translate("RadarControl", "CM-Breath", nullptr));
        label->setText(QCoreApplication::translate("RadarControl", "Breath-Wfm", nullptr));
        label_9->setText(QCoreApplication::translate("RadarControl", "TH-Breath", nullptr));
        label_4->setText(QCoreApplication::translate("RadarControl", "RCS", nullptr));
        label_HR_pk->setText(QCoreApplication::translate("RadarControl", "HR-pk", nullptr));
        label_11->setText(QCoreApplication::translate("RadarControl", "TH-RCS", nullptr));
        label_8->setText(QCoreApplication::translate("RadarControl", "CM-Heart", nullptr));
        label_10->setText(QCoreApplication::translate("RadarControl", "TH-Heart", nullptr));
        label_6->setText(QCoreApplication::translate("RadarControl", "HR-FT", nullptr));
        label_3->setText(QCoreApplication::translate("RadarControl", "Heart-Wfm", nullptr));
        label_Index->setText(QCoreApplication::translate("RadarControl", "Index ", nullptr));
        groupBox->setTitle(QString());
        groupBox_2->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class RadarControl: public Ui_RadarControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RADARCONTROL_H
