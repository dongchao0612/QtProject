#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    /*设置宽高为800x480*/
    this->setGeometry(0,0,800,480);

    /*实例化两个按钮对象*/
    pushButton1=new QPushButton("窗口皮肤1",this);
    pushButton2 =new QPushButton("窗口皮肤2",this);


    /*设置两个QPushButton对象的位置*/
    pushButton1->setGeometry(300,200,80,40);
    pushButton2->setGeometry(400,200,80,40);

    /*信号槽连接*/
    connect(pushButton1,SIGNAL(clicked()),this,SLOT(pushButton1_Clicked()));
    connect(pushButton2,SIGNAL(clicked()),this,SLOT(pushButton2_Clicked()));
}

MainWindow::~MainWindow()
{
}

/*槽函数的实现*/
void MainWindow::pushButton1_Clicked()
{
    /*设置主窗口的样式1*/
    this->setStyleSheet("QMainWindow{background-color:rgba(255,245,238,100%);}");

}
/*槽函数的实现*/
void MainWindow::pushButton2_Clicked()
{
    /*设置主窗口的样式1*/
    this->setStyleSheet("QMainWindow{background-color:rgba(238,255,233,100%);}");

}

