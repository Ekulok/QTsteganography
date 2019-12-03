#ifndef ADDFILE_AUDIO_H
#define ADDFILE_AUDIO_H

#include <QDialog>

namespace Ui {
class addfile_audio;
}

class QMediaPlayer;

class addfile_audio : public QDialog
{
    Q_OBJECT

public:
    explicit addfile_audio(QWidget *parent = nullptr);
    ~addfile_audio();

private slots:
    void on_OpenAudio_clicked();

    void on_Play_clicked();

    void on_Pause_clicked();

    void on_Stop_clicked();

    void on_Mute_clicked();

    void on_Volume_valueChanged(int value);

private:
    Ui::addfile_audio *ui;
    QMediaPlayer *mMediaPlayer;
};

#endif // ADDFILE_AUDIO_H
