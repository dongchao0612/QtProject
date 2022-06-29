#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

/*QToolBar*/
#include <QToolBar>
/*引入QToolButton类*/
#include <QToolButton>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    /*声明一个QToolButton对象*/
    QToolButton   *toolButton;
    /*声明一个QToolBar对象*/
    QToolBar    *toolBar;
};
#endif // MAINWINDOW_H
