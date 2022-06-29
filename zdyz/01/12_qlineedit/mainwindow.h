#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

/*引入QLineEdit*/
#include <QLineEdit>

/*引入QPushButton*/
#include <QPushButton>

/*引入QLabel*/
#include <QLabel>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    /* 声明一个QLineEdit对象 */
    QLineEdit *lineEdit;

    /* 声明一个QPushButton对象 */
    QPushButton *pushButton;

    /* 声明一个QLabel对象 */
    QLabel *label;

private slots:
    /* 声明一个槽函数，响应pushButton的clicked事件 */
    void pushButtonClicked();
};
#endif // MAINWINDOW_H
