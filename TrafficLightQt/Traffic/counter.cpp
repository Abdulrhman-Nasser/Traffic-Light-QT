#include "counter.h"
bool flag=true;
QMutex mux;
Counter::Counter(QObject *parent)
    : QObject{parent}
{}

void Counter::count(qint32 c)
{
    for(qint32 i=c ; i>0 ; i--)
    {
        emit sendDisplay(i);
        QThread::sleep(1);
    }
    emit sendDisplay(0);
    mux.lock();
    flag=true;
    mux.unlock();
    emit startWhite();
}
