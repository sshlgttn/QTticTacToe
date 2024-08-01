#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRandomGenerator>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{



    board[0] = ui->field_1;
    board[1] = ui->field_2;
    board[2] = ui->field_3;
    board[3] = ui->field_4;
    board[4] = ui->field_5;
    board[5] = ui->field_6;
    board[6] = ui->field_7;
    board[7] = ui->field_8;
    board[8] = ui->field_9;




    ui->setupUi(this);

    connect(ui->field_1,SIGNAL(clicked()), this,SLOT(gameLogic()));
    connect(ui->field_2,SIGNAL(clicked()), this,SLOT(gameLogic()));
    connect(ui->field_3,SIGNAL(clicked()), this,SLOT(gameLogic()));
    connect(ui->field_4,SIGNAL(clicked()), this,SLOT(gameLogic()));
    connect(ui->field_5,SIGNAL(clicked()), this,SLOT(gameLogic()));
    connect(ui->field_6,SIGNAL(clicked()), this,SLOT(gameLogic()));
    connect(ui->field_7,SIGNAL(clicked()), this,SLOT(gameLogic()));
    connect(ui->field_8,SIGNAL(clicked()), this,SLOT(gameLogic()));
    connect(ui->field_9,SIGNAL(clicked()), this,SLOT(gameLogic()));

    ui->field_1->setMinimumSize(130,130);
    ui->field_2->setMinimumSize(130,130);
    ui->field_3->setMinimumSize(130,130);
    ui->field_4->setMinimumSize(130,130);
    ui->field_5->setMinimumSize(130,130);
    ui->field_6->setMinimumSize(130,130);
    ui->field_7->setMinimumSize(130,130);
    ui->field_8->setMinimumSize(130,130);
    ui->field_9->setMinimumSize(130,130);

    ui->statusbar->showMessage("SSHLGTTN'S TIC TAC TOE");


    playerType = false;
    isRunning = false;
    srand((int)time(0));





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
    if(isRunning == false){
    ui->xButton->setStyleSheet("background:darkgrey;");
    ui->oButton->setStyleSheet("background:lightgrey;");
    playerType = true;
    }
}



void MainWindow::on_oButton_clicked()
{
    if(isRunning == false){
    playerType = false;
    ui->oButton->setStyleSheet("background:darkgrey;");
    ui->xButton->setStyleSheet("background:lightgrey;");
    }

}


void MainWindow::on_gameButton_clicked()
{

    if(isRunning == false){
        isPlayerMove = rand() % 2;
        if(isPlayerMove == false) botMove();
        ui->gameButton->setText("RESTART");
        isRunning = true;
    }
    else{


        ui->gameButton->setText("START GAME");
        isRunning = false;
        ui->field_1->setText(NULL);
        ui->field_2->setText(NULL);
        ui->field_3->setText(NULL);
        ui->field_4->setText(NULL);
        ui->field_5->setText(NULL);
        ui->field_6->setText(NULL);
        ui->field_7->setText(NULL);
        ui->field_8->setText(NULL);
        ui->field_9->setText(NULL);
    }
}

void MainWindow::gameLogic(){

    if(isRunning){
    QPushButton *button = (QPushButton *)sender();
        if(!(button->text().contains("X") || button->text().contains("O"))){
    if(playerType) button->setText("X");
    else button->setText("O");
    isPlayerMove = false;
    botMove();
        }
    }
}





void MainWindow::botMove(){ 
    if(isEmptyCells(*ui)){
    int fieldNum = rand()%9+1;
    switch(fieldNum){
    case 1:{
        if(!(ui->field_1->text().contains("X") || ui->field_1->text().contains("O")))
        {
            playerType == true ?  ui->field_1->setText("O") : ui->field_1->setText("X");
            isPlayerMove = true;
        }
        else botMove();
        break;
        }

    case 2:{
        if(!(ui->field_2->text().contains("X") || ui->field_2->text().contains("O")))
        {
            playerType == true ?  ui->field_2->setText("O") : ui->field_2->setText("X");
            isPlayerMove = true;
        }
        else botMove();
        break;
    }

    case 3:{
        if(!(ui->field_3->text().contains("X") || ui->field_3->text().contains("O")))
        {
            playerType == true ?  ui->field_3->setText("O") : ui->field_3->setText("X");
            isPlayerMove = true;
        }
        else botMove();
        break;
    }

    case 4:{
        if(!(ui->field_4->text().contains("X") || ui->field_4->text().contains("O")))
        {
            playerType == true ?  ui->field_4->setText("O") : ui->field_4->setText("X");
            isPlayerMove = true;
        }
        else botMove();
        break;
    }

    case 5:{
        if(!(ui->field_5->text().contains("X") || ui->field_5->text().contains("O")))
        {
            playerType == true ?  ui->field_5->setText("O") : ui->field_5->setText("X");
            isPlayerMove = true;
        }
        else botMove();
        break;
    }
    case 6:{
        if(!(ui->field_6->text().contains("X") || ui->field_6->text().contains("O")))
        {
            playerType == true ?  ui->field_6->setText("O") : ui->field_6->setText("X");
            isPlayerMove = true;
        }
        else botMove();
        break;
    }
    case 7:{
        if(!(ui->field_7->text().contains("X") || ui->field_7->text().contains("O")))
        {
            playerType == true ?  ui->field_7->setText("O") : ui->field_7->setText("X");
            isPlayerMove = true;
        }
        else botMove();
        break;
    }
    case 8:{
        if(!(ui->field_8->text().contains("X") || ui->field_8->text().contains("O")))
        {
            playerType == true ?  ui->field_8->setText("O") : ui->field_8->setText("X");
            isPlayerMove = true;
        }
        else botMove();
        break;
    }
    case 9:{
        if(!(ui->field_9->text().contains("X") || ui->field_9->text().contains("O")))
        {
            playerType == true ?  ui->field_9->setText("O") : ui->field_9->setText("X");
            isPlayerMove = true;
        }
        else botMove();
        break;
    }
    default:
        {
            isPlayerMove = true;
            break;
        }
        }
    }
    else ui->gameButton->setText("full");

}


bool MainWindow::isEmptyCells(Ui::MainWindow &ui){
    if((ui.field_1->text().contains("X") ||ui.field_1->text().contains("O"))
        && (ui.field_2->text().contains("X") ||ui.field_2->text().contains("O"))
        && (ui.field_3->text().contains("X") ||ui.field_3->text().contains("O"))
        && (ui.field_4->text().contains("X") ||ui.field_4->text().contains("O"))
        && (ui.field_5->text().contains("X") ||ui.field_5->text().contains("O"))
        && (ui.field_6->text().contains("X") ||ui.field_6->text().contains("O"))
        && (ui.field_7->text().contains("X") ||ui.field_7->text().contains("O"))
        && (ui.field_8->text().contains("X") ||ui.field_8->text().contains("O"))
        && (ui.field_9->text().contains("X") ||ui.field_9->text().contains("O")))
        return false;
     return true;
 }

// bool MainWindow::checkWin(bool playerType){


// }


//Список ошибок
//1.Закрывается при нажатии на центр ячейку
//2.Кривой рандом
//3.Кривая проверка на наличие ячейки
//
//
