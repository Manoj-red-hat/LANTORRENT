#include "downloadmainwindow.h"
#include "ui_downloadmainwindow.h"
#include <QtNetwork/QHostAddress>
#include <QFile>
DownloadMainWindow::DownloadMainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DownloadMainWindow)
{
    ui->setupUi(this);
    server = new Server(this);
    server->listen(hostAddress,4000);
}
void DownloadMainWindow::acceptConnection(QString sendFileName, QString sendHostName)
{

     tcpsocket = new QTcpSocket;
     tcpsocket->connectToHost(sendHostName,4000);
     tcpsocket->waitForConnected();
     tcpsocket->write(sendFileName.toLocal8Bit()+"\n");
     connect(tcpsocket,SIGNAL(hostFound()),this,SLOT(on_pushButton_clicked()));
     connect(tcpsocket,SIGNAL(disconnected()),this,SLOT(on_disconnection()));
     connect(tcpsocket,SIGNAL(readyRead()),this,SLOT(readFortune()));
}


DownloadMainWindow::~DownloadMainWindow()
{
    delete ui;
}

void DownloadMainWindow::readFortune()
{

    int speed=0;
    QString block;
    QDataStream in(tcpsocket);
    in.setVersion(QDataStream::Qt_4_0);
    while(tcpsocket->bytesAvailable()>0){
    if(ui->gateway->text().isEmpty()){
    qt.start();
    in>>block;
    ui->fileName->setText(block);
    ui->fileName->adjustSize();

    in>>block;
    ui->fileSize->setText(block);
    ui->fileSize->adjustSize();

    in>>block;
    ui->fileType->setText(block);
    ui->fileType->adjustSize();

    in>>block;
    ui->senderIP->setText(block);
    ui->senderIP->adjustSize();

    in>>block;
    ui->sendersPort->setText(block);
    ui->sendersPort->adjustSize();

    in>>block;
    ui->gateway->setText(block);
    ui->gateway->adjustSize();

    QString mk("/home/manoj/");
    mk = mk +ui->fileName->text();

    fp1 = new QFile(mk);
    fp1->open(QIODevice::WriteOnly);
    ui->progressBar->setMaximum(ui->fileSize->text().toInt());
    ui->progressBar->setMinimum(0);
    ui->fileSize->setText((QString::number((ui->fileSize->text().toInt()/1024)/1024))+"MB");
    ui->progressBar->setValue(0);
    }
  if(fp1){
    speed =fp1->write(tcpsocket->readAll());
    ui->progressBar->setValue(ui->progressBar->value()+speed);
    ui->timeElapsed->setText(QString::number(qt.elapsed()/1000)+"  SECS");
    ui->currentSpeed->setText((QString::number((ui->progressBar->value()/qt.elapsed()/1000)))+"  MBPS");
    speed=0;
    }
    else
        qDebug()<<"error";
  }
}

void DownloadMainWindow::on_pushButton_clicked()
{
    ui->gateway->setText("");
    ui->progressBar->setValue(0);
}

void DownloadMainWindow::on_disconnection()
{
    ui->progressBar->setValue(ui->progressBar->maximum());
    ui->pushButton->setEnabled(true);
}
