#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStyle>
#include <QHostAddress>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_IPAddress_textChanged(const QString &arg1)
{
    // validate ip adress by mask and change background
    QString state = "0";
    if (arg1=="...")
    {
        state="";
    }
    else
    {
        QHostAddress address(arg1);
        if(QAbstractSocket::IPv4Protocol == address.protocol())
        {
            state="1";
        }
    }
    ui->IPAddress->setProperty("state", state);
    style()->polish(ui->IPAddress);
}

