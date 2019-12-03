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
    QString file_name = QFileDialog::getOpenFileName(this, tr("Choose"), "", tr("Images (*.bmp)"));
    if (QString::compare(file_name, QString()) !=0)
    {
        QImage image;
        bool valid = image.load(file_name);

        if (valid)
        {
            image = image.scaledToWidth(ui->label_image->width(), Qt::SmoothTransformation);
            image = image.scaledToHeight(ui->label_image->height(), Qt::SmoothTransformation);
            ui->label_image->setPixmap(QPixmap::fromImage(image));
        }
        else
        {
            //Error handing
            QMessageBox::information(this, QGuiApplication::applicationDisplayName(), tr("Cannot load %1: %2"));
        }
    }
}
