#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

/*引入QLCDNumber*/
#include <QLCDNumber>

/*引入QTimer*/
#include <QTimer>

/*引入QTime*/
#include <QTime>
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    /* 声明QLCDNumber对象 */
    QLCDNumber *lcdNumber;

    QTime *time;

    /* 声明QTimer对象 */
    QTimer *timer;

private slots:
    /* 槽函数 */
    void timerTimeOut();
};
#endif // MAINWINDOW_H
