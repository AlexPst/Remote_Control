#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    countVol = 0;
    connect(ui->button_1, &QPushButton::clicked, this, &MainWindow::digitsButtonPush);
    connect(ui->button_2, &QPushButton::clicked, this, &MainWindow::digitsButtonPush);
    connect(ui->button_3, &QPushButton::clicked, this, &MainWindow::digitsButtonPush);
    connect(ui->button_4, &QPushButton::clicked, this, &MainWindow::digitsButtonPush);
    connect(ui->button_5, &QPushButton::clicked, this, &MainWindow::digitsButtonPush);
    connect(ui->button_6, &QPushButton::clicked, this, &MainWindow::digitsButtonPush);
    connect(ui->button_7, &QPushButton::clicked, this, &MainWindow::digitsButtonPush);
    connect(ui->button_8, &QPushButton::clicked, this, &MainWindow::digitsButtonPush);
    connect(ui->button_9, &QPushButton::clicked, this, &MainWindow::digitsButtonPush);
    connect(ui->button_0, &QPushButton::clicked, this, &MainWindow::digitsButtonPush);

    connect(ui->plusButton, &QPushButton::clicked, this, &MainWindow::plusButton);
    connect(ui->minusButton, &QPushButton::clicked, this, &MainWindow::minusButton);
}



void MainWindow::digitsButtonPush()
{
    QPushButton* button = (QPushButton*)sender();
    QString resultLabel;
    resultLabel = "Channel "+ button->text();
    ui->channelLabel->setText(resultLabel);
}

void MainWindow::plusButton()
{

    if(countVol<=99)
    {
        countVol += 10;
        QString res = QString::number(countVol);
        QString volume = "Volume: "+ res;
        ui->volLabel->setText(volume);
    }
}

void MainWindow::minusButton()
{

    if(countVol>0)
    {
        countVol -= 10;
        QString res = QString::number(countVol);
        QString volume = "Volume: "+ res;
        ui->volLabel->setText(volume);
    }
}
MainWindow::~MainWindow()
{
    delete ui;
}

