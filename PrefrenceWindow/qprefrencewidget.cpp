#include "qprefrencewidget.h"
#include "ui_qprefrencewidget.h"
#include "ui_widget.h"
#include <QHostInfo>gh
#include <QPainter>
#include <QPixmap>
#include <QIcon>
#include <QToolButton>
#include <QToolBox>

QPrefrenceWidget::QPrefrenceWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QPrefrenceWidget)
{
    ui->setupUi(this);
    ui->browseButton->hide();
    ui->downloadDiectory->hide();
    ui->hostnameLabel->setText(QHostInfo::localHostName());
    ui->hostnameLabel->setReadOnly(true);
    ui->hostnameButton->setChecked(true);
    sharingWidget = new Widget();
    sharingWidget->setParent(ui->widget);
    sharingWidget->hide();

}

QString QPrefrenceWidget::downloadDirectoy()
{
    return ui->downloadDiectory->text();
}

void QPrefrenceWidget::setDownloadDirectory(QString str)
{
    ui->downloadDiectory->setText(str);
}

void QPrefrenceWidget::setSharedDirectory()
{
    sharingWidget->setDirectory();
}

QPrefrenceWidget::~QPrefrenceWidget()
{
    //delete ui;
}

void QPrefrenceWidget::on_hostnameButton_clicked()
{
    ui->hostnameButton->setChecked(true);
    ui->sharing->setChecked(false);
    ui->downloadButton->setChecked(false);
    sharingWidget->hide();
    ui->widget->show();
    ui->browseButton->hide();
    ui->downloadDiectory->hide();
    ui->hostnameLabel->show();
}

void QPrefrenceWidget::on_sharing_clicked()
{
    ui->hostnameButton->setChecked(false);
    ui->sharing->setChecked(true);
    ui->downloadButton->setChecked(false);
    ui->browseButton->hide();
    ui->downloadDiectory->hide();
    ui->hostnameLabel->hide();
    sharingWidget->resize(ui->widget->size());
    sharingWidget->show();
}

void QPrefrenceWidget::on_downloadButton_clicked()
{
    ui->downloadButton->setChecked(true);
    ui->hostnameButton->setChecked(false);
    ui->sharing->setChecked(false);
    sharingWidget->hide();
    ui->widget->show();
    ui->hostnameLabel->hide();
    ui->browseButton->show();
    ui->downloadDiectory->show();
}

void QPrefrenceWidget::on_browseButton_clicked()
{
    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                    "/home",
                                                    QFileDialog::ShowDirsOnly
                                                    | QFileDialog::DontResolveSymlinks);
    ui->downloadDiectory->setText(dir);
    ui->downloadDiectory->setReadOnly(true);
}
