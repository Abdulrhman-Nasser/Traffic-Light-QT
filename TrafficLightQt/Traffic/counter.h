#ifndef COUNTER_H
#define COUNTER_H

#include <QObject>
#include <QThread>
#include <QMutex>
class Counter : public QObject
{
    Q_OBJECT
public:
    explicit Counter(QObject *parent = nullptr);
    void count(qint32);
signals:
    void sendDisplay(qint32);
    void startWhite();
};

#endif // COUNTER_H
