#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QPainter>
#include <QPicture>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
#if 0
    //Pixmap 绘图设备专门为平台做了显示的优化
    QPixmap pix(300,300);

    //填充颜色
    pix.fill(Qt::white);

    // 声明画家
    QPainter painter(&pix);
    painter.setPen(QPen(Qt::green));
    painter.drawEllipse(QPoint(155,150),100,100);

    //保存
    pix.save("D:\\Document\\QtProject\\czbk\\14_QtPaintDevice\\pix.png");

#endif

#if 0
    //QImage 绘图设备  可以对像素进行访问
    QImage img(300,300,QImage::Format_RGB32);

    //填充颜色
    img.fill(Qt::white);

    // 声明画家
    QPainter painter(&img);
    painter.setPen(QPen(Qt::blue));
    painter.drawEllipse(QPoint(150,150) , 100,100);

    //保存
    img.save("D:\\Document\\QtProject\\czbk\\14_QtPaintDevice\\img.png");
#endif
    //QPicture 绘图设备  可以记录和重现 绘图指令
    QPicture pic;
    // 声明画家
    QPainter painter(this);
    painter.begin(&pic);// 开始画
    painter.setPen(QPen(Qt::cyan));
    painter.drawEllipse(QPoint(150,150) , 100,100);
    painter.end(); //结束画

    //保存
    pic.save("D:\\Document\\QtProject\\czbk\\14_QtPaintDevice\\pic.zt");
}

MainWindow::~MainWindow()
{
    delete ui;
}
//绘图事件
void MainWindow::paintEvent(QPaintEvent *)
{
#if 0
    QPainter painter(this);

    //利用QImage 对像素进行修改
    QImage img;
    img.load(":/Image/Luffy.png");


    //修改像素点
    for(int i = 50 ;i < 100 ; i++)
    {
        for(int j = 50 ; j < 100;j++)
        {
            QRgb value = qRgb(255,255,0);
            img.setPixel(i,j,value);
        }
    }
    img.save("D:\\Document\\QtProject\\czbk\\14_QtPaintDevice\\Image\\Luffy1.png");
    painter.drawImage(0,0,img);

#endif

    //重现QPicture的绘图指令
    QPainter painter(this);
    QPicture pic;
    pic.load("D:\\Document\\QtProject\\czbk\\14_QtPaintDevice\\pic.zt");
    painter.drawPicture(0,0,pic);

}

