#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addfile.h"
#include "extractfile.h"

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


void MainWindow::on_pushButton_clicked()
{
    AddFile addfile;
    addfile.setModal(true);
    addfile.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    ExtractFile extractfile;
    extractfile.setModal(true);
    extractfile.exec();
}
