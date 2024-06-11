#ifndef SERIAL_H
#define SERIAL_H

#include <QObject>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>
class Serial : public QObject
{
    Q_OBJECT
    QSerialPort serial;
public:
    explicit Serial(QObject *parent = nullptr);
public slots:
    void sendSerial(QByteArray);

signals:
};

#endif // SERIAL_H
