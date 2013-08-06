#include "server.h"

Server::Server(QObject *parent) :
    QTcpServer(parent)
{
}

void Server::incomingConnection(qintptr socketDescriptor)
{
    DownloadThread *thread = new DownloadThread(socketDescriptor, this);
    connect(thread, SIGNAL(finished()), thread, SLOT(deleteLater()));
    thread->start();
}
