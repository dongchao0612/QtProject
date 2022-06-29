#ifndef MYLABEL_H
#define MYLABEL_H

#include <QLabel>

class mylabel : public QLabel
{
    Q_OBJECT
public:
    explicit mylabel(QWidget *parent = nullptr);


    //鼠标进入事件
    void enterEvent(QEvent *event);

    //鼠标离开事件
    void leaveEvent(QEvent *event );

    //鼠标移动事件
    virtual void mouseMoveEvent(QMouseEvent *event);

    //鼠标按压事件
    virtual void mousePressEvent(QMouseEvent *event);

    //鼠标释放事件
    virtual void mouseReleaseEvent(QMouseEvent *event);


signals:

};

#endif // MYLABEL_H
