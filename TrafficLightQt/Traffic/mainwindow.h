#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMutex>
#include <QtConcurrent>
#include <QFuture>
#include "serial.h"
#include "counter.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
signals:
    void sendData(QByteArray);
    void startRed();
    void startYellow();
    void startGreen();

private slots:

    void on_pb_red_clicked();

    void on_pb_yellow_clicked();

    void on_pb_green_clicked();
public slots:
    void changeColorRed();
    void changeColorYellow();
    void changeColorWhite();
    void changeColorGreen();
    void displayCounter(qint32);

private:
    Ui::MainWindow *ui;
    Serial serial;
    Counter count;


};
#endif // MAINWINDOW_H
