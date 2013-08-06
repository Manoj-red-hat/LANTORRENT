#include <QApplication>
#include "mainwindow.h"
#include <QStyle>
#include <QStyleFactory>
#include <QSysInfo>

#include <qglobal.h>


int main(int argc, char *argv[])
{

    QCoreApplication::setOrganizationName("BLACK_HAT");
    QCoreApplication::setApplicationName("LANTORRENT");

    QApplication a(argc, argv);
    MainWindow w;



//        //settings.beginGroup("AppData");
//  /*      //settings.beginWriteArray("mk");
      //QList<QNetworkInterface> ipAddresseskList = QNetworkInterface::allInterfaces();
//      //QNetworkInterface *manojk= new QNetworkInterface();
      //  QList<QNetworkAddressEntry> nt;//= QNetworkInterface::addressEntries();
//qDebug()<<nt.size();
//    if(manager.capabilities()&&QNetworkConfigurationManager::NetworkSessionRequired)
//   // for (int i=0;i<mk.size();i++) {
      //  for(int i=0;ipAddresseskList.size();i++) {
//       // settings.setArrayIndex(i);
//        //settings.setValue("bearername",mk.at(i).name());
//        //if(mk.at(i).b)
//          {qDebug()<<ipAddresseskList.at(i).humanReadableName();
//    qDebug()<<ipAddresseskList.at(i).flags();
        /*nt=ipAddresseskList.at(i).addressEntries();
        for(int i=0;i<nt.size();i++){
        q*///Debug()<<"broadcast "+nt.at(i).broadcast().toString()+" ip "+nt.at(i).ip().toString()+" netmask "+nt.at(i).netmask().toString();}
//        //qDebug()<<mk.at(i).bearerType()+mk.at(i).name()+QString::number(mk.at(i).state());


//}
//    //settings.endArray();
//    //settings.endGroup();
   w.showMaximized();
    return a.exec();

}
