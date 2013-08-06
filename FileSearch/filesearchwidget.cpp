#include "filesearchwidget.h"
#include "ui_filesearchwidget.h"
#include <QDirIterator>
#include <QMessageBox>
#include <qdebug.h>

FileSearchWidget::FileSearchWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FileSearchWidget)
{
    ui->setupUi(this);
    ui->tableView->setVisible(true);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setAlternatingRowColors(true);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    model = new QStandardItemModel(0,4,this);
    selection = new QItemSelectionModel(model);
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("File Name")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("File Size")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QString("Host IP Address")));
    model->setHorizontalHeaderItem(3, new QStandardItem(QString("Host Name")));

    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->setModel(model);
    ui->tableView->setSelectionModel(selection);


}

void FileSearchWidget::updateTableView(QByteArray list)
{
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("File Name")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("File Size")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QString("Host IP Address")));
    model->setHorizontalHeaderItem(3, new QStandardItem(QString("Host Name")));
    QStringList items = QString::fromLocal8Bit(list).split("#@#");
    itemlist.clear();
    item = new QStandardItem(items.at(0));
    itemS = new QStandardItem(items.at(1));
    itemA = new QStandardItem(items.at(2));
    itemP = new QStandardItem(items.at(3));
    itemlist.append(item);
    itemlist.append(itemS);
    itemlist.append(itemA);
    itemlist.append(itemP);
    model->insertRow(0,itemlist);
}

QByteArray FileSearchWidget::mk()
{
    return ui->searchLineEdit->text().toLocal8Bit();
}


QList<QByteArray> FileSearchWidget::search(QString search,QString localAddress,QString hostname)
{

    QList <QByteArray> result;
        for(int i=dirNameAll.count();i>0;i--){
        QDir dir(dirNameAll.at(i-1));
    //QDir dir("/home/manoj/");
        QDirIterator iterator(dir.absolutePath(), QDirIterator::Subdirectories);
           while (iterator.hasNext()) {
              iterator.next();
              if (!iterator.fileInfo().isDir()) {
                 QString filename = iterator.fileName();
                 if(filename.contains(search,Qt::CaseInsensitive)){

                     result.append((iterator.fileInfo().fileName()+"#@#"+QString::number(iterator.fileInfo().size())+
                                   "#@#"+localAddress+"#@#"+hostname+ "\n").toLocal8Bit());

                 }
              }
           }
    }
return result;
}


FileSearchWidget::~FileSearchWidget()
{
    delete ui;
}

void FileSearchWidget::on_searchButton_clicked()
{
    datagram = ui->searchLineEdit->text().toLocal8Bit();
    emit broadcstSignal();

}

void FileSearchWidget::on_downloadButton_clicked()
{
    emit readyToAccept();
}
