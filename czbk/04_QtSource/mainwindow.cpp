#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QIcon>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // ui->actionnew->setIcon(QIcon("C:/Users/32243/Desktop/QtLearn/day2/Code/02_QtSource/Image/Luffy.png"));

    //添加QT资源

     ui->actionnew->setIcon(QIcon(":/Image/Luffy.png"));
     ui->actionopen->setIcon(QIcon(":/Image/LuffyQ.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

