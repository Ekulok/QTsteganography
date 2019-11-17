#ifndef EXTRACTFILE_H
#define EXTRACTFILE_H

#include <QDialog>

namespace Ui {
class ExtractFile;
}

class ExtractFile : public QDialog
{
    Q_OBJECT

public:
    explicit ExtractFile(QWidget *parent = nullptr);
    ~ExtractFile();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ExtractFile *ui;
};

#endif // EXTRACTFILE_H
