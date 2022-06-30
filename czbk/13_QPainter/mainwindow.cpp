#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPaintEvent>
#include <QPainter>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //点击移动按钮，移动图片
    connect(ui->pushButton,&QPushButton::clicked,[=](){

        posX+=20;
        //如果要手动调用绘图事件 用update更新
        update();
    });


//    QTimer * timer = new QTimer(this);
//    timer->start(10);

//    connect(timer,&QTimer::timeout,[=](){
//        posX++;
//        update();
//    });

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event)
{
#if 0
    //实例化画家对象  this指定的是绘图设备
    QPainter painter(this);

//    //设置画笔
//    QPen pen(QColor(255,0,0));
//    //设置画笔宽度
//    pen.setWidth(1);
//    //设置画笔风格
//    pen.setStyle(Qt::DotLine);
//    //让画家 使用这个笔
//    painter.setPen(pen);

    //设置画刷
    QBrush brush(Qt::cyan);
    //设置画刷风格
    brush.setStyle(Qt::Dense3Pattern);
    //让画家使用画刷
    painter.setBrush(brush);

    //画线
    painter.drawLine(QPoint(0,0),QPoint(100,100));
    //画圆 椭圆
    painter.drawEllipse( QPoint(100,100) , 50,50);
    //画矩形
    painter.drawRect(QRect(100,100,50,50));
    //画文字
    painter.drawText(QRect(10,200,150,50) , "好好学习，天天向上");
#endif

    //////////////////////////////高级设置 /////////////////////////////
#if 0
     QPainter painter(this);

    painter.drawEllipse(QPoint(100,50) , 100,100);
    //设置 抗锯齿能力  效率较低
    painter.setRenderHint(QPainter::Antialiasing);
    painter.drawEllipse(QPoint(200,50) , 100,100);


    //画矩形
    painter.drawRect(QRect(20,20,50,50));

    //移动画家
    painter.translate(100,0);

    //保存画家状态
    painter.save();

    painter.drawRect(QRect(20,20,50,50));

    painter.translate(100,0);

    //还原画家保存状态
    painter.restore();

    painter.drawRect(QRect(20,20,50,50));
#endif
    /////////////////////////////////利用画家 画资源图片 ///////////////////
    QPainter painter(this);
    QPixmap pix = QPixmap(":/Image/Luffy.png");

   //如果超出屏幕 从0开始
    if(posX >= this->width())
    {
        posX = -pix.width();
    }

    painter.drawPixmap(posX,0,pix);
}

