#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QFile>
#include <QTextCodec>
#include <QFileInfo>
#include <QDebug>
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //点击选取文件按钮，弹出文件对话框
    connect(ui->pushButton,&QPushButton::clicked,[=](){
        QString path = QFileDialog::getOpenFileName(this,"打开文件","D:\\Document\\QtProject\\czbk\\15_Qt_QFile","Text files (*.txt)");

        //将路径放入到lineEdit中
        ui->lineEdit->setText(path);

        //编码格式类
        QTextCodec * codec = QTextCodec::codecForName("utf-8");

        //读取内容 放入到 textEdit中
        QFile file(path); //参数就是读取文件的路径  //默认支持格式utf-8
        file.open(QIODevice::ReadOnly);

        // QByteArray array = file.readAll(); //字节数组
        QByteArray array;
        while( !file.atEnd())
        {
            array += file.readLine(); //按行读
        }

        // ui->textEdit->setText(array);  //utf-8
        ui->textEdit->setText(codec->toUnicode(array)); //gbk

        //对文件对象进行关闭
        file.close();


//        //进行写文件
//        file.open(QIODevice::Append); //用追加方式进行写
//        file.write("啊啊啊啊啊");
//        file.close();


        //QFileInfo 文件信息类
        QFileInfo info(path);

        qDebug() << "大小：" << info.size() << " 后缀名：" << info.suffix() << " 文件名称："<<info.fileName() << " 文件路径："<< info.filePath();
        // qDebug() << "创建日期：" << info.created().toString("yyyy/MM/dd hh:mm:ss");
        qDebug() << "创建日期：" << info.birthTime().toString("yyyy/MM/dd hh:mm:ss");
        qDebug() << "最后修改日期："<<info.lastModified().toString("yyyy-MM-dd hh:mm:ss");
        // qDebug() <<info.lastModified().date().year();
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}

