#include <QTableWidgetSelectionRange>
#include <QNetworkInterface>

#include "mainwindow.h"

#include "ui_mainwindow.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    udprsocket = new QUdpSocket(this);
    udprsocket->bind(45454);
    udprrsocket = new QUdpSocket(this);
    udprrsocket->bind(45456);
    udpsocket = new QUdpSocket(this);
    udprssocket = new QUdpSocket(this);



    setupWelcome();


    fileSearchClass = new FileSearchWidget(this);
    fileSearchClass->hide();
    prefrenceWidget = new QPrefrenceWidget(this);
    prefrenceWidget->hide();
    downloadWindow = new DownloadMainWindow(this);
    downloadWindow->hide();
    readSetting();

    this->connect(udprsocket, SIGNAL(readyRead()),this, SLOT(processPendingDatagrams()));
    this->connect(udprrsocket, SIGNAL(readyRead()),this, SLOT(recieve_result()));
    this->connect(fileSearchClass,SIGNAL(broadcstSignal()),this,SLOT(broadcast()));
    this->connect(fileSearchClass,SIGNAL(readyToAccept()),this,SLOT(nowAccept()));

    }


void MainWindow::broadcast()
{


    QByteArray datagram(fileSearchClass->mk());
    qDebug()<<udpsocket->writeDatagram(datagram.data(), QHostAddress::Broadcast,
                                          45454);
}

void MainWindow::reply_result(QList<QByteArray> result)
{
    for(int i=0;i<result.size();i++){
        QStringList mk= QString::fromLocal8Bit(result.at(i).data()).split("#@#");
        QHostAddress host(mk.at(2));
        if(host!=hostAddress)
        udprssocket->writeDatagram(result.at(i).data(), result.at(i).size(),
                            host , 45456);
    }

}

void MainWindow::setupWelcome()
{
    mk = new struct utsname();
    allInterface = QNetworkInterface::allInterfaces();
    uname(mk);

    ui->ostable->setVisible(true);
    ui->ostable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->ostable->setAlternatingRowColors(true);
    osmodel = new QStandardItemModel(0,2,this);
    osmodel->setHorizontalHeaderItem(0, new QStandardItem(QString("OS Name")));
    osmodel->setHorizontalHeaderItem(1, new QStandardItem(QString("OS Architecture")));
    ui->ostable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->ostable->setModel(osmodel);
    QList<QStandardItem *> itemlist;
    itemlist.append(new QStandardItem(mk->sysname));
    itemlist.append(new QStandardItem(mk->machine));
    osmodel->appendRow(itemlist);
    ui->ostable->resizeColumnsToContents();
    ui->ostable->resizeRowsToContents();

    ui->interfaceTable->setVisible(true);
    ui->interfaceTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    interfacemodel = new QStandardItemModel(0,4,this);
    interfacemodel->setHorizontalHeaderItem(0, new QStandardItem(QString("Interface")));
    interfacemodel->setHorizontalHeaderItem(1, new QStandardItem(QString("IPv4")));
    interfacemodel->setHorizontalHeaderItem(2, new QStandardItem(QString("Broadcast")));
    interfacemodel->setHorizontalHeaderItem(3, new QStandardItem(QString("Netmask")));
    ui->interfaceTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->interfaceTable->setModel(interfacemodel);

    for(int i=0 ;i <allInterface.size();i++){
        networkEntity = allInterface.at(i).addressEntries();
        itemlist.clear();
        if(networkEntity.size()>0){
            unsigned int flags = allInterface.at(i).flags();
                bool isLoopback = (bool)(flags & QNetworkInterface::IsLoopBack);
                bool canBroadcast = (bool)(flags & QNetworkInterface::CanBroadcast);
                if(!isLoopback)
                    if(canBroadcast)
                                     ui->comboBox->addItem(allInterface.at(i).humanReadableName());

          itemlist.append(new QStandardItem(allInterface.at(i).humanReadableName()));
          itemlist.append(new QStandardItem(networkEntity.at(0).ip().toString()));
          itemlist.append(new QStandardItem(networkEntity.at(0).broadcast().toString()));
          itemlist.append(new QStandardItem(networkEntity.at(0).netmask().toString()));
          interfacemodel->appendRow(itemlist);
        }
    }
    ui->interfaceTable->setVisible(false);
    ui->interfaceTable->resizeColumnsToContents();
    ui->interfaceTable->resizeRowsToContents();
    ui->interfaceTable->verticalHeader()->setDefaultSectionSize(38);
    ui->interfaceTable->setVisible(true);

}


void MainWindow::on_configureButton_clicked()
{
     ui->comboBox->currentText();
     for(int i =0 ;i<allInterface.size();i++){
         if(!(allInterface.at(i).humanReadableName().compare(ui->comboBox->currentText())))
         {
             networkEntity=allInterface.at(i).addressEntries();
             hostAddress=networkEntity.at(0).ip();

         }
     }

}

void MainWindow::recieve_result()
{
    while (udprrsocket->hasPendingDatagrams()) {
        QByteArray datagram;
        datagram.resize(udprrsocket->pendingDatagramSize());
        udprrsocket->readDatagram(datagram.data(), datagram.size());
        fileSearchClass->updateTableView(datagram.data());
    }
}


void MainWindow::nowAccept()
{

   QVariant data;
   QModelIndexList mk = fileSearchClass->selection->selectedRows();
   qDebug()<<mk.at(0).column()<<mk.at(0).row();
   data=fileSearchClass->model->data(mk.at(0),Qt::DisplayRole).toString();
   QStandardItem *item(fileSearchClass->model->item(mk.at(0).row(),2));
   downloadWindow->acceptConnection(data.toString(),item->text());
   this->on_actionDownloads_triggered();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_find_triggered()
{
    ui->action_Prefrences->setChecked(false);
    ui->actionDownloads->setChecked(false);
    ui->actionHelp->setChecked(false);
    ui->actionWelcome->setChecked(false);
    ui->action_find->setChecked(true);
    this->centralWidget()->setParent(0);
    this->setCentralWidget(fileSearchClass);
    fileSearchClass->show();
}

void MainWindow::on_action_Prefrences_triggered()
{
    ui->action_Prefrences->setChecked(true);
    ui->actionDownloads->setChecked(false);
    ui->actionHelp->setChecked(false);
    ui->actionWelcome->setChecked(false);
    ui->action_find->setChecked(false);
    this->centralWidget()->setParent(0);
    this->setCentralWidget(prefrenceWidget);
    prefrenceWidget->show();
}
void MainWindow::on_actionWelcome_triggered()
{
    ui->action_Prefrences->setChecked(false);
    ui->actionDownloads->setChecked(false);
    ui->actionHelp->setChecked(false);
    ui->actionWelcome->setChecked(true);
    ui->action_find->setChecked(false);
    this->centralWidget()->setParent(0);
    this->setCentralWidget(ui->widget);
    ui->widget->show();
}

void MainWindow::on_actionHelp_triggered()
{
    ui->action_Prefrences->setChecked(false);
    ui->actionDownloads->setChecked(false);
    ui->actionHelp->setChecked(true);
    ui->actionWelcome->setChecked(false);
    ui->action_find->setChecked(false);
    this->centralWidget()->setParent(0);
}
void MainWindow::processPendingDatagrams()
{
    QHostAddress senderIP;
    quint16 port;
    QList<QByteArray> res;
    while (udprsocket->hasPendingDatagrams()) {
        QByteArray datagram;
        datagram.resize(udprsocket->pendingDatagramSize());
        udprsocket->readDatagram(datagram.data(), datagram.size(),&senderIP,&port);
        res= fileSearchClass->search(QString::fromLocal8Bit(datagram.data()),senderIP.toString(),QHostInfo::localHostName());
        MainWindow::reply_result(res);
        qDebug()<<senderIP.toString()+"sender ip"+QString::number(port)+"port";
    }
}

void MainWindow::on_actionDownloads_triggered()
{
    ui->action_Prefrences->setChecked(false);
    ui->actionDownloads->setChecked(true);
    ui->actionHelp->setChecked(false);
    ui->actionWelcome->setChecked(false);
    ui->action_find->setChecked(false);
    this->centralWidget()->setParent(0);
    this->setCentralWidget(downloadWindow);
    downloadWindow->show();
}


void MainWindow::closeEvent(QCloseEvent *event)
{
    QMessageBox mk;
    writeSettings();
    mk.exec();

}

void MainWindow::readSetting()
{
    settings.beginGroup("SharedDirectory");
    int size=settings.beginReadArray("DirName");
    for(int i =0 ;i<size;i++){
    settings.setArrayIndex(i);
    dirNameAll.append(settings.value("Dirname").toString());
    }
    settings.endArray();
    settings.endGroup();
    for(int i=0;i<dirNameAll.size();i++)
        qDebug()<<dirNameAll.at(i);

   settings.beginGroup("DownloadDirectoryName");

    prefrenceWidget->setDownloadDirectory(settings.value("DownloadDirectory").toString());
    settings.endGroup();

    prefrenceWidget->setSharedDirectory();
}



void MainWindow::on_action_Exit_triggered()
{

    QMessageBox mk;
    mk.setText("Confirm Exit");
    mk.setStandardButtons(QMessageBox::Yes| QMessageBox::No);
    mk.setDefaultButton(QMessageBox::No);
    int rs=mk.exec();
    switch (rs) {
    case QMessageBox::Yes:
        MainWindow::close();

    }
}


void MainWindow::writeSettings()
{
    settings.clear();
    settings.beginGroup("SharedDirectory");
    settings.beginWriteArray("DirName");
    for(int i =0 ;i<dirNameAll.size();i++){
    settings.setArrayIndex(i);
    settings.setValue("Dirname",dirNameAll.at(i));
    }
    settings.endArray();
    settings.endGroup();

    settings.beginGroup("DownloadDirectoryName");
    settings.setValue("DownloadDirectory",prefrenceWidget->downloadDirectoy());
    settings.endGroup();


}

