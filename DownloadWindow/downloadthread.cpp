#include "downloadthread.h"
#include <QObject>
#include <QTcpServer>
#include <QAbstractSocket>
#include <QFile>
#include <QFileInfo>
#include "global.h"
#include <QDirIterator>
#include <QHostInfo>
DownloadThread::DownloadThread(int socketDescriptor,QObject *parent) :
    QThread(parent),socketDescriptor(socketDescriptor)
{
}

QString DownloadThread::fetchPath(QString fileName)
{
    QDir dir("/home/manoj/");
    QString filePath;
    QDirIterator iterator(dir.absolutePath(), QDirIterator::Subdirectories);
    while (iterator.hasNext()) {
        iterator.next();
        if (!iterator.fileInfo().isDir()) {
            QString fileinfo = iterator.fileName();
            if(fileinfo.contains(fileName,Qt::CaseInsensitive)){
                filePath=iterator.fileInfo().absoluteFilePath();

            }
        }
    }
  return filePath;
}

void DownloadThread::run()
{

    QTcpSocket client;
    QString fileName;
    int flag =1;
    if (!client.setSocketDescriptor(socketDescriptor)) {
        emit error(client.error());
        return;
    }
    while(flag){
        if(client.waitForReadyRead())
        {fileName=client.readLine().trimmed();
            qDebug()<<fileName;
        flag=0;}

    }
    QFile fp(fetchPath(fileName));
    QFileInfo mk(fp);

    QByteArray block;
    QDataStream out(&block, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_0);

    out<<mk.completeBaseName();
    out<<QString::number(mk.size());
    out<<mk.completeSuffix();
    out<<hostAddress.toString();
    out<<QHostInfo::localHostName();
    out<<QHostInfo::localHostName();
    qDebug()<< client.write(block);
    client.waitForBytesWritten();

    int i=0;
    if(fp.open(QIODevice::ReadOnly))
    {
        while(!fp.atEnd()){
            i+=client.write(fp.read(10240));
            client.waitForBytesWritten();
        }
     }

    client.disconnectFromHost();
    client.waitForDisconnected();
}
