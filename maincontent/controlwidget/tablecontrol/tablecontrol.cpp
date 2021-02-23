/*****************************************
 * 作者: YYC
 * 日期: 2020-04-26
 * 功能：表格
 * ***************************************/
#include "tablecontrol.h"
#include "ui_tablecontrol.h"
#include <QtGui>
#include <maincontent/controlwidget/radarcontrol/radarcontrol.h>


TableControl* TableControl::m_instatnce=nullptr;

TableControl* TableControl::GetInstance(){
    if( TableControl::m_instatnce == nullptr)
    {
        TableControl::m_instatnce = new TableControl();
    }
    return TableControl::m_instatnce;
}

// 构造函数
TableControl::TableControl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TableControl)
{
    ui->setupUi(this);
    this->set_thiswidgetui();
    ui->checkBox_LoadConfig->setChecked(true);
    RadarConfig::GetInstance()->localCount = 0;
    RadarConfig::GetInstance()->is_checkBox_FFT=ui->checkBox_FFT->isChecked();
    RadarConfig::GetInstance()->is_checkBox_xCorr=ui->checkBox_xCorr->isChecked();
    RadarConfig::GetInstance()->is_checkBox_LoadConfig=ui->checkBox_LoadConfig->isChecked();
    RadarConfig::GetInstance()->is_checkBox_SaveData=ui->checkBox_SaveData->isChecked();
    RadarConfig::GetInstance()->is_radioButton_BackMeasurements=ui->radioButton_BackMeasurements->isChecked();
    RadarConfig::GetInstance()->is_checkBox_displayPlots=ui->checkBox_displayPlots->isChecked();
    RadarConfig::GetInstance()->is_checkBox_AutoDetectPorts=ui->checkBox_AutoDetectPorts->isChecked();
    RadarConfig::GetInstance()->is_radioButton_FrontMeasurements=ui->radioButton_FrontMeasurements->isChecked();
    if(RadarConfig::GetInstance()->is_checkBox_AutoDetectPorts)
    {
        /* Serial Port Settings */
        RadarConfig::GetInstance()->serialPortFound_Flag = RadarConfig::GetInstance()->serialPortFind();
        ui->lineEdit_UART_port->setText(RadarConfig::GetInstance()->tx_lineEdit_UART_port);
        ui->lineEdit_data_port->setText(RadarConfig::GetInstance()->tx_lineEdit_data_port);
        if (RadarConfig::GetInstance()->serialPortFound_Flag)
        {
            qDebug() << "Serial Port Found";
            qDebug() << "Data Port Number is" << RadarConfig::GetInstance()->dataPortNum;
            qDebug() << "User Port Number is" << RadarConfig::GetInstance()->userPortNum;
        }
    }


    ui->lineEdit_ProfileBack->setText("xwr1642_profile_VitalSigns_20fps_Back.cfg");
    ui->lineEdit_ProfileFront->setText("xwr1642_profile_VitalSigns_20fps_Front.cfg");
    RadarConfig::GetInstance()->set_tx_lineEdit_ProfileFront("xwr1642_profile_VitalSigns_20fps_Front.cfg");
    RadarConfig::GetInstance()->set_tx_lineEdit_ProfileBack("xwr1642_profile_VitalSigns_20fps_Front.cfg");
    connect(this, SIGNAL(gui_statusChanged()), this, SLOT(gui_statusUpdate()));
//    ui->radioButton_BackMeasurements->
    this->initValue();

}

// 析构函数
TableControl::~TableControl()
{
    delete ui;
}

// 初始化数据
void TableControl::initValue()
{

}



void TableControl::on_pushButton_start_clicked()
{
    if(this->check_radarconfig() == 0)
    {
     printf("error");
    }
    if (RadarConfig::GetInstance()->current_gui_status == gui_paused)
    {
        RadarConfig::GetInstance()->current_gui_status = gui_running;
        emit gui_statusChanged();
        return;
    }
    RadarControl::GetInstance()->on_pushButton_start_clicked();//调用radar界面on_pushButton_start_clicked
    if(RadarConfig::GetInstance()->is_checkBox_AutoDetectPorts){
       if(!RadarConfig::GetInstance()->FlagSerialPort_Connected){
        ui->lineEdit_UART_port->setText(RadarConfig::GetInstance()->tx_lineEdit_UART_port);
        ui->lineEdit_data_port->setText(RadarConfig::GetInstance()->tx_lineEdit_data_port);
       }
    }
    RadarConfig::GetInstance()->current_gui_status = gui_running;
    emit gui_statusChanged();
}

void TableControl::on_pushButton_stop_clicked()
{
     ui->checkBox_LoadConfig->setChecked(true);
     if(this->check_radarconfig() == 0)
     {
      printf("error");
     }
     RadarControl::GetInstance()->on_pushButton_stop_clicked();
     emit gui_statusChanged();
}
void TableControl::on_pushButton_pause_clicked()
{
    RadarConfig::GetInstance()->localCount = 0;
    RadarControl::GetInstance()->on_pushButton_pause_clicked();
    RadarConfig::GetInstance()->current_gui_status = gui_paused;
    emit gui_statusChanged();
}



void TableControl::on_pushButton_Refresh_clicked()
{
    RadarControl::GetInstance()->on_pushButton_Refresh_clicked();
}

void TableControl::on_pushButton_settings_clicked()
{
    RadarControl::GetInstance()->on_pushButton_settings_clicked();
}

void TableControl::set_tx_lineEdit_UART_port(const QString vartx)
{
   ui->lineEdit_UART_port->setText(vartx);
}
void TableControl::set_tx_lineEdit_data_port(const QString vartx){
   ui->lineEdit_data_port->setText(vartx);
}

int TableControl::check_radarconfig(){
    RadarConfig::GetInstance()->is_checkBox_FFT=ui->checkBox_FFT->isChecked();
    RadarConfig::GetInstance()->is_checkBox_xCorr=ui->checkBox_xCorr->isChecked();
    RadarConfig::GetInstance()->is_checkBox_LoadConfig=ui->checkBox_LoadConfig->isChecked();
    RadarConfig::GetInstance()->is_checkBox_SaveData=ui->checkBox_SaveData->isChecked();
    RadarConfig::GetInstance()->is_radioButton_BackMeasurements=ui->radioButton_BackMeasurements->isChecked();
    RadarConfig::GetInstance()->is_checkBox_displayPlots=ui->checkBox_displayPlots->isChecked();
    RadarConfig::GetInstance()->is_checkBox_AutoDetectPorts=ui->checkBox_AutoDetectPorts->isChecked();
    RadarConfig::GetInstance()->is_radioButton_FrontMeasurements=ui->radioButton_FrontMeasurements->isChecked();
    RadarConfig::GetInstance()->tx_lineEdit_UART_port=ui->lineEdit_UART_port->text();
    RadarConfig::GetInstance()->tx_lineEdit_data_port=ui->lineEdit_data_port->text();
    RadarConfig::GetInstance()->tx_lineEdit_ProfileBack=ui->lineEdit_ProfileBack->text();
    RadarConfig::GetInstance()->tx_lineEdit_ProfileFront=ui->lineEdit_ProfileFront->text();
    return 0;
}
void TableControl::gui_statusUpdate(){
    if (RadarConfig::GetInstance()->current_gui_status == gui_running)
    {
        ui->pushButton_start->setStyleSheet("background-color: red");
        ui->pushButton_stop->setStyleSheet("background-color: none");
        ui->pushButton_pause->setStyleSheet("background-color: none");
    }

    if (RadarConfig::GetInstance()->current_gui_status == gui_stopped)
    {
        ui->pushButton_stop->setStyleSheet("background-color: red");
        ui->pushButton_start->setStyleSheet("background-color: none");
        ui->pushButton_pause->setStyleSheet("background-color: none");
//        statusBar()->showMessage(tr("Sensor Stopped"));
        qDebug() << "Sensor is Stopped";
//        statusBar()->showMessage(tr("Sensor Stopped"));
    }
    if (RadarConfig::GetInstance()->current_gui_status == gui_paused)
    {
        ui->pushButton_stop->setStyleSheet("background-color: none");
        ui->pushButton_start->setStyleSheet("background-color: none");
        ui->pushButton_pause->setStyleSheet("background-color: red");
//        statusBar()->showMessage(tr("GUI is Paused Stopped"));
    }
}

void TableControl::set_logoButoonIcon(){
    QPixmap pic(":/res/res/image/other/cpu-2103856.png");
    if (pic.isNull())
    {
        qDebug() << "logo not Found";
    }
    else
    {
       ui->pushButton_Icon->setIcon(QIcon(pic));
    }
}


void TableControl::set_thiswidgetui(){
    this->setStyleSheet("background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #283345,stop:0.5 #151c26 ,stop:1 #020407)");
    ui->pushButton_start->setStyleSheet("background-color: rgb(255, 128, 64);");
    ui->pushButton_stop->setStyleSheet("background-color: rgb(255, 128, 64);");
    ui->pushButton_pause->setStyleSheet("background-color: rgb(255, 128, 64);");
    ui->pushButton_Refresh->setStyleSheet("background-color: rgb(255, 128, 64);");
    ui->pushButton_settings->setStyleSheet("background-color: rgb(255, 128, 64);");

    ui->lineEdit_UART_port->setStyleSheet("background-color: rgb(255, 255, 255);");
    ui->lineEdit_data_port->setStyleSheet("background-color: rgb(255, 255, 255);");
    ui->lineEdit_ProfileBack->setStyleSheet("background-color: rgb(255, 255, 255);");
    ui->lineEdit_ProfileFront->setStyleSheet("background-color: rgb(255, 255, 255);");

    ui->labelTableText_2->setAttribute(Qt::WA_TranslucentBackground);//设置背景 为透明
    ui->labelTableText_2->setStyleSheet("color: #ffffff");
    ui->checkBox_FFT->setStyleSheet("color: #ffffff");
    ui->checkBox_xCorr->setStyleSheet("color: #ffffff");
    ui->checkBox_SaveData->setStyleSheet("color: #ffffff");
    ui->checkBox_LoadConfig->setStyleSheet("color: #ffffff");
    ui->checkBox_displayPlots->setStyleSheet("color: #ffffff");
    ui->checkBox_AutoDetectPorts->setStyleSheet("color: #ffffff");

//    ui->checkBox_FFT->setAttribute();

    ui->label->setStyleSheet("color: #ffffff");
    ui->label_2->setStyleSheet("color: #ffffff");
    ui->label->setAttribute(Qt::WA_TranslucentBackground);
    ui->label_2->setAttribute(Qt::WA_TranslucentBackground);


    ui->radioButton_BackMeasurements->setStyleSheet("color: #ffffff");
    ui->radioButton_FrontMeasurements->setStyleSheet("color: #ffffff");
//    ui->radioButton_BackMeasurements->setAttribute(Qt::WA_TranslucentBackground, true);
//    ui->radioButton_FrontMeasurements->setAttribute(Qt::WA_TranslucentBackground, true);
    this->set_logoButoonIcon();
}

