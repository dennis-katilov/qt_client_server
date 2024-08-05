#ifndef DEVICECONTROLLER_H
#define DEVICECONTROLLER_H

#include <QObject>

class devicecontroller : public QObject
{
    Q_OBJECT
public:
    explicit devicecontroller(QObject *parent = nullptr);

signals:
};

#endif // DEVICECONTROLLER_H
