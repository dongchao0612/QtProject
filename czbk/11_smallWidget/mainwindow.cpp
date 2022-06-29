#include "mainwindow.h"
#include "ui_mainwindow.h"


#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

#if 0
    //点击获取，获取控件当前的值
    connect(ui->ButtonGet,&QPushButton::clicked,[=]()
    {
        qDebug()<<ui->smallwidget->getNum();

    });

    //设置到一半
    connect(ui->ButtonSet,&QPushButton::clicked,[=]()
    {
        ui->smallwidget->setNum(50);

    });
#endif
}

MainWindow::~MainWindow()
{
    delete ui;
}

#if 0
//这样也可以
void MainWindow::on_ButtonGet_clicked()
{
    qDebug()<<ui->smallwidget->getNum();
}

void MainWindow::on_ButtonSet_clicked()
{
    ui->smallwidget->setNum(50);
}
#endif
