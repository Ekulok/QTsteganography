/********************************************************************************
** Form generated from reading UI file 'extractfile.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTRACTFILE_H
#define UI_EXTRACTFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ExtractFile
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_2;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *ExtractFile)
    {
        if (ExtractFile->objectName().isEmpty())
            ExtractFile->setObjectName(QString::fromUtf8("ExtractFile"));
        ExtractFile->resize(700, 600);
        ExtractFile->setMinimumSize(QSize(700, 600));
        ExtractFile->setMaximumSize(QSize(700, 600));
        buttonBox = new QDialogButtonBox(ExtractFile);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(340, 550, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        pushButton = new QPushButton(ExtractFile);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(440, 40, 151, 51));
        groupBox = new QGroupBox(ExtractFile);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 321, 71));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 30, 301, 31));
        groupBox_2 = new QGroupBox(ExtractFile);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 100, 661, 441));
        plainTextEdit = new QPlainTextEdit(groupBox_2);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 30, 641, 401));

        retranslateUi(ExtractFile);
        QObject::connect(buttonBox, SIGNAL(accepted()), ExtractFile, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ExtractFile, SLOT(reject()));

        QMetaObject::connectSlotsByName(ExtractFile);
    } // setupUi

    void retranslateUi(QDialog *ExtractFile)
    {
        ExtractFile->setWindowTitle(QApplication::translate("ExtractFile", "Extract File", nullptr));
        pushButton->setText(QApplication::translate("ExtractFile", "Open File...", nullptr));
        groupBox->setTitle(QApplication::translate("ExtractFile", "Password", nullptr));
        groupBox_2->setTitle(QApplication::translate("ExtractFile", "Output Text", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExtractFile: public Ui_ExtractFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTRACTFILE_H
