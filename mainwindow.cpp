#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->statusbar->showMessage("SSHLGTTN'S TIC TAC TOE");
    playerType = false;
    isRunning = false;
    ui->gameButton->setText("START GAME");
    ui->oButton->setStyleSheet("background:darkgrey;");
    ui->xButton->setStyleSheet("background:lightgrey;");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_xButton_clicked()
{
    ui->xButton->setStyleSheet("background:darkgrey;");
    ui->oButton->setStyleSheet("background:lightgrey;");
    playerType = true;
    //debug
    if(isRunning == true)
    ui->label_1->setText("set X");
}


void MainWindow::on_oButton_clicked()
{
    playerType = false;
    ui->oButton->setStyleSheet("background:darkgrey;");
    ui->xButton->setStyleSheet("background:lightgrey;");
                 //debug
    if(isRunning == true)

    ui->label_1->setText("set O");
}


void MainWindow::on_gameButton_clicked()
{

    if(isRunning == false){
        ui->gameButton->setText("RESTART");
        isRunning = true;
    }
    else{
        //Дописать логику рестарта;
        ui->gameButton->setText("START GAME");
        isRunning = false;
        ui->label_1->setText("");
    }
}

