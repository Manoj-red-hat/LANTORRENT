#ifndef FILESEARCHWIDGET_H
#define FILESEARCHWIDGET_H

#include <QWidget>
#include <QStandardItemModel>
#include <QHeaderView>
#include <QItemSelectionModel>
#include <QDir>
#include <mainwindow.h>
#include <QList>

namespace Ui {
class FileSearchWidget;
}

class FileSearchWidget : public QWidget
{
    Q_OBJECT

    
public:
    FileSearchWidget(QWidget *parent = 0);

    QList<QByteArray> search(QString search, QString localAddress, QString hostname);

    void updateTableView(QByteArray res);

     QByteArray mk();

    ~FileSearchWidget();


signals:
    void broadcstSignal();

    void readyToAccept();

private slots:
    void on_searchButton_clicked();

    void on_downloadButton_clicked();

public:
    Ui::FileSearchWidget *ui;
    QStringList res;
    QStandardItemModel *model;
    QStandardItem *item;
    QStandardItem *itemS;
    QStandardItem *itemA;
    QStandardItem *itemP;
    QList<QStandardItem *> itemlist;
    QByteArray datagram;
    QItemSelectionModel *selection;
};

#endif // FILESEARCHWIDGET_H

