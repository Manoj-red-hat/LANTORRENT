#ifndef DOWNLOADTHREAD_H
#define DOWNLOADTHREAD_H

#include <QThread>
#include <QTcpSocket>

class DownloadThread : public QThread
{
    Q_OBJECT
public:
    DownloadThread(int socketDescriptor, QObject *parent);

    QString fetchPath(QString fileName);

    void run();

signals:
    void error(QTcpSocket::SocketError socketError);

private slots:
    //QString startRead(QTcpSocket c);

private:
    int socketDescriptor;
};

#endif // DOWNLOADTHREAD_H
