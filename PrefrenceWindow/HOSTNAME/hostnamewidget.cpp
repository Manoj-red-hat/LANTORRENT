#include "hostnamewidget.h"
#include "ui_hostnamewidget.h"

HostNameWidget::HostNameWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HostNameWidget)
{
    ui->setupUi(this);
}

HostNameWidget::~HostNameWidget()
{
    delete ui;
}
