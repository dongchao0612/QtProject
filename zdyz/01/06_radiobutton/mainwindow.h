#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
/*添加QRadioButton类*/
#include <QRadioButton>
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    /*声明两个QRadioButton对象*/
    QRadioButton *radioButton1;
    QRadioButton *radioButton2;


private slots:
    /* 槽函数 */
    void print(int i);
};
#endif // MAINWINDOW_H
