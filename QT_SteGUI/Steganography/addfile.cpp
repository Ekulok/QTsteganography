#include "addfile.h"
#include "ui_addfile.h"
#include <QFileDialog>
#include <QMessageBox>

AddFile::AddFile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddFile)
{
    ui->setupUi(this);
}

AddFile::~AddFile()
{
    delete ui;
}

void AddFile::on_pushButton_clicked()
{
    QString file_name = QFileDialog::getOpenFileName(this, "Open a file", "C://");
    QMessageBox::information(this, "Seleted file", file_name);
    QFile file(file_name);
}
