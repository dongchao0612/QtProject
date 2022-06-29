#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    /* 设置主窗体位置与大小 */
    this->setGeometry(0, 0, 800, 480);

    scrollArea = new QScrollArea(this);
    /* 设置滚动区域为700*380 */
    scrollArea->setGeometry(50, 50, 700, 380);

    label = new QLabel();
    /* label显示的lantingxu.png图片分辨率为1076*500 */
    //QImage image(":/images/lantingxu.png");
    //label->setPixmap(QPixmap::fromImage(image));

    // label->setStyleSheet ("background-image:url(:/images/lantingxu.png);" );
    // label->setGeometry(0, 0, 1070, 500);

    //QPixmap pixmap(":/images/lantingxu.png");
    //label->setPixmap(pixmap);

    scrollArea->setWidget(label);
}

MainWindow::~MainWindow()
{
}

