#include "smallwidget.h"
#include "ui_smallwidget.h"

smallWidget::smallWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::smallWidget)
{
    ui->setupUi(this);
    // ui->spinBox;
    // ui->horizontalSlider;

    //QSpinBox移动 QSlider跟着动
    void (QSpinBox::*spSingal)(int)=&QSpinBox::valueChanged;
    connect(ui->spinBox,spSingal,ui->horizontalSlider,&QSlider::setValue);


    //QSlider移动 QSpinBox跟着动
    connect(ui->horizontalSlider,&QSlider::valueChanged,ui->spinBox,&QSpinBox::setValue);

}

smallWidget::~smallWidget()
{
    delete ui;
}

void smallWidget::setNum(int num)
{
    ui->spinBox->setValue(num);
}

int smallWidget::getNum()
{
    return ui->spinBox->value();
}

#if 0
//这样也可以
void smallWidget::on_spinBox_valueChanged(int arg1)
{
    ui->horizontalSlider->setValue(arg1);
}

void smallWidget::on_horizontalSlider_valueChanged(int value)
{
    ui->spinBox->setValue(value);
}
#endif