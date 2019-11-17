#include "extractfile.h"
#include "ui_extractfile.h"
#include <QFileDialog>
#include <QMessageBox>

ExtractFile::ExtractFile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ExtractFile)
{
    ui->setupUi(this);
}

ExtractFile::~ExtractFile()
{
    delete ui;
}

void ExtractFile::on_pushButton_clicked()
{
    QString file_name = QFileDialog::getOpenFileName(this, "Open a file", "C://");
    QMessageBox::information(this, "Seleted file", file_name);
    QFile file(file_name);
}
