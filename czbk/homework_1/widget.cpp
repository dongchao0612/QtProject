#include "widget.h"
#include "ui_widget.h"

#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("homework");
    this->setGeometry(0,0,800,400);

    widget= new QWidget();
    widget->setWindowTitle("new windows");

    openpushbutton=new QPushButton("open",this);
    openpushbutton->move(250,200);

    closepushbutton =new QPushButton("close",this);
    closepushbutton->move(500,200);
    connect(openpushbutton,&QPushButton::clicked,this,&Widget::open);
    connect(closepushbutton,&QPushButton::clicked,this,&Widget::close);
}

Widget::~Widget()
{

    delete ui;
}
void Widget::open()
{
    widget->show();
}
void Widget::close()
{
    widget->close();
}

