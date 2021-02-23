#ifndef RADARCONTROL_H
#define RADARCONTROL_H

#include <QWidget>
#include <QFile>
#include <QSerialPort>
#include <radarconfig.h>
#include <CCtrlDashBoard/CCtrlDashBoard.h>

#define LENGTH_MAGIC_WORD_BYTES 8 // Length of Magic Word appended to the UART packet from the EVM

#define LENGTH_HEADER_BYTES 40 // Header + Magic Word
#define LENGTH_TLV_MESSAGE_HEADER_BYTES 8
#define LENGTH_DEBUG_DATA_OUT_BYTES 128   // VitalSignsDemo_OutputStats size
#define MMWDEMO_OUTPUT_MSG_SEGMENT_LEN 32 // The data sent out through the UART has Extra Padding to make it a
#define LENGTH_OFFSET_BYTES LENGTH_HEADER_BYTES - LENGTH_MAGIC_WORD_BYTES + LENGTH_TLV_MESSAGE_HEADER_BYTES
#define LENGTH_OFFSET_NIBBLES 2 * LENGTH_OFFSET_BYTES

#define INDEX_GLOBAL_COUNT 6
#define INDEX_RANGE_BIN_PHASE 1
#define INDEX_RANGE_BIN_VALUE 2
#define INDEX_PHASE 5
#define INDEX_BREATHING_WAVEFORM 6
#define INDEX_HEART_WAVEFORM 7
#define INDEX_HEART_RATE_EST_FFT 8
#define INDEX_HEART_RATE_EST_FFT_4Hz 9
#define INDEX_HEART_RATE_EST_FFT_xCorr 10
#define INDEX_HEART_RATE_EST_PEAK 11
#define INDEX_BREATHING_RATE_FFT 12
#define INDEX_BREATHING_RATE_xCorr 13
#define INDEX_BREATHING_RATE_PEAK 14
#define INDEX_CONFIDENCE_METRIC_BREATH 15
#define INDEX_CONFIDENCE_METRIC_BREATH_xCorr 16
#define INDEX_CONFIDENCE_METRIC_HEART 17
#define INDEX_CONFIDENCE_METRIC_HEART_4Hz 18
#define INDEX_CONFIDENCE_METRIC_HEART_xCorr 19
#define INDEX_ENERGYWFM_BREATH 20
#define INDEX_ENERGYWFM_HEART 21
#define INDEX_MOTION_DETECTION 22
#define INDEX_BREATHING_RATE_HARM_ENERG 23
#define INDEX_HEART_RATE_HARM_ENERG 24

#define INDEX_RANGE_PROFILE_START 35 //(LENGTH_DEBUG_DATA_OUT_BYTES+LENGTH_TLV_MESSAGE_HEADER_BYTES)/4  + 1

#define INDEX_IN_GLOBAL_FRAME_COUNT INDEX_GLOBAL_COUNT * 8
#define INDEX_IN_RANGE_BIN_INDEX LENGTH_MAGIC_WORD_BYTES + LENGTH_OFFSET_NIBBLES + INDEX_RANGE_BIN_PHASE * 8 + 4
#define INDEX_IN_DATA_CONFIDENCE_METRIC_HEART_4Hz LENGTH_MAGIC_WORD_BYTES + LENGTH_OFFSET_NIBBLES + INDEX_CONFIDENCE_METRIC_HEART_4Hz * 8
#define INDEX_IN_DATA_CONFIDENCE_METRIC_HEART_xCorr LENGTH_MAGIC_WORD_BYTES + LENGTH_OFFSET_NIBBLES + INDEX_CONFIDENCE_METRIC_HEART_xCorr * 8
#define INDEX_IN_DATA_PHASE LENGTH_MAGIC_WORD_BYTES + LENGTH_OFFSET_NIBBLES + INDEX_PHASE * 8
#define INDEX_IN_DATA_BREATHING_WAVEFORM LENGTH_MAGIC_WORD_BYTES + LENGTH_OFFSET_NIBBLES + INDEX_BREATHING_WAVEFORM * 8
#define INDEX_IN_DATA_HEART_WAVEFORM LENGTH_MAGIC_WORD_BYTES + LENGTH_OFFSET_NIBBLES + INDEX_HEART_WAVEFORM * 8
#define INDEX_IN_DATA_BREATHING_RATE_FFT LENGTH_MAGIC_WORD_BYTES + LENGTH_OFFSET_NIBBLES + INDEX_BREATHING_RATE_FFT * 8
#define INDEX_IN_DATA_HEART_RATE_EST_FFT LENGTH_MAGIC_WORD_BYTES + LENGTH_OFFSET_NIBBLES + INDEX_HEART_RATE_EST_FFT * 8
#define INDEX_IN_DATA_HEART_RATE_EST_FFT_4Hz LENGTH_MAGIC_WORD_BYTES + LENGTH_OFFSET_NIBBLES + INDEX_HEART_RATE_EST_FFT_4Hz * 8
#define INDEX_IN_DATA_HEART_RATE_EST_FFT_xCorr LENGTH_MAGIC_WORD_BYTES + LENGTH_OFFSET_NIBBLES + INDEX_HEART_RATE_EST_FFT_xCorr * 8
#define INDEX_IN_DATA_BREATHING_RATE_PEAK LENGTH_MAGIC_WORD_BYTES + LENGTH_OFFSET_NIBBLES + INDEX_BREATHING_RATE_PEAK * 8
#define INDEX_IN_DATA_HEART_RATE_EST_PEAK LENGTH_MAGIC_WORD_BYTES + LENGTH_OFFSET_NIBBLES + INDEX_HEART_RATE_EST_PEAK * 8
#define INDEX_IN_DATA_CONFIDENCE_METRIC_BREATH LENGTH_MAGIC_WORD_BYTES + LENGTH_OFFSET_NIBBLES + INDEX_CONFIDENCE_METRIC_BREATH * 8
#define INDEX_IN_DATA_CONFIDENCE_METRIC_HEART LENGTH_MAGIC_WORD_BYTES + LENGTH_OFFSET_NIBBLES + INDEX_CONFIDENCE_METRIC_HEART * 8
#define INDEX_IN_DATA_ENERGYWFM_BREATH LENGTH_MAGIC_WORD_BYTES + LENGTH_OFFSET_NIBBLES + INDEX_ENERGYWFM_BREATH * 8
#define INDEX_IN_DATA_ENERGYWFM_HEART LENGTH_MAGIC_WORD_BYTES + LENGTH_OFFSET_NIBBLES + INDEX_ENERGYWFM_HEART * 8
#define INDEX_IN_DATA_MOTION_DETECTION_FLAG LENGTH_MAGIC_WORD_BYTES + LENGTH_OFFSET_NIBBLES + INDEX_MOTION_DETECTION * 8
#define INDEX_IN_DATA_CONFIDENCE_METRIC_BREATH_xCorr LENGTH_MAGIC_WORD_BYTES + LENGTH_OFFSET_NIBBLES + INDEX_CONFIDENCE_METRIC_BREATH_xCorr * 8
#define INDEX_IN_DATA_BREATHING_RATE_HARM_ENERGY LENGTH_MAGIC_WORD_BYTES + LENGTH_OFFSET_NIBBLES + INDEX_BREATHING_RATE_HARM_ENERG * 8
#define INDEX_IN_DATA_BREATHING_RATE_xCorr LENGTH_MAGIC_WORD_BYTES + LENGTH_OFFSET_NIBBLES + INDEX_BREATHING_RATE_xCorr * 8

#define INDEX_IN_DATA_RANGE_PROFILE_START LENGTH_MAGIC_WORD_BYTES + LENGTH_OFFSET_NIBBLES + INDEX_RANGE_PROFILE_START * 8

#define NUM_PTS_DISTANCE_TIME_PLOT (256)
#define HEART_RATE_EST_MEDIAN_FLT_SIZE (200)
#define HEART_RATE_EST_FINAL_OUT_SIZE (200)
#define THRESH_HEART_CM (0.25)
#define THRESH_BREATH_CM (1.0)
#define BACK_THRESH_BPM (4)
#define BACK_THRESH_CM (0.20)
#define BACK_THRESH_4Hz_CM (0.15)
#define THRESH_BACK (30)
#define THRESH_DIFF_EST (20)
#define ALPHA_HEARTRATE_CM (0.2)
#define ALPHA_RCS (0.2)
#define APPLY_KALMAN_FILTER (0.0)

#define BreathRateMax 30
#define HeartRateMax 80
namespace Ui {
class RadarControl;
}

class RadarControl : public QWidget
{
    Q_OBJECT

public:
    explicit RadarControl(QWidget *parent = 0);
    ~RadarControl();
    static RadarControl* GetInstance();
    void testtxt();

    void on_pushButton_start_clicked();
    void on_pushButton_stop_clicked();
    void on_pushButton_pause_clicked();
    void on_pushButton_Refresh_clicked();
    void on_pushButton_settings_clicked();
    void gui_statusUpdate();

private:
    Ui::RadarControl *ui;
    QVector<double> xDistTimePlot, yDistTimePlot;
    QVector<double> breathingWfmBuffer, heartWfmBuffer;
    QPalette lcdpaletteBreathing, lcdpaletteNotBreathing;
    uint32_t localCount;
    uint32_t currIndex;
    bool FLAG_PAUSE;
    bool AUTO_DETECT_COM_PORTS;
    QByteArray dataBuffer;              // DataBuffer for storing the Serial Data
    int indexBuffer = 0;
    QString platform_EVM;               // Radar Device

    struct CfgParams {
    float rangeStartMeters;
    float rangeEndMeters;
    float samplingRateADC_ksps;
    int   numSamplesChirp;
    float freqSlope_MHZ_us;
    float stratFreq_GHz;
    float chirpDuration_us;
    float chirpBandwidth_kHz;
    float rangeMaximum_meters;
    int   rangeFFTsize;
    float rangeBinSize_meters;
    int rangeBinStart_index;
    int rangeBinEnd_index;
    int numRangeBinProcessed;
    int totalPayloadSize_bytes;
    int totalPayloadSize_nibbles;
    float AGC_thresh;
    } demoParams;
    int BreathRateovertimes;
    int HeartRateovertimes;
    CCtrlDashBoard     *m_DashBoard;
    CCtrlDashBoard     *m_DashBoard_2;
    static RadarControl *m_instatnce;
private slots:
    void    serialRecieved();
    int     nextPower2(int num);
    float   parseValueFloat(QByteArray data,  int valuePos, int valueSize);
    quint32 parseValueUint32(QByteArray data, int valuePos, int valueSize);
    quint16 parseValueUint16(QByteArray data, int valuePos, int valueSize);
    qint16  parseValueInt16(QByteArray data, int valuePos, int valueSize);
    bool    serialPortConfig(QSerialPort *serial, qint32 baudrate, QString dataPortNum );
    void    processData();
    void    setIndexdial();
    void    set_BreathRate_warningBox();
    void    set_HeartRate_warningBox();
    void    inivalue();

signals:
    void gui_statusChanged();
};

QT_END_NAMESPACE


#endif
