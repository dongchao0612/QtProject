#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTimer>
#include <QMouseEvent>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->label_2->setText(0);
    ui->label_3->setText(0);
    ui->label_4->setText(0);

    //启动定时器方式1
    id_1=this->startTimer(1000);// 间隔 单位毫秒

    id_2=this->startTimer(2000);



    ui->lcdNumber->setDigitCount(8);
    ui->lcdNumber->setMode(QLCDNumber::Dec);
    ui->lcdNumber->setSegmentStyle(QLCDNumber::Flat);
    ui->lcdNumber->display(0);

    //启动定时器方式2
    QTimer *timer=new QTimer(this);

    timer->start(500);

    /* 信号槽连接 */
    connect(timer,&QTimer::timeout,[=](){
        static int num3=1;
        int temp=num3++;
        //label_4每隔两秒加一
        ui->label_4->setText(QString::number(temp));
        ui->lcdNumber->display(temp);
    });

    //点击暂停按钮  实现停止定时器
    connect(ui->pushButton,&QPushButton::clicked,[=](){
        timer->stop();
    });

    //给label1 安装事件过滤器
    // 步骤1  安装事件过滤器
    ui->label->installEventFilter(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::timerEvent(QTimerEvent *e)
{
    if(e->timerId()==id_1)
    {
        static int num1=1;
        //label_2每隔一秒加一
        ui->label_2->setText(QString::number(num1++));
    }
    if(e->timerId()==id_2)
    {
        static int num2=1;
        //label_3每隔两秒加一
        ui->label_3->setText(QString::number(num2++));

    }
}

// 步骤2  重写 eventfilter事件
bool MainWindow::eventFilter(QObject * obj , QEvent * e)
{
   if(obj == ui->label)
   {
       if(e->type() == QEvent::MouseButtonPress)
       {
           QMouseEvent * ev  = static_cast<QMouseEvent *>(e);
           QString str = QString( "事件过滤器中：：鼠标按下了 x = %1   y = %2  globalX = %3 globalY = %4 " ).arg(ev->x()).arg(ev->y()).arg(ev->globalX()).arg(ev->globalY());
           qDebug() << str;

           return true; //true代表用户自己处理这个事件，不向下分发
       }
   }

   //其他默认处理
   return QWidget::eventFilter(obj,e);
}
