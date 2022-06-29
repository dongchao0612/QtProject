#include "mainwindow.h"

/*引入QDebug*/
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    /*主窗体设置位置和显示的大小*/
    this->setGeometry(0, 0, 800, 480);

    /*实例化并设置按钮的盒子大小和位置*/
    dialogButtonBox=new QDialogButtonBox(this);
    dialogButtonBox->setGeometry(300,200,200,30);

    /*使用Qt的cancel按钮*/
    dialogButtonBox->addButton(QDialogButtonBox::Cancel);
    dialogButtonBox->addButton(QDialogButtonBox::Help);

    /*将英文"Cancel"按钮设置为中文"取消" */
    dialogButtonBox->button(QDialogButtonBox::Cancel)->setText("取消");
    dialogButtonBox->button(QDialogButtonBox::Help)->setText("帮助");

    /*设定位置和大小*/
    // pushButton1 = new QPushButton(tr("自定义1"));
    pushButton1=new QPushButton("自定义1",this);
    pushButton2=new QPushButton("自定义2",this);

    /* 将pushButton添加到dialogButtonBox，并设定ButtonRole为ActionRole */
    dialogButtonBox->addButton(pushButton1, QDialogButtonBox::ActionRole);
    dialogButtonBox->addButton(pushButton2, QDialogButtonBox::ActionRole);

    /* 信号槽连接，带参数QAbstractButton *，用于判断用户点击哪个按键 */
    connect(dialogButtonBox, SIGNAL(clicked(QAbstractButton * )),this, SLOT(dialogButtonBoxClicked(QAbstractButton *)));
    // connect(dialogButtonBox, SIGNAL(clicked(QDialogButtonBox * )),this, SLOT(dialogButtonBoxClicked(QDialogButtonBox *)));
}

MainWindow::~MainWindow()
{

}
void MainWindow::dialogButtonBoxClicked(QAbstractButton *button)
{
    /* 判断点击的对象是否为QDialogButtonBox::Cancel */
    if(button == dialogButtonBox->button(QDialogButtonBox::Cancel)) {
        /* 打印“单击了取消键” */
        qDebug() <<"单击了取消键"<<endl;
    }
    /* 判断点击的对象是否为QDialogButtonBox::Cancel */
    else if(button==dialogButtonBox->button(QDialogButtonBox::Help)){
        /* 打印“单击了帮助键” */
        qDebug() <<"单击了帮助键"<<endl;
    /* 判断点击的对象是否为pushButton */
    }else if(button == pushButton1) {
        /* 打印“单击了自定义1键” */
        qDebug() <<"单击了自定义1键"<<endl;
    }else if(button == pushButton2) {
         /* 打印“单击了自定义2键” */
        qDebug() <<"单击了自定义2键"<<endl;
    }

//    /* 判断点击的对象是否为QDialogButtonBox::Cancel */
//    if(button ==  button(QDialogButtonBox::Cancel) ) {
//        /* 打印“单击了取消键” */
//        qDebug() <<"单击了取消键"<<endl;
//    }
//    /* 判断点击的对象是否为QDialogButtonBox::Cancel */
//    else if(button== button(QDialogButtonBox::Help)){
//        /* 打印“单击了帮助键” */
//        qDebug() <<"单击了帮助键"<<endl;
}


