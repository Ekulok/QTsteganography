#include "addfile_audio.h"
#include "ui_addfile_audio.h"
#include <QMediaPlayer>
#include <QFileDialog>

addfile_audio::addfile_audio(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addfile_audio)
{
    ui->setupUi(this);
    mMediaPlayer = new QMediaPlayer(this);

    /*
    connect(mMediaPlayer, &QMediaPlayer::positionChanged, [&](qin64 pos) {
        ui->Volume->setValue(pos);
    });

    connect(mMediaPlayer, &QMediaPlayer::durationChanged, [&](qin64 dur) {
        ui->Volume->setMaximum(dur);
    });
    */
}

addfile_audio::~addfile_audio()
{
    delete ui;
}

void addfile_audio::on_OpenAudio_clicked()
{
    QString file_name = QFileDialog::getOpenFileName(this, tr ("Open Audio"), "", tr("Audio (*.wav)"));
    if (file_name.isEmpty()) {
        return;
    }
    mMediaPlayer->setMedia(QUrl::fromLocalFile(file_name));
    mMediaPlayer->setVolume(ui->Volume->value());
    on_Play_clicked();
}

void addfile_audio::on_Play_clicked()
{
    mMediaPlayer->play();
}

void addfile_audio::on_Pause_clicked()
{
    mMediaPlayer->pause();
}

void addfile_audio::on_Stop_clicked()
{
    mMediaPlayer->stop();
}

void addfile_audio::on_Mute_clicked()
{
    if (ui->Mute->text() == "Mute") {
    mMediaPlayer->setMuted(true);
    ui->Mute->setText("Unmute");
    } else {
        mMediaPlayer->setMuted(false);
        ui->Mute->setText("Mute");
    }
}

void addfile_audio::on_Volume_valueChanged(int value)
{
    mMediaPlayer->setVolume(value);
}
