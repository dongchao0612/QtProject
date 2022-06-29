#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent)
{

    /* 主窗体设置位置和显示的大小及背景颜色 */
        this->setGeometry(0, 0, 800, 480);
        this->setStyleSheet("QMainWindow {background-color: rgba(150, 200, 100, 50%);}");

        /* 实例化对象 */
        checkBox = new QCheckBox(this);

        /* 设置QCheckBox位置和显示大小 */
        checkBox->setGeometry(350, 200, 250, 50);

        /* 初始化三态复选框的状态为Checked */
        checkBox->setCheckState(Qt::Checked);

        /* 设置显示的文本 */
        checkBox->setText("初始化为Checked状态");

        /* 开启三态模式，必须开启，否则只有两种状态，即Checked和Unchecked */
        checkBox->setTristate();

        /* 连接checkBox的信号stateChanged(int)，与我们定义的槽checkBoxStateChanged(int)连接 */
        connect(checkBox, SIGNAL(stateChanged(int)), this, SLOT(checkBoxStateChanged(int)));

        checkBox->setStyleSheet("QCheckBox{spacing:5px;color:white;}"
                                "QCheckBox::indicator{width:50px;height:50px}"
                                "QCheckBox::indicator:enabled:unchecked{image:url(:/images/unchecked.png);}"
                                "QCheckBox::indicator:enabled:checked{image:url(:/images/checked.png);}"
                                "QCheckBox::indicator:enabled:indeterminate{image:url(:/images/indeterminate.png);}");

}

MainWindow::~MainWindow()
{
}
/*槽函数实现*/
void MainWindow::checkBoxStateChanged(int state)
{
    /*判断checkBox的state状态，设置为checkBox的文本*/
    switch(state){
        /*选中状态*/
        case Qt::Checked:
            checkBox->setText("选中状态");
            break;
        /*未选中状态*/
        case ::Qt::Unchecked:
            checkBox->setText("未选中状态");
            break;
        /*半选状态*/
        case::Qt::PartiallyChecked:
            checkBox->setText("半选状态");
            break;
    default:
        break;

    }
}

