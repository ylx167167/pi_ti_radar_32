#ifndef RADARCONFIG_H
#define RADARCONFIG_H
#include <QString>
#include <QSerialPortInfo>

enum gui_status
{
    gui_running,
    gui_stopped,
    gui_paused
};

struct Drive_INFO{
             QString Drive;//drive
             QString Did;      //驾驶员编号
             QString Vid;      //汽车编号
             qint64 Tim;   //时间戳
             int Action;  //上车（0）
             QString State;   //疲劳状态，null

        };
extern Drive_INFO Drive;


class RadarConfig
{
public:
    static RadarConfig* GetInstance();
    uint32_t localCount;
    QSerialPort *serialRead, *serialWrite;
    QString dataPortNum, userPortNum;   // Serial Port configuration
    gui_status current_gui_status;
    bool FlagSerialPort_Connected, dataPort_Connected, userPort_Connected;
    bool serialPortFound_Flag; // "True" if Serial port found

    bool is_checkBox_xCorr;
    bool is_checkBox_FFT;
    bool is_radioButton_BackMeasurements;
    bool is_checkBox_LoadConfig;
    bool is_checkBox_displayPlots;
    bool is_checkBox_AutoDetectPorts;
    bool is_checkBox_SaveData;
    bool is_radioButton_FrontMeasurements;

    QString tx_lineEdit_ProfileFront;
    QString tx_lineEdit_ProfileBack;

    QString tx_lineEdit_UART_port;
    QString tx_lineEdit_data_port;
    void set_tx_lineEdit_UART_port(const QString vartx);
    void set_tx_lineEdit_data_port(const QString vartx);
    void set_tx_lineEdit_ProfileFront(const QString vartx);
    void set_tx_lineEdit_ProfileBack(const QString vartx);

    bool serialPortFind();
    bool change_test;
private:
    static RadarConfig* m_instance;
    RadarConfig();
};


#endif // RADARCONFIG_H
