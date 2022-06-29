#include "mainwindow.h"

#include <QDebug>


MainWindow::MainWindow(QWidget *parent): QMainWindow(parent)
{
    /*主窗体设置位置和显示大小*/
    this->setGeometry(0,0,800,480);
    this->setStyleSheet("QMainWindow {background-color: rgba(200, 50, 100, 100%);}");

    /* 实例化对象 */
    radioButton1 = new QRadioButton(this);
    radioButton2 = new QRadioButton(this);

    /* 设置两个QRadioButton的位置和显示大小 */
    radioButton1->setGeometry(300, 200, 100, 50);
    radioButton2->setGeometry(400, 200, 100, 50);

    /* 设置两个QRadioButton的显示文本 */
    radioButton1->setText("开关一");
    radioButton2->setText("开关二");

    /* 设置初始状态，radioButton1的Checked为false,另一个为true*/
    radioButton1->setChecked(false);
    radioButton2->setChecked(true);

    /* 连接checkBox的信号stateChanged(int)，与我们定义的槽checkBoxStateChanged(int)连接 */
    connect(radioButton1, SIGNAL(clicked()), this, SLOT(print(int )));
    connect(radioButton2, SIGNAL(clicked()), this, SLOT(print(int )));

/*
    radioButton1->setStyleSheet("QRadioButton{spacing:2px;color:white;}"
                                "QRadioButton::indicator{width:45px;height:30px}"
                                "QRadioButton::indicator:unchecked{image:url(:/images/switch_off.png);}"
                                "QRadioButton::indicator:checked{image:url(:/images/switch_on.png);}");
    radioButton2->setStyleSheet("QRadioButton{spacing:2px;color:white;}"
                                "QRadioButton::indicator{width:45px;height:30px}"
                                "QRadioButton::indicator:unchecked{image:url(:/images/switch_off.png);}"
                                "QRadioButton::indicator:checked{image:url(:/images/switch_on.png);}");
*/

}

MainWindow::~MainWindow()
{
}

void MainWindow::print(int i )
{
    if (radioButton1)
        qDebug()<<"radioButton1被点击了！";
    else
       qDebug()<<"radioButton2被点击了！";
}

