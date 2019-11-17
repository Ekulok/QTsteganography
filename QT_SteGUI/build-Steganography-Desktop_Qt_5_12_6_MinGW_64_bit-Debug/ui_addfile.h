/********************************************************************************
** Form generated from reading UI file 'addfile.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFILE_H
#define UI_ADDFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddFile
{
public:
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_2;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *AddFile)
    {
        if (AddFile->objectName().isEmpty())
            AddFile->setObjectName(QString::fromUtf8("AddFile"));
        AddFile->resize(700, 600);
        AddFile->setMinimumSize(QSize(700, 600));
        AddFile->setMaximumSize(QSize(700, 600));
        AddFile->setSizeIncrement(QSize(700, 600));
        buttonBox = new QDialogButtonBox(AddFile);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(340, 540, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        groupBox = new QGroupBox(AddFile);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 321, 71));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 30, 301, 31));
        groupBox_2 = new QGroupBox(AddFile);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 100, 661, 441));
        plainTextEdit = new QPlainTextEdit(groupBox_2);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 30, 641, 401));
        pushButton = new QPushButton(AddFile);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(440, 40, 151, 51));

        retranslateUi(AddFile);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddFile, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddFile, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddFile);
    } // setupUi

    void retranslateUi(QDialog *AddFile)
    {
        AddFile->setWindowTitle(QApplication::translate("AddFile", "Add file", nullptr));
        groupBox->setTitle(QApplication::translate("AddFile", "Password", nullptr));
        groupBox_2->setTitle(QApplication::translate("AddFile", "Input Text", nullptr));
        pushButton->setText(QApplication::translate("AddFile", "Open File...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddFile: public Ui_AddFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFILE_H
