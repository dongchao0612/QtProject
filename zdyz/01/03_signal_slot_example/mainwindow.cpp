#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    /*设置窗体的宽800 高480*/
    this->resize(800,480);

    /*实例化pushButton对象*/
    pushButton=new QPushButton(this);

    /*调用setText方法设置按键文本*/
    pushButton->setText("我是一个按钮");

    /*信号与槽连接*/
    connect(pushButton,SIGNAL(clicked()),this,
                        SLOT(pushButtonClicked()));

    connect(this,SIGNAL(pushButtonTextChanged()),this,
                        SLOT(changedButtonText()));
}

MainWindow::~MainWindow()
{
}
void MainWindow::pushButtonClicked()
{
    emit pushButtonTextChanged();  //发送信号
}
void MainWindow::changedButtonText()

{
    pushButton->setText("被点击了！");
}
