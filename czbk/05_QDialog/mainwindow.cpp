#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDialog>
#include <QDebug>
#include <QMessageBox>
#include <QColorDialog>
#include <QFileDialog>
#include <QFontDialog>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //点击新建。添加一个对话框
    connect(ui->actionnew,&QAction::triggered,[=]()
    {
        // 对话框 模态(可以对其他窗口操作)，非模态(不可以对其他窗口操作)
        // 模态阻塞
        // QDialog dialog(this);
        // dialog.resize(200,100);
        // dialog.exec();

        // QDialog *dialog =new QDialog(this);
        // dialog->resize(200,100);
        // dialog->exec();
        // qDebug()<<"模态对话框弹出了";

        //        QDialog *dialog2 =new QDialog(this);
        //        dialog2->resize(200,100);
        //        dialog2->show();
        //        dialog2->setAttribute(Qt::WA_DeleteOnClose);  //55号属性
        //        qDebug()<<"非模态对话框弹出了";

        // QMessageBox::critical(this,"critical","错误");
        // QMessageBox::information(this,"information","信息");

        // 参数:父窗体 标题 内容 案件类型 默认关联回车
        // 返回值:按钮类型
        // if(QMessageBox::question(this,"question","提问",QMessageBox::Save|QMessageBox::Cancel,QMessageBox::Cancel)==QMessageBox::Save)
        // {
        //     qDebug()<<"点击了保存";
        // }
        // else
        // {
        //     qDebug()<<"点击了取消";
        // }

        // QMessageBox::warning(this,"warning","警告");

#if 0
        QColor qc = QColor(255,0,0);
        QColor qcolor = QColorDialog::getColor(qc);

        QColor *qc1 = new QColor(255,0,0);
        QColor qcolor1 = QColorDialog::getColor(*qc1);

        QColor qc3(255,0,0);
        QColor qcolor3 = QColorDialog::getColor(qc3);
#endif
        // QColor qcolor4 = QColorDialog::getColor(QColor(255,0,0));

        // qDebug()<<"r = "<<qcolor4.red()<<"\tg = "<<qcolor4.green()<<"\tb = "<<qcolor4.blue();

        // 参数:父窗体 标题 路径 过滤文件格式
        // 返回值:
        // QString str=QFileDialog::getOpenFileName(this,"打开文件","C:/Users/32243/Desktop","(*.txt)");
        // qDebug()<<str;// 路径

        bool flag;

        QFont qf = QFontDialog::getFont(&flag,QFont("宋体",36));
        qDebug()<<qf.family().toUtf8().data()<<qf.pointSize()<<qf.bold()<<qf.italic();
    }
    );
}

MainWindow::~MainWindow()
{
    delete ui;
}

