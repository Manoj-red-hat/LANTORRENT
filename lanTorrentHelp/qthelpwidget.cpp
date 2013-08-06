#include "qthelpwidget.h"
#include "ui_qthelpwidget.h"
#include <QProcess>
#include <QDebug>
#include <stdlib.h>

QtHelpWidget::QtHelpWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QtHelpWidget)
{
    ui->setupUi(this);
      mk = new QProcess();
     QObject::connect(mk,SIGNAL(readyReadStandardOutput()),this,SLOT(readyReadStandardOutput()));


}

QtHelpWidget::~QtHelpWidget()
{
    delete ui;
}

void QtHelpWidget::readyReadStandardOutput(){
     qDebug()<<QString::fromLocal8Bit(mk->readAll());
}

