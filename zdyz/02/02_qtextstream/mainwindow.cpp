#include "mainwindow.h"

#include <QFileDialog>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    /* 设置窗口的位置与大小 */
    this->setGeometry(0, 0, 800, 480);

    /* 布局设置 */
    textEdit = new QTextEdit();
    vBoxLayout = new QVBoxLayout();
    hBoxLayout = new QHBoxLayout();
    vWidget = new QWidget();
    hWidget = new QWidget();
    openPushButton = new QPushButton();
    closePushButton = new QPushButton();

    /* 设置两个按钮的大小 */
    openPushButton->setMinimumHeight(50);
    openPushButton->setMaximumWidth(120);
    closePushButton->setMinimumHeight(50);
    closePushButton->setMaximumWidth(120);

    /* 设置两个按钮的文本 */
    openPushButton->setText("打开");
    closePushButton->setText("关闭");

    /* 设置关闭按钮为不可用属性，需要打开文件才设置为可用属性 */
    closePushButton->setEnabled(false);

    /* 水平布局 */
    hBoxLayout->addWidget(openPushButton);
    hBoxLayout->addWidget(closePushButton);
    hWidget->setLayout(hBoxLayout);

    /* 垂直布局 */
    vBoxLayout->addWidget(textEdit);
    vBoxLayout->addWidget(hWidget);
    vWidget->setLayout(vBoxLayout);

    /* 居中 */
    setCentralWidget(vWidget);

    /* 信号槽连接 */
    connect(openPushButton, SIGNAL(clicked()),
            this, SLOT(openFile()));
    connect(closePushButton, SIGNAL(clicked()),
            this, SLOT(closeFile()));
}

MainWindow::~MainWindow()
{
}
bool MainWindow::openFile()
{
    /* 获取文件的路径 */
    QString fileName = QFileDialog::getOpenFileName(this);

    /* 指向文件 */
    file.setFileName(fileName);

    /* 判断文件是否存在 */
    if (!file.exists())
     return false;

    /* 以读写的方式打开 */
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
     return false;

    /* 使用文本流读取文件 */
    QTextStream stream(&file);

    /* 读取文本到textEdit */
    textEdit->setPlainText(stream.readAll());

    /* 设置打开按钮不可用，需要关闭再打开 */
    openPushButton->setEnabled(false);

    /* 设置关闭按钮为可用属性 */
    closePushButton->setEnabled(true);

    /* 关闭文件 */
    file.close();

    return true;
}
void MainWindow::closeFile()
{
    /* 检测打开按钮是否可用，不可用时，说明已经打开了文件 */
    if (!openPushButton->isEnabled()) {

        /* 以只读的方式打开 */
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
            return;

        /* 用文本流读取文件 */
        QTextStream stream(&file);

        /* 获取textEdit的文本内容，转为字符串 */
        QString str = textEdit->toPlainText();

        /* 使用流提取运算符，写入文本流 */
        stream<<str;

        /* 清空textEdit的显示内容 */
        textEdit->clear();

        /* 关闭文件 */
        file.close();

        /* 重新设置打开和关闭按钮的属性 */
        openPushButton->setEnabled(true);
        closePushButton->setEnabled(false);
    }
}
