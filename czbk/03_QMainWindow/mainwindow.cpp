#include "mainwindow.h"

#include <QMenuBar>
#include <QMenu>
#include <QToolBar>
#include <QDebug>
#include <QAction>
#include <QPushButton>
#include <QStatusBar>
#include <QLabel>
#include <QDockWidget>
#include <QTextEdit>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //充值窗口大小
    this->resize(600,400);

    //创建菜单栏，只能有一个
    QMenuBar *bar= new QMenuBar();
    this->setMenuBar(bar);

    //创建菜单
    QMenu *fileMenu=bar->addMenu("文件");
    QMenu *fileEdit=bar->addMenu("编辑");

    //创建菜单项
    QAction *newAction = fileMenu->addAction("新建");
    //添加分隔线
    fileMenu->addSeparator();
    QAction *openAction = fileMenu->addAction("打开");

    //工具栏，可以有多个
    QToolBar *toolBar=new QToolBar(this);
    this->addToolBar(Qt::LeftToolBarArea,toolBar);

    //设置只允许左右停靠
    toolBar->setAllowedAreas(Qt::LeftToolBarArea|Qt::RightToolBarArea);

    //设置浮动
    toolBar->setFloatable(false);

    //设置移动[总开关]
    toolBar->setMovable(true);

     //设置内容
    toolBar->addAction(newAction);
    //添加分隔线
    toolBar->addSeparator();
    toolBar->addAction(openAction);

    //工具栏中添加小的控件
    QPushButton *btn=new QPushButton("btn",this);
    toolBar->addWidget(btn);

    //状态栏,最多有一个
    QStatusBar *stBar= new QStatusBar();
    this->setStatusBar(stBar);
    //标签控件
    QLabel *label1=new QLabel("左边提示信息",this);
    QLabel *label2=new QLabel("右边提示信息",this);
    stBar->addWidget(label1);
    stBar->addPermanentWidget(label2);

    //铆接部件[浮动窗口],可以有多个
    QDockWidget *dockwidget=new QDockWidget("浮动",this);
    this->addDockWidget(Qt::BottomDockWidgetArea,dockwidget);

    //设置后期停靠区域，只允许上下
    dockwidget->setAllowedAreas(Qt::TopDockWidgetArea|Qt::BottomDockWidgetArea);

    //设置中心部件,只能由一个
    QTextEdit *edit=new QTextEdit(this);
    this->setCentralWidget(edit);
}

MainWindow::~MainWindow()
{
}

