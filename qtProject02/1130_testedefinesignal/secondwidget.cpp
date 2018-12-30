#include "secondwidget.h"
#include"firstwidget.h"
secondWidget::secondWidget(QWidget *parent) : QWidget(parent)
{
    setFixedSize(1500,1500);
    this->setWindowTitle(QString("Second window"));
    btn = new QPushButton(this);
    btn->setText(QString("Return to the first window"));
    btn->setFont(QFont("Microsoft YaHei",16,QFont::Normal));
    btn->move(200,200);
    connect(btn,&QPushButton::clicked,this,&secondWidget::sendSignal);
}
secondWidget::~secondWidget(){

}

void secondWidget::sendSignal(){
    emit changeWin();
}
