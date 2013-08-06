#include "applicationselectionwidget.h"
#include "ui_applicationselectionwidget.h"

ApplicationSelectionWidget::ApplicationSelectionWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ApplicationSelectionWidget)
{
    ui->setupUi(this);
}

ApplicationSelectionWidget::~ApplicationSelectionWidget()
{
    delete ui;
}
