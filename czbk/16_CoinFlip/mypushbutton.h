#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QPushButton>

class MyPushButton : public QPushButton
{
    Q_OBJECT
public:
    explicit MyPushButton(QWidget *parent = nullptr);
    //normalImg 代表正常显示的图片
    //pressImg  代表按下后显示的图片，默认为空
    MyPushButton(QString normalImg,QString pressImg = "");

    QString normalImgPath;  //默认显示图片路径
    QString pressedImgPath; //按下后显示图片路径

    //弹跳特效
    void zoom1(); //向下跳
    void zoom2(); //向上跳

    //重写按钮 按下 和 释放事件
    void mousePressEvent(QMouseEvent *e);

    void mouseReleaseEvent(QMouseEvent *e);


signals:


};

#endif // MYPUSHBUTTON_H
