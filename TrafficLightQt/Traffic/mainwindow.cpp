#include "mainwindow.h"
#include "qmutex.h"
#include "ui_mainwindow.h"
extern bool flag;
extern QMutex mux;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(this,&MainWindow::sendData,&serial,&Serial::sendSerial);
    connect(this,&MainWindow::startRed,this,&MainWindow::changeColorRed);
    connect(this,&MainWindow::startYellow,this,&MainWindow::changeColorYellow);
    connect(this,&MainWindow::startGreen,this,&MainWindow::changeColorGreen);
    connect(&count,&Counter::startWhite,this,&MainWindow::changeColorWhite);
    connect(&count,&Counter::sendDisplay,this,&MainWindow::displayCounter);

}

MainWindow::~MainWindow()
{
    delete ui;
}






void MainWindow::on_pb_red_clicked()
{
    if(flag)
    {
        emit sendData("r");
        emit startRed();
        QFuture<void> future = QtConcurrent::run([this]() { count.count(10); });
        mux.lock();
        flag=false;
        mux.unlock();
    }
}


void MainWindow::on_pb_yellow_clicked()
{
    if(flag)
    {
        emit sendData("y");
        emit startYellow();
        QFuture<void> future = QtConcurrent::run([this]() { count.count(2); });
        mux.lock();
        flag=false;
        mux.unlock();
    }
}


void MainWindow::on_pb_green_clicked()
{
    if(flag)
    {
        emit sendData("g");
        emit startGreen();
        QFuture<void> future = QtConcurrent::run([this]() { count.count(10); });
        mux.lock();
        flag=false;
        mux.unlock();
    }
}

void MainWindow::changeColorRed()
{
    ui->l_color->setStyleSheet("background-color : red");
}

void MainWindow::changeColorYellow()
{
    ui->l_color->setStyleSheet("background-color : yellow");
}

void MainWindow::changeColorWhite()
{
    ui->l_color->setStyleSheet("background-color : white");
    emit sendData("n");
}

void MainWindow::changeColorGreen()
{
    ui->l_color->setStyleSheet("background-color : green");

}

void MainWindow::displayCounter(qint32 c)
{
    ui->lcdNumber->display(c);
}


