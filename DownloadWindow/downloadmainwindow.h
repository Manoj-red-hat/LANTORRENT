#ifndef DOWNLOADMAINWINDOW_H
#define DOWNLOADMAINWINDOW_H

#include <QWidget>
#include <QtNetwork/QTcpSocket>
#include <QFile>
#include <QTime>
#include "global.h"
#include "server.h"

namespace Ui {
class DownloadMainWindow;
}

class DownloadMainWindow : public QWidget
{
    Q_OBJECT
    
public:
    explicit DownloadMainWindow(QWidget *parent = 0);
      void acceptConnection(QString,QString);
    ~DownloadMainWindow();

private slots:
    void readFortune();
    void on_pushButton_clicked();
    void on_disconnection();

public:
    Ui::DownloadMainWindow *ui;
    QFile *fp;
    QTime qt;
    Server *server;
    QTcpSocket *tcpsocket;
    QFile *fp1;
};

#endif // DOWNLOADMAINWINDOW_H
