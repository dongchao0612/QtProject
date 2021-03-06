#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

/*引入QScrollArea*/
#include <QScrollArea>

/*引入QLabel*/
#include <QLabel>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    /* 定义QScrollArea对象 */
    QScrollArea *scrollArea;
    QLabel *label;
};
#endif // MAINWINDOW_H
