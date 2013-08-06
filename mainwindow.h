#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_filesearchwidget.h"
#include "ui_qprefrencewidget.h"
#include "ui_downloadmainwindow.h"
#include <QMainWindow>
#include <QWidget>
#include <QtNetwork>
#include <FileSearch/filesearchwidget.h>
#include <PrefrenceWindow/qprefrencewidget.h>
#include <DownloadWindow/downloadmainwindow.h>
#include <QTableWidgetItem>
#include <QCloseEvent>
#include <sys/utsname.h>

class FileSearchWidget;

class DownloadMainWindow;

class QPrefrenceWidget;

namespace Ui{
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    MainWindow(QWidget *parent = 0);

    void reply_result(QList<QByteArray> result);

    void setupWelcome();

    void readSetting();

    void writeSettings();

    void closeEvent(QCloseEvent *event);

    ~MainWindow();

private slots:



    void broadcast();

    void processPendingDatagrams();

    void on_action_find_triggered();

    void on_action_Prefrences_triggered();

    void on_actionDownloads_triggered();

    void on_actionWelcome_triggered();

    void on_actionHelp_triggered();

    void recieve_result();

    void nowAccept();

    void on_configureButton_clicked();

    void on_action_Exit_triggered();

private:
   Ui::MainWindow *ui;
   FileSearchWidget *fileSearchClass;
   QPrefrenceWidget *prefrenceWidget;
   DownloadMainWindow *downloadWindow;
   QWidget *fileSearch;
   QWidget *prefrenceWindow;
   QUdpSocket *udprsocket;
   QUdpSocket *udpsocket;
   QUdpSocket *udprrsocket;
   QUdpSocket *udprssocket;
   QStandardItemModel *osmodel;
   QStandardItemModel *interfacemodel;
   struct utsname *mk;
   QList<QNetworkInterface> allInterface;
   QList<QNetworkAddressEntry> networkEntity;
   QSettings settings;
};


#endif // MAINWINDOW_H




