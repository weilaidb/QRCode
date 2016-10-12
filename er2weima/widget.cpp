#include "widget.h"
#include "ui_widget.h"
#include <qdebug.h>
#include<QCryptographicHash>

const char *Widget::str1 ="http://www.baidu.com";

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{

    ui->setupUi(this);
    weimawidget=new erweima(this);
    weimawidget->move(20,30);

}

Widget::~Widget()
{
    delete ui;
}



void Widget::on_pushButton_clicked()
{

    const QByteArray text = ui->lineEdit->text().toLocal8Bit();
    const char *data = text.data();

    weimawidget->setstr(data);

}

void Widget::on_pushButton_2_clicked()
{



   }

   void Widget::replyFinished(QNetworkReply *reply)
   {
      qDebug()<<"---------------------------";
       //获取响应的信息，状态码为200表示正常
         QVariant status_code = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute);
    qDebug()<<reply->readAll();;
         //无错误返回
         if(reply->error() == QNetworkReply::NoError)
         {
           ui->download_Btn->setText("success");
           QByteArray bytes = reply->readAll();
           QString result(bytes);  //转化为字符串
           qDebug()<<result;
         }
         else
         {
           //处理错误
            ui->download_Btn->setText("failed");
         }

      //reply->deleteLater();//要删除reply，但是不能在repyfinished里直接delete，要调用deletelater;
}
