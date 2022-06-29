#include "mainwindow.h"
#include "ui_mainwindow.h"

#include  <QListWidgetItem>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //treeWidget的使用

    //设置水平头
    ui->treeWidget->setHeaderLabels(QStringList()<<"英雄"<<"英雄简介");

    QTreeWidgetItem *liitem=new QTreeWidgetItem(QStringList()<<"力量");
    QTreeWidgetItem *minitem=new QTreeWidgetItem(QStringList()<<"敏捷");
    QTreeWidgetItem *zhiitem=new QTreeWidgetItem(QStringList()<<"智力");

    //加载顶层节点
    ui->treeWidget->addTopLevelItem(liitem);
    ui->treeWidget->addTopLevelItem(minitem);
    ui->treeWidget->addTopLevelItem(zhiitem);

    //追加子节点
    QStringList heroL1 ;
    heroL1<< "刚被猪" << "前排坦克，能在吸收伤害的同时造成可观的范围输出";
    QTreeWidgetItem *l1=new QTreeWidgetItem(heroL1);
    liitem->addChild(l1);
    QStringList heroL2 ;
    heroL2 << "船长" << "前排坦克，能肉能输出能控场的全能英雄";
    QTreeWidgetItem *l2=new QTreeWidgetItem(heroL2);
    liitem->addChild(l2);


    QStringList heroM1 ;
    heroM1 << "月骑" << "中排物理输出，可以使用分裂利刃攻击多个目标";
    QTreeWidgetItem *m1=new QTreeWidgetItem(heroM1);
    minitem->addChild(m1);
    QStringList heroM2 ;
    heroM1 << "月骑" << "中排物理输出，可以使用分裂利刃攻击多个目标";
    QTreeWidgetItem *m2=new QTreeWidgetItem(heroM2);
    minitem->addChild(m2);


    QStringList heroZ1 ;
    heroZ1 << "死灵法师" << "前排法师坦克，魔法抗性较高，拥有治疗技能";
    QTreeWidgetItem *z1=new QTreeWidgetItem(heroZ1);
    zhiitem->addChild(z1);
    QStringList heroZ2 ;
    heroZ2 << "巫医" << "后排辅助法师，可以使用奇特的巫术诅咒敌人与治疗队友";
    QTreeWidgetItem *z2=new QTreeWidgetItem(heroZ2);
    zhiitem->addChild(z2);

}

MainWindow::~MainWindow()
{
    delete ui;
}

