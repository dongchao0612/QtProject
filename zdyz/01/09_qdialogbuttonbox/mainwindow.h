#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

/*引入QDialogButtonBox*/
#include <QDialogButtonBox>

/*引入QPushButton*/
#include <QPushButton>
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    /* 声明一个QDialogButtonBox对象 */
    QDialogButtonBox *dialogButtonBox;

    /* 声明一个QPushButton对象 */
    QPushButton *pushButton1;
    QPushButton *pushButton2;

private slots:
    /* 声明信号槽，带QAbstractButton *参数，用于判断点击了哪个按钮 */
    void dialogButtonBoxClicked(QAbstractButton *);
    // void dialogButtonBoxClicked(QDialogButtonBox *);

};
#endif // MAINWINDOW_H
