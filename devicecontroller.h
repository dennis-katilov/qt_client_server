#ifndef DEVICECONTROLLER_H
#define DEVICECONTROLLER_H

#include <QObject>
#include <QTcpSocket>

class devicecontroller : public QObject
{
    Q_OBJECT
public:
    explicit devicecontroller(QObject *parent = nullptr);
    void connectToDevice(QString ip, int port);

signals:

private:
    QTcpSocket _socket;
    QString _ip;
    int _port;
};

#endif // DEVICECONTROLLER_H
