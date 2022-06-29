#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

/*引入QProgressBar*/
#include <QProgressBar>

/*引入QTimer*/
#include <QTimer>


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    /* 声明对象 */
    QProgressBar *progressBar;
    QTimer *timer;

    /* 用于设置当前QProgressBar的值 */
    int value;

private slots:
    /* 槽函数 */
    void timerTimeOut();
};
#endif // MAINWINDOW_H
