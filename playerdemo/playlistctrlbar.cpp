#include "playlistctrlbar.h"
#include "ui_playlistctrlbar.h"

PlaylistCtrlBar::PlaylistCtrlBar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PlaylistCtrlBar)
{
    ui->setupUi(this);
}

PlaylistCtrlBar::~PlaylistCtrlBar()
{
    delete ui;
}

void PlaylistCtrlBar::on_ShowOrHideBtn_clicked()
{
    emit SigShowOrHidePlaylist();
}