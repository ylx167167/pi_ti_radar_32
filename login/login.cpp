#include "login.h"
#include "ui_login.h"
#include <radarconfig.h>
#include <screen/mainobject.h>
#include <globaldef.hpp>

#include <QMessageBox>
Drive_INFO Drive;
login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    QPalette palette;
    palette.setBrush (this->backgroundRole(), QBrush (QPixmap (":/res/res/image/other/splash2.jpg")));
    this->setPalette (palette);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    ui->label->setStyleSheet("color: #000000");
    ui->label_2->setStyleSheet("color: #000000");
    ui->label_3->setStyleSheet("color: #ff0000");
    ui->label->setAttribute(Qt::WA_TranslucentBackground);
    ui->label_2->setAttribute(Qt::WA_TranslucentBackground);
    ui->label_3->setAttribute(Qt::WA_TranslucentBackground);
    ui->lineEdit->setStyleSheet("background-color: rgb(255, 255, 255);");
    ui->lineEdit_2->setStyleSheet("background-color: rgb(255, 255, 255);");
    ui->loginBt->setStyleSheet("background-color: rgb(255, 128, 64);");

    Qt::WindowFlags flags=Qt::Dialog;
    flags |=Qt::WindowCloseButtonHint;
    setWindowFlags(flags);
}

login::~login()
{
    delete ui;
}

void  login::on_loginBt_clicked(){
    Drive.Did= ui->lineEdit->text();
    Drive.Vid= ui->lineEdit_2->text();

    if(ui->lineEdit->text().trimmed() == tr("Wayneyao") && ui->lineEdit_2->text() == tr("123456"))
    {
       accept();
    }
    else
    {                              //标题              内容                OK按钮
       QMessageBox::warning(this, tr("警告！"),tr("用户名或密码错误！"),QMessageBox::Yes);

    // 清空输入框内容
       ui->lineEdit->clear();
       ui->lineEdit_2->clear();

       //光标定位
       ui->lineEdit->setFocus();
    }
    this->close();
}
