/********************************************************************************
** Form generated from reading UI file 'addfile_audio.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFILE_AUDIO_H
#define UI_ADDFILE_AUDIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_addfile_audio
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *OpenAudio;
    QPushButton *Play;
    QPushButton *Pause;
    QPushButton *Stop;
    QProgressBar *Time;
    QSlider *Volume;
    QPushButton *Mute;
    QGroupBox *groupBox;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_2;
    QPlainTextEdit *plainTextEdit;
    QProgressBar *Time_2;
    QPushButton *Play_2;
    QPushButton *Stop_2;
    QPushButton *Pause_2;
    QPushButton *OpenAudio_2;
    QPushButton *Mute_2;
    QSlider *Volume_2;

    void setupUi(QDialog *addfile_audio)
    {
        if (addfile_audio->objectName().isEmpty())
            addfile_audio->setObjectName(QString::fromUtf8("addfile_audio"));
        addfile_audio->resize(700, 600);
        addfile_audio->setMinimumSize(QSize(700, 600));
        addfile_audio->setMaximumSize(QSize(700, 600));
        buttonBox = new QDialogButtonBox(addfile_audio);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(350, 560, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        OpenAudio = new QPushButton(addfile_audio);
        OpenAudio->setObjectName(QString::fromUtf8("OpenAudio"));
        OpenAudio->setGeometry(QRect(520, 90, 151, 51));
        Play = new QPushButton(addfile_audio);
        Play->setObjectName(QString::fromUtf8("Play"));
        Play->setGeometry(QRect(10, 90, 71, 51));
        Pause = new QPushButton(addfile_audio);
        Pause->setObjectName(QString::fromUtf8("Pause"));
        Pause->setGeometry(QRect(170, 90, 71, 51));
        Stop = new QPushButton(addfile_audio);
        Stop->setObjectName(QString::fromUtf8("Stop"));
        Stop->setGeometry(QRect(90, 90, 71, 51));
        Time = new QProgressBar(addfile_audio);
        Time->setObjectName(QString::fromUtf8("Time"));
        Time->setGeometry(QRect(20, 42, 641, 21));
        Time->setValue(0);
        Volume = new QSlider(addfile_audio);
        Volume->setObjectName(QString::fromUtf8("Volume"));
        Volume->setGeometry(QRect(330, 110, 181, 16));
        Volume->setOrientation(Qt::Horizontal);
        Mute = new QPushButton(addfile_audio);
        Mute->setObjectName(QString::fromUtf8("Mute"));
        Mute->setGeometry(QRect(250, 90, 71, 51));
        groupBox = new QGroupBox(addfile_audio);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 360, 321, 71));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 30, 301, 31));
        groupBox_2 = new QGroupBox(addfile_audio);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 430, 661, 121));
        plainTextEdit = new QPlainTextEdit(groupBox_2);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 30, 641, 81));
        Time_2 = new QProgressBar(addfile_audio);
        Time_2->setObjectName(QString::fromUtf8("Time_2"));
        Time_2->setGeometry(QRect(20, 192, 641, 21));
        Time_2->setValue(0);
        Play_2 = new QPushButton(addfile_audio);
        Play_2->setObjectName(QString::fromUtf8("Play_2"));
        Play_2->setGeometry(QRect(10, 240, 71, 51));
        Stop_2 = new QPushButton(addfile_audio);
        Stop_2->setObjectName(QString::fromUtf8("Stop_2"));
        Stop_2->setGeometry(QRect(90, 240, 71, 51));
        Pause_2 = new QPushButton(addfile_audio);
        Pause_2->setObjectName(QString::fromUtf8("Pause_2"));
        Pause_2->setGeometry(QRect(170, 240, 71, 51));
        OpenAudio_2 = new QPushButton(addfile_audio);
        OpenAudio_2->setObjectName(QString::fromUtf8("OpenAudio_2"));
        OpenAudio_2->setGeometry(QRect(520, 240, 151, 51));
        Mute_2 = new QPushButton(addfile_audio);
        Mute_2->setObjectName(QString::fromUtf8("Mute_2"));
        Mute_2->setGeometry(QRect(250, 240, 71, 51));
        Volume_2 = new QSlider(addfile_audio);
        Volume_2->setObjectName(QString::fromUtf8("Volume_2"));
        Volume_2->setGeometry(QRect(330, 260, 181, 16));
        Volume_2->setOrientation(Qt::Horizontal);

        retranslateUi(addfile_audio);
        QObject::connect(buttonBox, SIGNAL(accepted()), addfile_audio, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), addfile_audio, SLOT(reject()));

        QMetaObject::connectSlotsByName(addfile_audio);
    } // setupUi

    void retranslateUi(QDialog *addfile_audio)
    {
        addfile_audio->setWindowTitle(QApplication::translate("addfile_audio", "Add Audio", nullptr));
        OpenAudio->setText(QApplication::translate("addfile_audio", "Open Audio", nullptr));
        Play->setText(QApplication::translate("addfile_audio", "Play", nullptr));
        Pause->setText(QApplication::translate("addfile_audio", "Pause", nullptr));
        Stop->setText(QApplication::translate("addfile_audio", "Stop", nullptr));
        Mute->setText(QApplication::translate("addfile_audio", "Mute", nullptr));
        groupBox->setTitle(QApplication::translate("addfile_audio", "Password", nullptr));
        groupBox_2->setTitle(QApplication::translate("addfile_audio", "Input Text", nullptr));
        Play_2->setText(QApplication::translate("addfile_audio", "Play", nullptr));
        Stop_2->setText(QApplication::translate("addfile_audio", "Stop", nullptr));
        Pause_2->setText(QApplication::translate("addfile_audio", "Pause", nullptr));
        OpenAudio_2->setText(QApplication::translate("addfile_audio", "Open Audio", nullptr));
        Mute_2->setText(QApplication::translate("addfile_audio", "Mute", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addfile_audio: public Ui_addfile_audio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFILE_AUDIO_H
