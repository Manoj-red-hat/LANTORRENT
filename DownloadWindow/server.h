#ifndef SERVER_H
#define SERVER_H

#include <QTcpServer>
#include "downloadthread.h"
class Server : public QTcpServer
{
    Q_OBJECT
public:
    explicit Server(QObject *parent = 0);
protected:
    void incomingConnection(qintptr socketDescriptor);

    
};

#endif // SERVER_H
