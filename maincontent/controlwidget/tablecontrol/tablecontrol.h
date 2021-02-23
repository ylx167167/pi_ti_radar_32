/*****************************************
 * 作者: YYC
 * 日期: 2020-04-26
 * 功能：表格
 * ***************************************/
#ifndef TABLECONTROL_H
#define TABLECONTROL_H

#include <QWidget>
#include <QMap>
#include "radarconfig.h"

namespace Ui {
class TableControl;
}



class TableControl : public QWidget
{
    Q_OBJECT
public:
    explicit TableControl(QWidget *parent = nullptr);
    ~TableControl();
    static TableControl* GetInstance();

private slots:
    void on_pushButton_start_clicked();

    void on_pushButton_pause_clicked();

    void on_pushButton_stop_clicked();

    void on_pushButton_Refresh_clicked();

    void on_pushButton_settings_clicked();

    void set_logoButoonIcon();

    void set_thiswidgetui();

    void set_tx_lineEdit_UART_port(const QString vartx);

    void set_tx_lineEdit_data_port(const QString vartx);

    int check_radarconfig();
    void gui_statusUpdate();
private:
    Ui::TableControl *ui;
    static TableControl *m_instatnce;
private:
    void initValue();

signals:
    void gui_statusChanged();
};

#endif // TABLECONTROL_H
