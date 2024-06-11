#include "serial.h"

Serial::Serial(QObject *parent)
    : QObject{parent}
{
    serial.setPortName("COM11");

    if(serial.open(QIODevice::ReadWrite)){
        //Now the serial port is open try to set configuration
        if(!serial.setBaudRate(QSerialPort::Baud9600))
            qDebug()<<serial.errorString();

        if(!serial.setDataBits(QSerialPort::Data8))
            qDebug()<<serial.errorString();

        if(!serial.setParity(QSerialPort::NoParity))
            qDebug()<<serial.errorString();

        if(!serial.setStopBits(QSerialPort::OneStop))
            qDebug()<<serial.errorString();

        if(!serial.setFlowControl(QSerialPort::NoFlowControl))
            qDebug()<<serial.errorString();
    }
    else{
        qDebug()<<"Serial COM11 not opened. Error: "<<serial.errorString();
    }
}

void Serial::sendSerial(QByteArray data)
{
    serial.write(data);
    serial.flush();
}
