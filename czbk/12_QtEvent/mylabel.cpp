#include "mylabel.h"
#include <QDebug>
#include <QString>
#include <QMouseEvent>
mylabel::mylabel(QWidget *parent) : QLabel(parent)
{
    //设置鼠标追踪
    // this->setMouseTracking(true);
}

//鼠标进入事件
void mylabel::enterEvent(QEvent *event)
{
    //qDebug()<<"鼠标进入了";
}

//鼠标离开事件
void mylabel::leaveEvent(QEvent *event )
{

    // qDebug()<<"鼠标离开了";
}

//鼠标按下
void mylabel::mousePressEvent(QMouseEvent *ev)
{

    //当鼠标左键按下  提示信息
//    if( ev->button() ==  Qt::LeftButton)
//    {
        QString str = QString( "鼠标按下了 x = %1   y = %2  globalX = %3 globalY = %4 " ).arg(ev->x()).arg(ev->y()).arg(ev->globalX()).arg(ev->globalY());
        qDebug() << str;
//    }
}

//鼠标释放
void mylabel::mouseReleaseEvent(QMouseEvent *ev)
{

//    if( ev->button() ==  Qt::LeftButton)
//    {
        QString str = QString( "鼠标释放了 x = %1   y = %2  globalX = %3 globalY = %4 " ).arg(ev->x()).arg(ev->y()).arg(ev->globalX()).arg(ev->globalY());

        qDebug() << str;
//    }

}

//鼠标移动
void mylabel::mouseMoveEvent(QMouseEvent *ev)
{
    if( ev->buttons() &   Qt::LeftButton )  //位操作
    {
        QString str = QString( "鼠标移动了 x = %1   y = %2  globalX = %3 globalY = %4 " ).arg(ev->x()).arg(ev->y()).arg(ev->globalX()).arg(ev->globalY());

        qDebug() << str;
   }
}

bool mylabel::event(QEvent *event)
{
    if(event->type() == QEvent::MouseButtonPress)
    {
        QMouseEvent * ev  = static_cast<QMouseEvent *>(event);
        QString str = QString( "Event函数中：：鼠标按下了 x = %1   y = %2  globalX = %3 globalY = %4 " ).arg(ev->x()).arg(ev->y()).arg(ev->globalX()).arg(ev->globalY());
        qDebug() << str;

        return true; //true代表用户自己处理这个事件，不向下分发
    }

    //其他事件 交给父类处理  默认处理
    return QLabel::event(event);
}