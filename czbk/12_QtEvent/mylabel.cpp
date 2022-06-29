#include "mylabel.h"
#include <QDebug>
#include <QString>
#include <QMouseEvent>
mylabel::mylabel(QWidget *parent) : QLabel(parent)
{
    //设置鼠标追踪
    this->setMouseTracking(true);
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

//鼠标移动事件
void mylabel::mouseMoveEvent(QMouseEvent *event)
{
 //   if(event->buttons() & Qt::LeftButton)
 //   {
        QString str=QString("鼠标移动了x = %1, y = %2, globalX = %3, globalY = %4 ")
                .arg(event->x()).arg(event->y()).arg(event->globalX()).arg(event->globalY());
        qDebug()<<str.toUtf8().data();
 //   }
    // qDebug()<<"鼠标移动了";
}
//鼠标按压事件
void mylabel::mousePressEvent(QMouseEvent *event)
{
 //   if(event->button()==Qt::LeftButton) //位操作
 //   {
        QString str=QString("鼠标按压了x = %1, y = %2, globalX = %3, globalY = %4 ")
                .arg(event->x()).arg(event->y()).arg(event->globalX()).arg(event->globalY());
        qDebug()<<str.toUtf8().data();
 //   }

    // qDebug()<<"鼠标按压了"<<"x = "<<event->x()<<", y = "<<event->y();
}
//鼠标释放事件
void mylabel::mouseReleaseEvent(QMouseEvent *event)
{
 //   if(event->button()==Qt::LeftButton)
 //   {
        QString str=QString("鼠标释放了x = %1, y = %2, globalX = %3, globalY = %4 ")
                .arg(event->x()).arg(event->y()).arg(event->globalX()).arg(event->globalY());
        qDebug()<<str.toUtf8().data();
 //   }
    // qDebug()<<"鼠标释放了";
}