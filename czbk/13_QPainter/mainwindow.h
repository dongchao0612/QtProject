#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPaintEvent>
#include <QTimer>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    //绘图事件
    void paintEvent(QPaintEvent *event);

private:
    Ui::MainWindow *ui;
    int posX = 0;
    QTimer *timer;
};
#endif // MAINWINDOW_H
