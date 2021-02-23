#include "radarconfig.h"
#include <dialogsetting/dialogsettings.h>
RadarConfig* RadarConfig::m_instance = nullptr;
RadarConfig::RadarConfig()
{

}
RadarConfig* RadarConfig::GetInstance(){
    if( RadarConfig::m_instance == nullptr)
    {
        RadarConfig::m_instance = new RadarConfig();
    }

    return RadarConfig::m_instance;
}

void RadarConfig::set_tx_lineEdit_UART_port(const QString vartx)
{

   this->tx_lineEdit_UART_port=vartx;
}
void RadarConfig::set_tx_lineEdit_data_port(const QString vartx){
    this->tx_lineEdit_data_port=vartx;
}

void RadarConfig::set_tx_lineEdit_ProfileFront(const QString vartx){
    this->tx_lineEdit_ProfileFront=vartx;
}
void RadarConfig::set_tx_lineEdit_ProfileBack(const QString vartx){
    this->tx_lineEdit_ProfileBack=vartx;
}

bool RadarConfig::serialPortFind(){
    DialogSettings dialogBoxSerial;
    // Find available COM ports on the computer
    QString portNum;
    foreach (const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts())
    {
        portNum = serialPortInfo.portName();
        dialogBoxSerial.setDataComPortNum(portNum);
        dialogBoxSerial.setUserComPortNum(portNum);
    }

    RadarConfig::GetInstance()->dataPortNum = dialogBoxSerial.getDataComPortNum();
    RadarConfig::GetInstance()->userPortNum = dialogBoxSerial.getUserComPortNum();

    RadarConfig::GetInstance()->set_tx_lineEdit_UART_port(RadarConfig::GetInstance()->dataPortNum);
    RadarConfig::GetInstance()->set_tx_lineEdit_data_port(RadarConfig::GetInstance()->userPortNum);

//    ui->lineEdit_data_port->setText(RadarConfig::GetInstance()->dataPortNum);
//    ui->lineEdit_UART_port->setText(RadarConfig::GetInstance()->userPortNum);
    if (portNum.isEmpty())
        return 0;
    else
        return 1;
}
