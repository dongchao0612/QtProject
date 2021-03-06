#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMovie>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //栈控件使用
        //设置默认定位 scrollArea
        ui->stackedWidget->setCurrentIndex(1);

        //scrollArea按钮
        connect(ui->btn_ScrollArea,&QPushButton::clicked,[=](){
            ui->stackedWidget->setCurrentIndex(1);
        });

        //toolBox按钮
        connect(ui->btn_ToolBox,&QPushButton::clicked,[=](){
            ui->stackedWidget->setCurrentIndex(2);
        });

        //TabWidget按钮
        connect(ui->btn_Tabwidget,&QPushButton::clicked,[=](){
            ui->stackedWidget->setCurrentIndex(0);
        });

        //下拉框
        ui->comboBox->addItem("奔驰");
        ui->comboBox->addItem("宝马");
        ui->comboBox->addItem("拖拉机");

        //点击按钮 选中拖拉机选项
        connect(ui->btn_select,&QPushButton::clicked,[=](){
            //ui->comboBox->setCurrentIndex(2);
            ui->comboBox->setCurrentText("拖拉机");
        });

        //利用QLabel显示图片
        //ui->lbl_Image->setPixmap(QPixmap(":/Image/butterfly.png"));

        //利用QLabel显示 gif动态图片
        QMovie * movie = new QMovie(":/Image/mario.gif");
        ui->lbl_movie->setMovie(movie);
        //播放动图
        movie->start();

}

MainWindow::~MainWindow()
{
    delete ui;
}

