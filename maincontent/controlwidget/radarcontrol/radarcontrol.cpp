#include "radarcontrol.h"
#include "ui_radarcontrol.h"
#include <QDebug>
#include <QtEndian>
#include <QDialog>
#include <QSerialPortInfo>
#include <QFile>
#include <QElapsedTimer> // This class provides a fast way to calculate elapsed times
#include "dialogsetting/dialogsettings.h"
#include <QMessageBox>

float BREATHING_PLOT_MAX_YAXIS;
float HEART_PLOT_MAX_YAXIS;


bool FileSavingFlag;       // "True" if we want to save the data on to a text file
float thresh_breath, thresh_heart;

// GUI Status


RadarControl* RadarControl::m_instatnce=nullptr;
QSettings settings("Texas Instruments", "Vital Signs");
QFile outFile("dataOutputFromEVM.bin"); // File to save the Data

RadarControl* RadarControl::GetInstance(){
    if( RadarControl::m_instatnce == nullptr)
    {
        RadarControl::m_instatnce = new RadarControl();
    }
    return RadarControl::m_instatnce;
}

RadarControl::RadarControl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RadarControl)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #283345,stop:0.5 #151c26 ,stop:1 #020407)");
    this->inivalue();
    currIndex = 0;

    qDebug() << "QT version = " << QT_VERSION_STR;
    qint32 baudRate = 921600;
    FLAG_PAUSE = false;
    outFile.open(QIODevice::Append); // Open the file by default

    setIndexdial();

    RadarConfig::GetInstance()->serialRead = new QSerialPort(this);
    RadarConfig::GetInstance()->dataPort_Connected = serialPortConfig(RadarConfig::GetInstance()->serialRead, baudRate, RadarConfig::GetInstance()->dataPortNum);
    if (RadarConfig::GetInstance()->dataPort_Connected)
        printf("Data port succesfully Open\n");
    else
        printf("data port did Not Open\n");

    RadarConfig::GetInstance()->serialWrite = new QSerialPort(this);

    RadarConfig::GetInstance()->userPort_Connected = serialPortConfig(RadarConfig::GetInstance()->serialWrite, 115200, RadarConfig::GetInstance()->userPortNum);
    if (RadarConfig::GetInstance()->userPort_Connected)
        printf("User port succesfully Open\n");
    else
        printf("User port did not Open \n");

    connect(RadarConfig::GetInstance()->serialRead, SIGNAL(readyRead()), this, SLOT(serialRecieved()));

    // Plot Settings
    QFont font;
    font.setPointSize(12);
    QPen myPen;
    myPen.setWidth(2); // Width greater than 1 considerably slows down the application
    myPen.setColor(Qt::blue);
    QFont titleFont;
    titleFont.setPointSize(15);
    titleFont.bold();


//    statusBar()->showMessage(tr("Ready"));

    xDistTimePlot.resize(NUM_PTS_DISTANCE_TIME_PLOT);
    yDistTimePlot.resize(NUM_PTS_DISTANCE_TIME_PLOT);
    breathingWfmBuffer.resize(NUM_PTS_DISTANCE_TIME_PLOT);
    heartWfmBuffer.resize(NUM_PTS_DISTANCE_TIME_PLOT);

    ui->plot_RangeProfile->addGraph(0);
    ui->plot_RangeProfile->setBackground(this->palette().background().color());
    ui->plot_RangeProfile->axisRect()->setBackground(this->palette().background().color());
    ui->plot_RangeProfile->xAxis->setLabel("距离 (m)");//Range (m)
    ui->plot_RangeProfile->xAxis->setLabelFont(font);
    ui->plot_RangeProfile->yAxis->setLabel("幅度 (a.u.)");//Magnitude (a.u.)
    ui->plot_RangeProfile->yAxis->setLabelFont(font);
    ui->plot_RangeProfile->axisRect()->setupFullAxesBox();
    ui->plot_RangeProfile->xAxis->setRange(0, NUM_PTS_DISTANCE_TIME_PLOT);

    QCPTextElement *myTitle = new QCPTextElement(ui->plot_RangeProfile, "距离");//距离向nge Profile
    myTitle->setFont(titleFont);
    ui->plot_RangeProfile->plotLayout()->insertRow(0); // inserts an empty row above the default axis rect
    ui->plot_RangeProfile->plotLayout()->addElement(0, 0, myTitle);

    ui->phaseWfmPlot->addGraph(0);
    ui->phaseWfmPlot->setBackground(this->palette().background().color());
    ui->phaseWfmPlot->axisRect()->setBackground(this->palette().background().color());
    ui->phaseWfmPlot->xAxis->setLabel("帧率 (Index)");//Frame (Index)
    ui->phaseWfmPlot->xAxis->setLabelFont(font);
    ui->phaseWfmPlot->yAxis->setLabel("偏移量 (a.u.)");//Displacement (a.u.)
    ui->phaseWfmPlot->yAxis->setLabelFont(font);
    ui->phaseWfmPlot->axisRect()->setupFullAxesBox();
    ui->phaseWfmPlot->xAxis->setRange(0, NUM_PTS_DISTANCE_TIME_PLOT);
    ui->phaseWfmPlot->graph(0)->setPen(myPen);

    QCPTextElement *myTitle_ChestDisp = new QCPTextElement(ui->phaseWfmPlot, "胸部移位");//胸部移位Chest Displacement
    myTitle_ChestDisp->setFont(titleFont);
    ui->phaseWfmPlot->plotLayout()->insertRow(0); // inserts an empty row above the default axis rect
    ui->phaseWfmPlot->plotLayout()->addElement(0, 0, myTitle_ChestDisp);

    ui->BreathingWfmPlot->addGraph(0);
    ui->BreathingWfmPlot->setBackground(this->palette().background().color());
    ui->BreathingWfmPlot->axisRect()->setBackground(this->palette().background().color());
    ui->BreathingWfmPlot->xAxis->setLabelFont(font);
    ui->BreathingWfmPlot->yAxis->setLabel("相位偏移值 (radians)");//Phase (radians)
    ui->BreathingWfmPlot->yAxis->setLabelFont(font);
    ui->BreathingWfmPlot->axisRect()->setupFullAxesBox();
    ui->BreathingWfmPlot->xAxis->setRange(0, NUM_PTS_DISTANCE_TIME_PLOT);
    ui->BreathingWfmPlot->graph(0)->setPen(myPen);

    QCPTextElement *myTitle_BreathWfm = new QCPTextElement(ui->BreathingWfmPlot, "呼吸波形");//呼吸波形Breathing Waveform
    myTitle_BreathWfm->setFont(titleFont);
    ui->BreathingWfmPlot->plotLayout()->insertRow(0); // inserts an empty row above the default axis rect
    ui->BreathingWfmPlot->plotLayout()->addElement(0, 0, myTitle_BreathWfm);

    ui->heartWfmPlot->addGraph(0);
    ui->heartWfmPlot->setBackground(this->palette().background().color());
    ui->heartWfmPlot->axisRect()->setBackground(this->palette().background().color());
    ui->heartWfmPlot->xAxis->setLabelFont(font);
    ui->heartWfmPlot->yAxis->setLabel("相位偏移值 (radians)");//Phase (Radians)
    ui->heartWfmPlot->yAxis->setLabelFont(font);
    ui->heartWfmPlot->axisRect()->setupFullAxesBox();
    ui->heartWfmPlot->xAxis->setRange(0, NUM_PTS_DISTANCE_TIME_PLOT);
    ui->heartWfmPlot->graph(0)->setPen(myPen);

    QPalette lcdpaletteBreathing = ui->lcdNumber_Breathingrate->palette();
    lcdpaletteBreathing.setColor(QPalette::Normal, QPalette::Window, Qt::white);

    QPalette lcdpaletteHeart = ui->lcdNumber_HeartRate->palette();
    lcdpaletteHeart.setColor(QPalette::Normal, QPalette::Window, Qt::white);

    QPalette lcdpaletteNotBreathing = ui->lcdNumber_Breathingrate->palette();
    lcdpaletteNotBreathing.setColor(QPalette::Normal, QPalette::Window, Qt::red);


    ui->lcdNumber_HeartRate->setAutoFillBackground(true);
    ui->lcdNumber_HeartRate->setPalette(lcdpaletteHeart);
    ui->lcdNumber_Breathingrate->setAutoFillBackground(true);
    ui->lcdNumber_Breathingrate->setPalette(lcdpaletteBreathing);

    QCPTextElement *myTitle_HeartWfm = new QCPTextElement(ui->heartWfmPlot, "心跳波形");//心跳波形Heart Waveform
    myTitle_HeartWfm->setFont(titleFont);
    ui->heartWfmPlot->plotLayout()->insertRow(0); // inserts an empty row above the default axis rect
    ui->heartWfmPlot->plotLayout()->addElement(0, 0, myTitle_HeartWfm);

//    ui->lineEdit_ProfileBack->setText("xwr1642_profile_VitalSigns_20fps_Back.cfg");
//    ui->lineEdit_ProfileFront->setText("xwr1642_profile_VitalSigns_20fps_Front.cfg");
    //  ui->lineEdit_ProfileBack->setText("xwr1443_profile_VitalSigns_20fps_Back.cfg");
    //  ui->lineEdit_ProfileFront->setText("xwr1443_profile_VitalSigns_20fps_Front.cfg");

//    connect(this, SIGNAL(gui_statusChanged()), this, SLOT(gui_statusUpdate()));
}

void RadarControl::serialRecieved()
{
    QByteArray dataSerial = RadarConfig::GetInstance()->serialRead->readAll().toHex();
    int dataSize = dataSerial.size();
    dataBuffer = dataBuffer.append(dataSerial);
    indexBuffer = indexBuffer + dataSize;
    processData();
}

RadarControl::~RadarControl()
{
    RadarConfig::GetInstance()->serialWrite->write("sensorStop\n");
    RadarConfig::GetInstance()->serialWrite->waitForBytesWritten(10000);
    RadarConfig::GetInstance()->serialRead->close();
    RadarConfig::GetInstance()->serialWrite->close();
    delete ui;
}

void RadarControl::on_pushButton_start_clicked()
{
    RadarConfig::GetInstance()->localCount = 0;
//    if (RadarConfig::GetInstance()->current_gui_status == gui_paused)
//    {
//        RadarConfig::GetInstance()->current_gui_status = gui_running;
//        emit gui_statusChanged();
//        return;
//    }

    FLAG_PAUSE = false;
    AUTO_DETECT_COM_PORTS = RadarConfig::GetInstance()->is_checkBox_AutoDetectPorts;

    if (AUTO_DETECT_COM_PORTS)
    {
        if (!RadarConfig::GetInstance()->FlagSerialPort_Connected)
        {
            RadarConfig::GetInstance()->serialPortFound_Flag = RadarConfig::GetInstance()->serialPortFind();

            if (!RadarConfig::GetInstance()->userPort_Connected)
            {
                RadarConfig::GetInstance()->userPort_Connected = serialPortConfig(RadarConfig::GetInstance()->serialWrite, 115200, RadarConfig::GetInstance()->userPortNum);
            }

            if (!RadarConfig::GetInstance()->dataPort_Connected)
            {
                RadarConfig::GetInstance()->dataPort_Connected = serialPortConfig(RadarConfig::GetInstance()->serialRead, 921600, RadarConfig::GetInstance()->dataPortNum);
            }
        }
    }
    else
    {
        RadarConfig::GetInstance()->userPortNum = RadarConfig::GetInstance()->tx_lineEdit_UART_port;
        RadarConfig::GetInstance()->dataPortNum = RadarConfig::GetInstance()->tx_lineEdit_data_port;
        RadarConfig::GetInstance()->userPort_Connected = serialPortConfig(RadarConfig::GetInstance()->serialWrite, 115200, RadarConfig::GetInstance()->userPortNum);
        RadarConfig::GetInstance()->dataPort_Connected = serialPortConfig(RadarConfig::GetInstance()->serialRead, 921600, RadarConfig::GetInstance()->dataPortNum);
    }

    if (RadarConfig::GetInstance()->is_checkBox_LoadConfig)
    {

        // Read the Configuration file path from the GUI

        QString profileBack = RadarConfig::GetInstance()->tx_lineEdit_ProfileBack;
        qDebug() << "Configuration File Name Read from the GUI is %s/n" << profileBack;

        DialogSettings myDialogue;
        QString userComPort = myDialogue.getUserComPortNum();
        qDebug() << userComPort;
        QDir currDir = QCoreApplication::applicationDirPath();
        currDir.cdUp();
        QString filenameText = currDir.path();
        filenameText.append("/profiles/"); // Reads from this path

        if (RadarConfig::GetInstance()->is_radioButton_BackMeasurements)
        {
            filenameText.append(RadarConfig::GetInstance()->tx_lineEdit_ProfileBack); // Reads from this path
            qDebug() << "Configuration File Path is %s/n" << filenameText;

            HEART_PLOT_MAX_YAXIS = myDialogue.getHeartWfm_yAxisMax();
            BREATHING_PLOT_MAX_YAXIS = myDialogue.getBreathWfm_yAxisMax();

            thresh_breath = 0.001;
            thresh_heart = 0.001;
        }
        else
        {
            filenameText.append(RadarConfig::GetInstance()->tx_lineEdit_ProfileFront); // Reads from this path
            qDebug() << "Configuration File Path is %s/n" << filenameText;
            thresh_breath = 10;
            thresh_heart = 0.1;
            BREATHING_PLOT_MAX_YAXIS = 1.0;
            HEART_PLOT_MAX_YAXIS = 0.5;
        }
        ui->SpinBox_TH_Breath->setValue(thresh_breath);
        ui->SpinBox_TH_Heart->setValue(thresh_heart);

        QFile infile(filenameText);

        if (infile.open(QIODevice::ReadWrite))
        {
            QTextStream inStream(&infile);
            while (!inStream.atEnd())
            {
                QString line = inStream.readLine(); // Read a line from the input Text File
                qDebug() << line;
                RadarConfig::GetInstance()->serialWrite->write(line.toUtf8().constData());
                RadarConfig::GetInstance()->serialWrite->write("\n");
                RadarConfig::GetInstance()->serialWrite->waitForBytesWritten(10000);
//                Sleep(1000);
            }
            infile.close();
        }

        // Parse the Configuration Text File

        if (infile.open(QIODevice::ReadWrite))
        {
            QStringList listArgs;
            QString tempString;
            QTextStream inStream(&infile);
            while (!inStream.atEnd())
            {
                QString line = inStream.readLine(); // Read a line from the input Text File
                qDebug() << line;
                if (line.contains("vitalSignsCfg", Qt::CaseInsensitive))
                {
                    listArgs = line.split(QRegExp("\\s+"));
                    tempString = listArgs.at(1);
                    demoParams.rangeStartMeters = tempString.toFloat();
                    qDebug() << demoParams.rangeStartMeters;

                    listArgs = line.split(QRegExp("\\s+"));
                    tempString = listArgs.at(2);
                    demoParams.rangeEndMeters = tempString.toFloat();
                    qDebug() << demoParams.rangeEndMeters;

                    listArgs = line.split(QRegExp("\\s+"));
                    tempString = listArgs.at(5);
                    demoParams.AGC_thresh = tempString.toFloat();
                    qDebug() << demoParams.AGC_thresh;
                }

                if (line.contains("profileCfg", Qt::CaseInsensitive))
                {

                    listArgs = line.split(QRegExp("\\s+"));
                    tempString = listArgs.at(2);
                    demoParams.stratFreq_GHz = tempString.toFloat();

                    listArgs = line.split(QRegExp("\\s+"));
                    tempString = listArgs.at(8);
                    demoParams.freqSlope_MHZ_us = tempString.toFloat();

                    listArgs = line.split(QRegExp("\\s+"));
                    tempString = listArgs.at(10);
                    demoParams.numSamplesChirp = tempString.toFloat();

                    listArgs = line.split(QRegExp("\\s+"));
                    tempString = listArgs.at(11);
                    demoParams.samplingRateADC_ksps = tempString.toInt();
                }
            }
            infile.close();

            // Compute the Derived Configuration Parameters
            demoParams.chirpDuration_us = 1e3 * demoParams.numSamplesChirp / demoParams.samplingRateADC_ksps;
            qDebug() << "Chirp Duration in us is :" << demoParams.chirpDuration_us;

            demoParams.chirpBandwidth_kHz = (demoParams.freqSlope_MHZ_us) * (demoParams.chirpDuration_us);
            qDebug() << "Chirp Bandwidth in kHz is : " << demoParams.chirpBandwidth_kHz;

            float numTemp = (demoParams.chirpDuration_us) * (demoParams.samplingRateADC_ksps) * (3e8);
            float denTemp = 2 * (demoParams.chirpBandwidth_kHz);
            demoParams.rangeMaximum_meters = numTemp / (denTemp * 1e9);
            qDebug() << "Maximum Range in Meters is :" << demoParams.rangeMaximum_meters;

            demoParams.rangeFFTsize = nextPower2(demoParams.numSamplesChirp);
            qDebug() << "Range-FFT size is :" << demoParams.rangeFFTsize;

            demoParams.rangeBinSize_meters = demoParams.rangeMaximum_meters / demoParams.rangeFFTsize;
            qDebug() << "Range-Bin size is :" << demoParams.rangeBinSize_meters;

            demoParams.rangeBinStart_index = demoParams.rangeStartMeters / demoParams.rangeBinSize_meters;
            demoParams.rangeBinEnd_index = demoParams.rangeEndMeters / demoParams.rangeBinSize_meters;
            qDebug() << "Range-Bin Start Index is :" << demoParams.rangeBinStart_index;
            qDebug() << "Range-Bin End Index is :" << demoParams.rangeBinEnd_index;

            demoParams.numRangeBinProcessed = demoParams.rangeBinEnd_index - demoParams.rangeBinStart_index + 1;

            // Calculate the Payload size

            demoParams.totalPayloadSize_bytes = LENGTH_HEADER_BYTES;
            demoParams.totalPayloadSize_bytes += LENGTH_TLV_MESSAGE_HEADER_BYTES + (4 * demoParams.numRangeBinProcessed);
            demoParams.totalPayloadSize_bytes += LENGTH_TLV_MESSAGE_HEADER_BYTES + LENGTH_DEBUG_DATA_OUT_BYTES;
            qDebug() << "Total Payload size from the UART is :" << demoParams.totalPayloadSize_bytes;

            if ((demoParams.totalPayloadSize_bytes % MMWDEMO_OUTPUT_MSG_SEGMENT_LEN) != 0)
            {
                int paddingFactor = ceil((float)demoParams.totalPayloadSize_bytes / (float)MMWDEMO_OUTPUT_MSG_SEGMENT_LEN);
                qDebug() << "Padding Factor is :" << paddingFactor;

                demoParams.totalPayloadSize_bytes = MMWDEMO_OUTPUT_MSG_SEGMENT_LEN * paddingFactor;
            }

            qDebug() << "Total Payload size from the UART is :" << demoParams.totalPayloadSize_bytes;
            demoParams.totalPayloadSize_nibbles = 2 * demoParams.totalPayloadSize_bytes;
        }
    }

    ui->heartWfmPlot->yAxis->setRange(-HEART_PLOT_MAX_YAXIS, HEART_PLOT_MAX_YAXIS);
//    RadarConfig::GetInstance()->current_gui_status = gui_running;
//    emit gui_statusChanged();
}

void RadarControl::on_pushButton_stop_clicked()
{
    RadarConfig::GetInstance()->serialWrite->write("sensorStop\n");
    RadarConfig::GetInstance()->current_gui_status = gui_stopped;
//    emit gui_statusChanged();
}

void RadarControl::on_pushButton_Refresh_clicked()
{
    RadarConfig::GetInstance()->serialWrite->write("guiMonitor 0 0 0 1\n");
    RadarConfig::GetInstance()->serialWrite->waitForBytesWritten(10000);
    RadarConfig::GetInstance()->localCount = 0;
//    Sleep(2000);
}

void RadarControl::on_pushButton_settings_clicked()
{
    DialogSettings settingsDialogue;
    settingsDialogue.setModal(true);
    settingsDialogue.exec();
}

int RadarControl::nextPower2(int num)
{
    int power = 1;
    while (power < num)
        power *= 2;
    return power;
}

float RadarControl::parseValueFloat(QByteArray data, int valuePos, int valueSize)
{
    bool ok;
    QByteArray parseData;
    parseData = data.mid(valuePos, valueSize);
    QString strParseData = parseData;
    quint32 temp_int = strParseData.toUInt(&ok, 16);
    temp_int = qToBigEndian(temp_int); // Convert to Big-Endian
    float parseValueOut;
    parseValueOut = *reinterpret_cast<float *>(&temp_int); // cast to Float
    return parseValueOut;
}

quint32 RadarControl::parseValueUint32(QByteArray data, int valuePos, int valueSize)
{
    bool ok;
    QByteArray parseData;
    parseData = data.mid(valuePos, valueSize);
    QString strParseData = parseData;
    quint32 tempInt32 = strParseData.toUInt(&ok, 16);
    quint32 parseValueOut = qToBigEndian(tempInt32); // Convert to Big-Endian
    return parseValueOut;
}

quint16 RadarControl::parseValueUint16(QByteArray data, int valuePos, int valueSize)
{
    bool ok;
    QByteArray parseData;
    parseData = data.mid(valuePos, valueSize);
    QString strParseData = parseData;
    quint16 parseValueOut = strParseData.toInt(&ok, 16);
    parseValueOut = qToBigEndian(parseValueOut); // Convert to Big-Endian
    return parseValueOut;
}

qint16 RadarControl::parseValueInt16(QByteArray data, int valuePos, int valueSize)
{
    bool ok;
    QByteArray parseData;
    parseData = data.mid(valuePos, valueSize);
    QString strParseData = parseData;
    qint16 parseValueOut = strParseData.toInt(&ok, 16);
    parseValueOut = qToBigEndian(parseValueOut); // Convert to Big-Endian
    return parseValueOut;
}


bool RadarControl::serialPortConfig(QSerialPort *serial, qint32 baudRate, QString dataPortNum)
{
    serial->setPortName(RadarConfig::GetInstance()->dataPortNum);

    if (serial->open(QIODevice::ReadWrite))
    {
        RadarConfig::GetInstance()->FlagSerialPort_Connected = 1;
    }
    else
    {
        RadarConfig::GetInstance()->FlagSerialPort_Connected = 0;
        return RadarConfig::GetInstance()->FlagSerialPort_Connected;
    }
    serial->setBaudRate(baudRate);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl(QSerialPort::NoFlowControl);
    return RadarConfig::GetInstance()->FlagSerialPort_Connected;
}

void RadarControl::processData()
{
    QByteArray dataSave;
    QByteArray data;
    static float outHeartNew_CM;
    static float maxRCS_updated;
    bool MagicOk;

    // Kalman Filter
    static float Pk = 1;
    static float xk = 0; // State Variable

    extern bool FileSavingFlag;
    FileSavingFlag =RadarConfig::GetInstance()->is_checkBox_SaveData;
//    FileSavingFlag = ui->checkBox_SaveData->isChecked();
    RadarConfig::GetInstance()->localCount = RadarConfig::GetInstance()->localCount + 1;

    while (dataBuffer.size() >= demoParams.totalPayloadSize_nibbles)
    {
        QElapsedTimer timer; // For computing the time required for the operations
        timer.start();

        QByteArray searchStr("0201040306050807"); // Search String Array
        int dataStartIndex = dataBuffer.indexOf(searchStr);
        int indexTemp = RadarConfig::GetInstance()->localCount % NUM_PTS_DISTANCE_TIME_PLOT;

        if (dataStartIndex == -1)
        {
            MagicOk = 0;
            qDebug() << " Magic Word Not Found --- local Count:  " << RadarConfig::GetInstance()->localCount << "DataBufferSize" << dataBuffer.size();
            break;
        }
        else
        {
            data = dataBuffer.mid(dataStartIndex, demoParams.totalPayloadSize_nibbles /*TOTAL_PAYLOAD_SIZE_NIBBLES*/);
            dataBuffer = dataBuffer.remove(dataStartIndex, demoParams.totalPayloadSize_nibbles /*TOTAL_PAYLOAD_SIZE_NIBBLES*/);

            dataBuffer = dataBuffer.remove(0, dataStartIndex);
            //      qDebug()<<"dataBuffer size after removal is "<<dataBuffer.size();

            // Check if all the data has been recieved succesfully
            if (data.size() >= demoParams.totalPayloadSize_nibbles)
            {
                MagicOk = 1;
//                statusBar()->showMessage(tr("Sensor Running"));
            }
            else
            {
                MagicOk = 0;
                qDebug() << " Data size is not OK --- local Count:  " << RadarConfig::GetInstance()->localCount << "DataBufferSize" << dataBuffer.size();
                qDebug() << data.size();
//                statusBar()->showMessage(tr("Frames are being missed. Please stop and Start the Program"));
            }
        }

        if (MagicOk == 1)
        {

            if (FileSavingFlag)
            {
                dataSave = data;
                outFile.write(dataSave.fromHex(data), demoParams.totalPayloadSize_bytes /*TOTAL_PAYLOAD_SIZE_BYTES*/);
            }

            quint32 globalCountOut = parseValueUint32(data, 40, 8);                               // Global Count
            quint16 rangeBinIndexOut = parseValueUint16(data, INDEX_IN_RANGE_BIN_INDEX, 4);       // parseValueUint16(data, 28, 4)
            float BreathingRate_FFT = parseValueFloat(data, INDEX_IN_DATA_BREATHING_RATE_FFT, 8); // Breathing Rate
            float BreathingRatePK_Out = parseValueFloat(data, INDEX_IN_DATA_BREATHING_RATE_PEAK, 8);
            float heartRate_FFT = parseValueFloat(data, INDEX_IN_DATA_HEART_RATE_EST_FFT, 8); // Heart Rate
            float heartRate_Pk = parseValueFloat(data, INDEX_IN_DATA_HEART_RATE_EST_PEAK, 8);
            float heartRate_xCorr = parseValueFloat(data, INDEX_IN_DATA_HEART_RATE_EST_FFT_xCorr, 8);     // Heart Rate - AutoCorrelation
            float heartRate_FFT_4Hz = parseValueFloat(data, INDEX_IN_DATA_HEART_RATE_EST_FFT_4Hz, 8) / 2; // Heart Rate - FFT-4Hz
            float phaseWfm_Out = parseValueFloat(data, INDEX_IN_DATA_PHASE, 8);                           // Phase Waveforms
            float breathWfm_Out = parseValueFloat(data, INDEX_IN_DATA_BREATHING_WAVEFORM, 8);             // Breathing Waveform
            float heartWfm_Out = parseValueFloat(data, INDEX_IN_DATA_HEART_WAVEFORM, 8);                  // Cardiac Waveform
            float breathRate_CM = parseValueFloat(data, INDEX_IN_DATA_CONFIDENCE_METRIC_BREATH, 8);       // Confidence Metric
            float heartRate_CM = parseValueFloat(data, INDEX_IN_DATA_CONFIDENCE_METRIC_HEART, 8);
            float heartRate_4Hz_CM = parseValueFloat(data, INDEX_IN_DATA_CONFIDENCE_METRIC_HEART_4Hz, 8);
            float heartRate_xCorr_CM = parseValueFloat(data, INDEX_IN_DATA_CONFIDENCE_METRIC_HEART_xCorr, 8);
            float outSumEnergyBreathWfm = parseValueFloat(data, INDEX_IN_DATA_ENERGYWFM_BREATH, 8); // Waveforms Energy
            float outSumEnergyHeartWfm = parseValueFloat(data, INDEX_IN_DATA_ENERGYWFM_HEART, 8);   // Waveforms Energy
            float outMotionDetectionFlag = parseValueFloat(data, INDEX_IN_DATA_MOTION_DETECTION_FLAG, 8);
            float BreathingRate_xCorr_CM = parseValueFloat(data, INDEX_IN_DATA_CONFIDENCE_METRIC_BREATH_xCorr, 8);
            float BreathingRate_HarmEnergy = parseValueFloat(data, INDEX_IN_DATA_BREATHING_RATE_HARM_ENERGY, 8);
            float BreathingRate_xCorr = parseValueFloat(data, INDEX_IN_DATA_BREATHING_RATE_xCorr, 8);

            qDebug() << "Frame Number is " << globalCountOut;

            // Range Profile
            unsigned int numRangeBinProcessed = demoParams.rangeBinEnd_index - demoParams.rangeBinStart_index + 1;
            QVector<double> RangeProfile(2 * numRangeBinProcessed);
            QVector<double> xRangePlot(numRangeBinProcessed), yRangePlot(numRangeBinProcessed);
            unsigned int indexRange = INDEX_IN_DATA_RANGE_PROFILE_START; /*168;*/

            for (unsigned int index = 0; index < 2 * numRangeBinProcessed; index++)
            {
                qint16 tempRange_int = parseValueInt16(data, indexRange, 4); // Range Bin Index
                RangeProfile[index] = tempRange_int;
                indexRange = indexRange + 4;
            }

            for (unsigned int indexRangeBin = 0; indexRangeBin < numRangeBinProcessed; indexRangeBin++)
            {
                yRangePlot[indexRangeBin] = sqrt(RangeProfile[2 * indexRangeBin] * RangeProfile[2 * indexRangeBin] + RangeProfile[2 * indexRangeBin + 1] * RangeProfile[2 * indexRangeBin + 1]);
                xRangePlot[indexRangeBin] = demoParams.rangeStartMeters + demoParams.rangeBinSize_meters * indexRangeBin;
            }
            double maxRCS = *std::max_element(yRangePlot.constBegin(), yRangePlot.constEnd());
            maxRCS_updated = ALPHA_RCS * (maxRCS) + (1 - ALPHA_RCS) * maxRCS_updated;

            // make Decision
            float BreathingRate_Out, heartRate_Out;
            float diffEst_heartRate, heartRateEstDisplay;

            float heartRate_OutMedian;
            static QVector<float> heartRateBuffer;
            heartRateBuffer.resize(HEART_RATE_EST_MEDIAN_FLT_SIZE);

            static QVector<float> heartRateOutBufferFinal;
            heartRateOutBufferFinal.resize(HEART_RATE_EST_FINAL_OUT_SIZE);

            // Heart-Rate Display Decision
            float outHeartPrev_CM = outHeartNew_CM;
            outHeartNew_CM = ALPHA_HEARTRATE_CM * (heartRate_CM) + (1 - ALPHA_HEARTRATE_CM) * outHeartPrev_CM;

            diffEst_heartRate = abs(heartRate_FFT - heartRate_Pk);
            if ((outHeartNew_CM > THRESH_HEART_CM) || (diffEst_heartRate < THRESH_DIFF_EST))
            {
                heartRateEstDisplay = heartRate_FFT;
            }
            else
            {
                heartRateEstDisplay = heartRate_Pk;
            }

            if (RadarConfig::GetInstance()->is_checkBox_xCorr)
            {
                heartRateEstDisplay = heartRate_xCorr;
            }

            if (RadarConfig::GetInstance()->is_checkBox_FFT)
            {
                heartRateEstDisplay = heartRate_FFT;
            }

            if (RadarConfig::GetInstance()->is_radioButton_BackMeasurements)
            {

#ifdef HEAURITICS_APPROACH1

                if (abs(heartRate_xCorr - heartRate_FFT) < THRESH_BACK)
                {
                    heartRateEstDisplay = heartRate_FFT;
                }
                else
                {
                    heartRateEstDisplay = heartRate_xCorr;
                }

                heartRateBuffer.insert(2 * (RadarConfig::GetInstance()->localCount % HEART_RATE_EST_MEDIAN_FLT_SIZE / 2), heartRateEstDisplay);

                if (ui->checkBox_FFT)
                {
                    heartRateBuffer.insert(2 * (RadarConfig::GetInstance()->localCount % HEART_RATE_EST_MEDIAN_FLT_SIZE / 2) + 1, heartRateEstDisplay);
                }
                else
                {
                    heartRateBuffer.insert(2 * (RadarConfig::GetInstance()->localCount % HEART_RATE_EST_MEDIAN_FLT_SIZE / 2) + 1, heartRate_FFT_4Hz);
                }
#endif

                int IsvalueSelected = 0;

                if (abs(heartRate_xCorr - 2 * BreathingRate_FFT) > BACK_THRESH_BPM)
                {
                    heartRateBuffer.insert(currIndex % HEART_RATE_EST_MEDIAN_FLT_SIZE, heartRate_xCorr);
                    IsvalueSelected = 1;
                    currIndex++;
                }
                if (heartRate_CM > BACK_THRESH_CM)
                {
                    heartRateBuffer.insert(currIndex % HEART_RATE_EST_MEDIAN_FLT_SIZE, heartRate_FFT);
                    IsvalueSelected = 1;
                    currIndex++;
                }
                if (heartRate_4Hz_CM > BACK_THRESH_4Hz_CM)
                {
                    heartRateBuffer.insert(currIndex % HEART_RATE_EST_MEDIAN_FLT_SIZE, heartRate_FFT_4Hz);
                    IsvalueSelected = 1;
                    currIndex++;
                }

                if (IsvalueSelected == 0) // If nothing is selected from the current frame then select the Inter-peak distance Estimate
                {
                    heartRateBuffer.insert(currIndex % HEART_RATE_EST_MEDIAN_FLT_SIZE, heartRate_Pk);
                    currIndex++;
                }
            }
            else
            {
                heartRateBuffer.insert(RadarConfig::GetInstance()->localCount % HEART_RATE_EST_MEDIAN_FLT_SIZE, heartRateEstDisplay);
            }

            if (gui_paused != RadarConfig::GetInstance()->current_gui_status)
            {
                QList<float> heartRateBufferSort = QList<float>::fromVector(heartRateBuffer);
                qSort(heartRateBufferSort.begin(), heartRateBufferSort.end());
                heartRate_OutMedian = heartRateBufferSort.at(HEART_RATE_EST_MEDIAN_FLT_SIZE / 2);

                if (APPLY_KALMAN_FILTER)
                {
                    float R; // Measurement Variance
                    float Q; // State Variance
                    float KF_Gain;
                    float CM_combined;
                    CM_combined = heartRate_CM + heartRate_4Hz_CM + 10 * heartRate_xCorr_CM;
                    R = 1 / (CM_combined + 0.0001);
                    Q = 1e-6;
                    KF_Gain = Pk / (Pk + R);
                    xk = xk + KF_Gain * (heartRate_OutMedian - xk);
                    Pk = (1 - KF_Gain) * Pk + Q;
                    heartRate_Out = xk;
                }
                {
                    heartRate_Out = heartRate_OutMedian;
                }
                // Further Filtering of the Final Heart-rate Estimates

                heartRateOutBufferFinal.insert(RadarConfig::GetInstance()->localCount % (HEART_RATE_EST_FINAL_OUT_SIZE), heartRate_Out);
                const auto mean = std::accumulate(heartRateOutBufferFinal.begin(), heartRateOutBufferFinal.end(), .0) / heartRateOutBufferFinal.size();
                double sumMAD;
                double bufferSTD;
                sumMAD = 0;
                for (int indexTemp = 0; indexTemp < heartRateOutBufferFinal.size(); indexTemp++)
                {
                    sumMAD += abs(heartRateOutBufferFinal.at(indexTemp) - mean);
                }
                bufferSTD = sqrt(sumMAD) / heartRateOutBufferFinal.size();
                ui->lcdNumber_ReliabilityMetric->display(bufferSTD);

                // Breathing-Rate decision
                float outSumEnergyBreathWfm_thresh;
                float RCS_thresh;
                outSumEnergyBreathWfm_thresh = ui->SpinBox_TH_Breath->value();
                RCS_thresh = ui->SpinBox_RCS->value();
                bool flag_Breathing;

                if ((outSumEnergyBreathWfm < outSumEnergyBreathWfm_thresh) || (maxRCS_updated < RCS_thresh) || (BreathingRate_xCorr_CM <= 0.002))
                {
                    flag_Breathing = 0;
                    BreathingRate_Out = 0;
                    QPalette lcdpaletteNotBreathing = ui->lcdNumber_Breathingrate->palette();
                    lcdpaletteNotBreathing.setColor(QPalette::Normal, QPalette::Window, Qt::red);
                    ui->lcdNumber_Breathingrate->setPalette(lcdpaletteNotBreathing);
                }
                else
                {
                    flag_Breathing = 1;
                    lcdpaletteBreathing.setColor(QPalette::Normal, QPalette::Window, Qt::white);
                    ui->lcdNumber_Breathingrate->setPalette(lcdpaletteBreathing);

                    if (breathRate_CM > THRESH_BREATH_CM)
                    {
                        BreathingRate_Out = BreathingRate_FFT;
                    }
                    else
                    {
                        BreathingRate_Out = BreathingRatePK_Out;
                    }
                }

                // Heart-Rate Decision
                float outSumEnergyHeartWfm_thresh;
                outSumEnergyHeartWfm_thresh = ui->SpinBox_TH_Heart->value(); //0.05

                if (outSumEnergyHeartWfm < outSumEnergyHeartWfm_thresh || maxRCS_updated < RCS_thresh)
                {
                    heartRate_Out = 0;
                    QPalette lcdpaletteNoHeartRate = ui->lcdNumber_HeartRate->palette();
                    lcdpaletteNoHeartRate.setColor(QPalette::Normal, QPalette::Window, Qt::red);
                    heartWfm_Out = 0;
                    ui->lcdNumber_HeartRate->setPalette(lcdpaletteNoHeartRate);
                }
                else
                {
                    QPalette lcdpaletteHeartRate = ui->lcdNumber_HeartRate->palette();
                    lcdpaletteHeartRate.setColor(QPalette::Normal, QPalette::Window, Qt::white);
                    ui->lcdNumber_HeartRate->setPalette(lcdpaletteHeartRate);
                }

                if (RadarConfig::GetInstance()->is_checkBox_displayPlots)
                {
                    if (indexTemp == 0)
                    {
                        for (unsigned int i = 0; i < NUM_PTS_DISTANCE_TIME_PLOT; i++)
                        {
                            xDistTimePlot[i] = indexTemp;
                            yDistTimePlot[i] = phaseWfm_Out;
                            heartWfmBuffer[i] = heartWfm_Out;
                            breathingWfmBuffer[indexTemp] = breathWfm_Out;
                        }
                    }

                    double max = *std::max_element(breathingWfmBuffer.constBegin(), breathingWfmBuffer.constEnd());
                    double min = *std::min_element(breathingWfmBuffer.constBegin(), breathingWfmBuffer.constEnd());

                    double breathingWfm_display_max, breathingWfm_display_min;

                    if (max < BREATHING_PLOT_MAX_YAXIS)
                        breathingWfm_display_max = BREATHING_PLOT_MAX_YAXIS;
                    else
                        breathingWfm_display_max = max;

                    if (min > -BREATHING_PLOT_MAX_YAXIS)
                        breathingWfm_display_min = -BREATHING_PLOT_MAX_YAXIS;
                    else
                        breathingWfm_display_min = min;

                    xDistTimePlot[indexTemp] = indexTemp;
                    yDistTimePlot[indexTemp] = phaseWfm_Out;
                    breathingWfmBuffer[indexTemp] = breathWfm_Out;
                    heartWfmBuffer[indexTemp] = heartWfm_Out;

                    ui->phaseWfmPlot->yAxis->setRange(-10, 10);
                    ui->phaseWfmPlot->graph(0)->setData(xDistTimePlot, yDistTimePlot);
                    ui->phaseWfmPlot->yAxis->rescale();
                    ui->phaseWfmPlot->replot();

                    ui->BreathingWfmPlot->graph(0)->setData(xDistTimePlot, breathingWfmBuffer);
                    ui->BreathingWfmPlot->yAxis->setRangeLower(breathingWfm_display_min);
                    ui->BreathingWfmPlot->yAxis->setRangeUpper(breathingWfm_display_max);
                    ui->BreathingWfmPlot->replot();

                    ui->heartWfmPlot->graph(0)->setData(xDistTimePlot, heartWfmBuffer);
                    ui->heartWfmPlot->replot();

                    ui->plot_RangeProfile->graph(0)->setData(xRangePlot, yRangePlot);
                    ui->plot_RangeProfile->xAxis->setRange(demoParams.rangeStartMeters, demoParams.rangeEndMeters);

                    //   ui->plot_RangeProfile->yAxis->rescale();
                    if (maxRCS < (ui->SpinBox_RCS->value()))
                    {
                        ui->plot_RangeProfile->yAxis->setRangeUpper(ui->SpinBox_RCS->value());
                    }
                    else
                    {
                        ui->plot_RangeProfile->yAxis->setRangeUpper(maxRCS);
                    }

                    ui->plot_RangeProfile->replot();
                }
                // Update Numerical Displays
                ui->lcdNumber_FrameCount->display((int)globalCountOut);

                QString myString_BreathRate;
                ui->lcdNumber_Breathingrate->setDigitCount(8);
                myString_BreathRate.sprintf("%1.0f", BreathingRate_Out);
                this->m_DashBoard->setValue(myString_BreathRate.toFloat());
                ui->lcdNumber_Breathingrate->display(myString_BreathRate);
                if(myString_BreathRate.toFloat()>BreathRateMax)
                 {
                    this->set_BreathRate_warningBox();
                }

                QString myString_HeartRate;
                ui->lcdNumber_HeartRate->setDigitCount(3);
                myString_HeartRate.sprintf("%1.0f", heartRate_Out);
                this->m_DashBoard_2->setValue(myString_HeartRate.toFloat());
                ui->lcdNumber_HeartRate->display(myString_HeartRate);
                if(myString_HeartRate.toFloat()>HeartRateMax)
                 {
                    this->set_BreathRate_warningBox();
                }

                QString myString_RangeBinIndex;
                ui->lcdNumber_Index->setDigitCount(8);
                myString_RangeBinIndex.sprintf("%d", rangeBinIndexOut);
                ui->lcdNumber_Index->display(myString_RangeBinIndex);

                QString myString_BreathingRatePK_Out;
                ui->lcdNumber_Breath_pk->setDigitCount(8);
                myString_BreathingRatePK_Out.sprintf("%1.0f", BreathingRatePK_Out);
                ui->lcdNumber_Breath_pk->display(myString_BreathingRatePK_Out);

                QString myString_heartRate_Pk;
                ui->lcdNumber_Heart_pk->setDigitCount(8);
                myString_heartRate_Pk.sprintf("%1.0f", heartRate_Pk);
                ui->lcdNumber_Heart_pk->display(myString_heartRate_Pk);

                QString myString_BreathingRate_FFT;
                ui->lcdNumber_Breath_FT->setDigitCount(8);
                myString_BreathingRate_FFT.sprintf("%1.0f", BreathingRate_FFT);
                ui->lcdNumber_Breath_FT->display(myString_BreathingRate_FFT);

                QString myString_HeartRate_FFT;
                ui->lcdNumber_Heart_FT->setDigitCount(8);
                myString_HeartRate_FFT.sprintf("%1.0f", heartRate_FFT);
                ui->lcdNumber_Heart_FT->display(myString_HeartRate_FFT);

                QString myString_breathRate_CM;
                ui->lcdNumber_CM_Breath->setDigitCount(8);
                myString_breathRate_CM.sprintf("%1.3f", breathRate_CM);
                ui->lcdNumber_CM_Breath->display(myString_breathRate_CM);

                QString myString_heartRate_CM;
                ui->lcdNumber_CM_Heart->setDigitCount(8);
                myString_heartRate_CM.sprintf("%1.3f", heartRate_CM);
                ui->lcdNumber_CM_Heart->display(myString_heartRate_CM);

                QString myString_heartRate_4Hz_CM;
                ui->lcdNumber_Display4->setDigitCount(8);
                myString_heartRate_4Hz_CM.sprintf("%1.3f", heartRate_4Hz_CM);
                ui->lcdNumber_Display4->display(myString_heartRate_4Hz_CM);

                QString myString_Breathing_WfmEnergy;
                ui->lcdNumber_BreathEnergy->setDigitCount(8);
                myString_Breathing_WfmEnergy.sprintf("%1.3f", outSumEnergyBreathWfm);
                ui->lcdNumber_BreathEnergy->display(myString_Breathing_WfmEnergy);

                QString myString_Heart_WfmEnergy;
                ui->lcdNumber_HeartEnergy->setDigitCount(8);
                myString_Heart_WfmEnergy.sprintf("%1.3f", outSumEnergyHeartWfm);
                ui->lcdNumber_HeartEnergy->display(myString_Heart_WfmEnergy);

                QString myString_RCS;
                ui->lcdNumber_RCS->setDigitCount(8);
                myString_RCS.sprintf("%1.0f", maxRCS_updated);
                ui->lcdNumber_RCS->display(myString_RCS);

                QString myString_xCorr;
                ui->lcdNumber_Heart_xCorr->setDigitCount(8);
                myString_xCorr.sprintf("%1.0f", heartRate_xCorr);
                ui->lcdNumber_Heart_xCorr->display(myString_xCorr);

                QString myString_FFT_4Hz;
                ui->lcdNumber_Heart_FT_4Hz->setDigitCount(8);
                myString_FFT_4Hz.sprintf("%1.0f", heartRate_FFT_4Hz);
                ui->lcdNumber_Heart_FT_4Hz->display(myString_FFT_4Hz);

                QString myString_Reserved_1;
                ui->lcdNumber_Display3->setDigitCount(8);
                myString_Reserved_1.sprintf("%1.3f", outMotionDetectionFlag);
                ui->lcdNumber_Display3->display(myString_Reserved_1);
                if (outMotionDetectionFlag == 1)
                {
                    ui->lcdNumber_Display3->setAutoFillBackground(true);
                    ui->lcdNumber_Display3->setPalette(Qt::red);
                }
                else
                {
                    ui->lcdNumber_Display3->setPalette(Qt::white);
                }

                QString myString_heartRate_FFT_4Hz;
                ui->lcdNumber_Heart_FT_4Hz->setDigitCount(8);
                myString_heartRate_FFT_4Hz.sprintf("%1.3f", heartRate_FFT_4Hz);
                ui->lcdNumber_Heart_FT_4Hz->display(myString_heartRate_FFT_4Hz);

                QString myString_CM_heart_xCorr;
                ui->lcdNumber_CM_Heart_xCorr->setDigitCount(8);
                myString_CM_heart_xCorr.sprintf("%1.3f", heartRate_xCorr_CM);
                ui->lcdNumber_CM_Heart_xCorr->display(myString_CM_heart_xCorr);

                QString myString_CM_breath_xCorr;
                ui->lcdNumber_CM_Breath_xCorr->setDigitCount(8);
                myString_CM_breath_xCorr.sprintf("%1.3f", BreathingRate_xCorr_CM);
                ui->lcdNumber_CM_Breath_xCorr->display(myString_CM_breath_xCorr);

                QString myString_breathRate_harmEnergy;
                ui->lcdNumber_breathRate_HarmEnergy->setDigitCount(8);
                myString_breathRate_harmEnergy.sprintf("%1.3f", BreathingRate_HarmEnergy);
                ui->lcdNumber_breathRate_HarmEnergy->display(myString_breathRate_harmEnergy);

                QString myString_breathRate_xCorr;
                ui->lcdNumber_Breath_xCorr->setDigitCount(8);
                myString_breathRate_xCorr.sprintf("%1.3f", BreathingRate_xCorr);
                ui->lcdNumber_Breath_xCorr->display(myString_breathRate_xCorr);
            }
            //  qDebug() << "The Process Function took" << timer.elapsed() << "milliseconds";
        } // If GUI-Paused end
    }     //Magic-OK if ends
}



void RadarControl::on_pushButton_pause_clicked()
{
    for (unsigned int i = 0; i < NUM_PTS_DISTANCE_TIME_PLOT; i++)
    {
        xDistTimePlot[i] = 0;
        yDistTimePlot[i] = 0;
        heartWfmBuffer[i] = 0;
        breathingWfmBuffer[i] = 0;
    }
}
void RadarControl::testtxt(){
 this->ui->lcdNumber_Breathingrate->display("123");
}

void RadarControl::setIndexdial(){

 m_DashBoard =new CCtrlDashBoard(ui->content);
 m_DashBoard->setGeometry(25,25,600,600);

 m_DashBoard_2 =new CCtrlDashBoard(ui->content_2);
 m_DashBoard_2->setGeometry(25,25,600,600);
}

void RadarControl::inivalue(){
    this->BreathRateovertimes=0;
    this->HeartRateovertimes=0;
}

void RadarControl::set_BreathRate_warningBox(){
    BreathRateovertimes++;
    if(HeartRateovertimes>10){
        QMessageBox message(QMessageBox::Warning,"Information","您的呼吸速率超过正常范围已经超过十次 请下车休息",QMessageBox::Yes|QMessageBox::No,NULL);
        if (message.exec()==QMessageBox::Yes)
        {
            qDebug()<<"clicked yes\n";
        }
        else
        {
            qDebug()<<"clicked no\n";
        }
        BreathRateovertimes=0;
    }else{
        QMessageBox message(QMessageBox::Warning,"Information","您的呼吸速率超过正常范围 请规范开车",QMessageBox::Yes|QMessageBox::No,NULL);
        if (message.exec()==QMessageBox::Yes)
        {
            qDebug()<<"clicked yes\n";
        }
        else
        {
            qDebug()<<"clicked no\n";
        }
    }

}

void RadarControl::set_HeartRate_warningBox(){
    HeartRateovertimes++;
    if(HeartRateovertimes>10)
    {
        QMessageBox message(QMessageBox::Warning,"Information","您的心跳速率超过正常范围已经超过十次 请下车休息",QMessageBox::Yes|QMessageBox::No,NULL);
        if (message.exec()==QMessageBox::Yes)
        {
            qDebug()<<"clicked yes\n";
        }
        else
        {
            qDebug()<<"clicked no\n";
        }
        HeartRateovertimes=0;
    }else
    {
        QMessageBox message(QMessageBox::Warning,"Information","您的心跳速率超过正常范围 请规范开车",QMessageBox::Yes|QMessageBox::No,NULL);
        if (message.exec()==QMessageBox::Yes)
        {
            qDebug()<<"clicked yes\n";
        }
        else
        {
            qDebug()<<"clicked no\n";
        }
    }

}
