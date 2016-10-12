#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <qrencode.h>
#include<QPaintEvent>
#include<qpainter.h>
#include"erweima.h"
#include<QNetworkAccessManager>
#include<QNetworkRequest>
#include<QNetworkReply>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
void replyFinished(QNetworkReply*);
private:
    Ui::Widget *ui;

    QByteArray post_data;
    QByteArray md5str;

static const char *str1/* ="http://www.baidu.com"*/;
erweima *weimawidget;




};

#endif // WIDGET_H
