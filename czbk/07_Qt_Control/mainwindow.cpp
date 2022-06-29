#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //设置单选按钮
    ui->rButtonMan->setChecked(true);

    //选中女生，打印信息
    connect(ui->rButtonWoman,&QPushButton::clicked,[=]
    {
        qDebug()<<"选中了女生";
    });
    connect(ui->cBox,&QCheckBox::stateChanged,[=](int state)
    {
        switch(state){
            /*选中状态*/
            case Qt::Checked:
                qDebug()<<"选中状态";
                break;
            /*未选中状态*/
            case ::Qt::Unchecked:
               qDebug()<<"未选中状态";
                break;
            /*半选状态*/
            case::Qt::PartiallyChecked:
                qDebug()<<"半选状态";
                break;
        default:
            break;
        }
    });


    //利用QListWidgetItem写诗
    // QListWidgetItem * item= new QListWidgetItem("锄禾日当午");
    //将一行诗放入到listWidget控件中
    // ui->listWidget->addItem(item);

    // item->setTextAlignment(Qt::AlignHCenter);


    //QStringList  QList<QString>

    QStringList list;
    list<<"锄禾日当午"<<"汗滴禾下土"<<"谁知盘盘中餐"<<"粒粒皆辛苦";
    ui->listWidget->addItems(list);

}

MainWindow::~MainWindow()
{
    delete ui;
}
