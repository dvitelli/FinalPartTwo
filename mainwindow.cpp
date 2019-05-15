#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "stdio.h"
#include <sstream>
#include <string>

static QString baseDisplay = "0.0";
static QString input1;
static QString input2;
static bool add, subtract, multiply, divide, mod, nextInput;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->display->setText(baseDisplay);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_button1_clicked()
{
    if(nextInput == true){

        ui->display->setText(baseDisplay);
        nextInput = false;
    }
    if(ui->display->text() == "0.0"){

        ui->display->setText("1");

    } else {

        ui->display->setText(ui->display->text() + "1");


    }

}

void MainWindow::on_button2_clicked()
{
    if(nextInput == true){

        ui->display->setText(baseDisplay);
        nextInput = false;
    }

    if(ui->display->text() == "0.0"){

        ui->display->setText("2");

    } else {

        ui->display->setText(ui->display->text() + "2");


    }

}

void MainWindow::on_button3_clicked()
{
    if(nextInput == true){

        ui->display->setText(baseDisplay);
        nextInput = false;
    }

    if(ui->display->text() == "0.0"){

        ui->display->setText("3");

    } else {

        ui->display->setText(ui->display->text() + "3");


    }

}

void MainWindow::on_button4_clicked()
{
    if(nextInput == true){

        ui->display->setText(baseDisplay);
        nextInput = false;
    }
    if(ui->display->text() == "0.0"){

        ui->display->setText("4");

    } else {

        ui->display->setText(ui->display->text() + "4");


    }

}

void MainWindow::on_button5_clicked()
{
    if(nextInput == true){

        ui->display->setText(baseDisplay);
        nextInput = false;
    }
    if(ui->display->text() == "0.0"){

        ui->display->setText("5");

    } else {

        ui->display->setText(ui->display->text() + "5");


    }

}



void MainWindow::on_button6_clicked()
{
    if(nextInput == true){

        ui->display->setText(baseDisplay);
        nextInput = false;
    }

    if(ui->display->text() == "0.0"){

        ui->display->setText("6");

    } else {

        ui->display->setText(ui->display->text() + "6");


    }

}

void MainWindow::on_button7_clicked()
{
    if(nextInput == true){

        ui->display->setText(baseDisplay);
        nextInput = false;
    }
    if(ui->display->text() == "0.0"){

        ui->display->setText("7");

    } else {

        ui->display->setText(ui->display->text() + "7");


    }

}

void MainWindow::on_button8_clicked()
{
    if(nextInput == true){

        ui->display->setText(baseDisplay);
        nextInput = false;
    }
    if(ui->display->text() == "0.0"){

        ui->display->setText("8");

    } else {

        ui->display->setText(ui->display->text() + "8");


    }

}

void MainWindow::on_button9_clicked()
{
    if(nextInput == true){

        ui->display->setText(baseDisplay);
        nextInput = false;
    }
    if(ui->display->text() == "0.0"){

        ui->display->setText("9");

    } else {

        ui->display->setText(ui->display->text() + "9");


    }

}

void MainWindow::on_button0_clicked()
{
    if(nextInput == true){

        ui->display->setText(baseDisplay);
        nextInput = false;
    }

    if(ui->display->text() == "0.0"){

        ui->display->setText("0");

    } else {

        ui->display->setText(ui->display->text() + "0");


    }

}

void MainWindow::on_subtract_clicked()
{
    input1 = ui->display->text();
    add = false;
    subtract = true;
    multiply = false;
    divide = false;
    mod = false;
    nextInput = true;

}

void MainWindow::on_add_clicked()
{

    input1 = ui->display->text();
    add = true;
    subtract = false;
    multiply = false;
    divide = false;
    mod = false;
    nextInput = true;


}

void MainWindow::on_multiply_clicked()
{
    input1 = ui->display->text();
    add = false;
    subtract = false;
    multiply = true;
    divide = false;
    mod = false;
    nextInput = true;

}

void MainWindow::on_divide_clicked()
{
    input1 = ui->display->text();
    add = false;
    subtract = false;
    multiply = false;
    divide = true;
    mod = false;
    nextInput = true;

}

void MainWindow::on_mod_clicked()
{
    input1 = ui->display->text();
    add = false;
    subtract = false;
    multiply = false;
    divide = false;
    mod = true;
    nextInput = true;

}

void MainWindow::on_equal_clicked()
{
    input2 = ui->display->text();
    
    if(add == true){
        
         int answer = input1.toInt() + input2.toInt();
         QString answerString = QString::number(answer);
         ui->display->setText(answerString);
         add = false;
        
    } if(subtract == true){
        
        int answer = input1.toInt() - input2.toInt();
        QString answerString = QString::number(answer);
        ui->display->setText(answerString);
        subtract = false;
        
    } if(multiply == true){
        
        int answer = input1.toInt() * input2.toInt();
        QString answerString = QString::number(answer);
        ui->display->setText(answerString);
        multiply = false;
        
    } if(divide == true){
        
        if(input2.toInt() == 0){
            
            ui->display->setText("ERROR");
            divide = false;
            
        } else {
            
            int answer = input1.toInt() / input2.toInt();
            QString answerString = QString::number(answer);
            ui->display->setText(answerString);
            divide = false;
        }
            
        } if(mod == true){
        
        int answer = input1.toInt() % input2.toInt();
        QString answerString = QString::number(answer);
        ui->display->setText(answerString);
        mod = false;
        
    }
}
