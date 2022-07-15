#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <cedolib.h>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    CEDOLib cedo;
    ui->txtAddition->setText(QString::number(cedo.addition(3, 4)));
    ui->txtSubstraction->setText(QString::number(cedo.substraction(5, 6)));
    ui->txtMultiplication->setText(QString::number(cedo.multiplication(7, 8)));
    ui->txtDivision->setText(QString::number(cedo.division(9, 4)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionClose_triggered()
{
    close();
}

