#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QLCDNumber"


static int displayStart = 0;
static std::string input1;
static std::string input2;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;


}

void MainWindow::on_button7_clicked()
{





}

void MainWindow::on_button9_clicked()
{


}

void MainWindow::on_display_windowIconTextChanged(const QString &iconText)
{



}
