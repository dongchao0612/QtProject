#include "mainwindow.h"
#include <QStyle>
#include <QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{

    /*设置主窗体大小*/
    this->setGeometry(0,0,800,480);

    /*实例化QToolBar对象*/
    toolBar=new QToolBar(this);
    toolBar->setGeometry(0,0,800,100);

    /*实例化QToolBar对象,用于设置风格调用自带的图标*/
    QStyle *style=QApplication::style();

    /*使用qt自带的标准图标，可以在帮助文档搜索QStyle::StandardPixmap*/
    QIcon icon=style->standardIcon(QStyle::SP_TitleBarContextHelpButton);

    /*实例化QToolButton对象*/
    toolButton= new QToolButton();

    /*显示图标*/
    toolButton->setIcon(icon);

    /*设置要显示的文字*/
    toolButton->setText("帮助");

    /*调用setToolButtonStyle方法，设置toolButton的样式，设置为文本置于图标下方*/
    toolButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

    /*最后将toolButton添加到ToolBar里面*/
    toolBar->addWidget(toolButton);

}

MainWindow::~MainWindow()
{
}

