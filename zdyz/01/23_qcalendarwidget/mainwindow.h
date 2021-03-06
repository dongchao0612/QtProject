#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

/*引入QCalendarWidget*/
#include <QCalendarWidget>

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
    /* 声明QCalendarWidget，QPushButton，QLabel对象 */
    QCalendarWidget *calendarWidget;
    QPushButton *pushButton;
    QLabel *label;
private slots:
    /* 槽函数 */
    void calendarWidgetSelectionChanged();
    void pushButtonClicked();
};
#endif // MAINWINDOW_H
