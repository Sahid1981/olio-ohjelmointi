#include "mainwindow.h"
#include "ui_mainwindow.h"

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



void MainWindow::on_btnCount_clicked()
{
    counter++;
    ui->labelInfo->setText(QString("Button pressed %1 times").arg(counter));
    ui->txtResult->setText(QString("%1").arg(counter));
}


void MainWindow::on_btnReset_clicked()
{
    counter = 0;
    ui->labelInfo->setText(QString("Button pressed %1 times").arg(counter));
    ui->txtResult->setText(QString("%1").arg(counter));
}

