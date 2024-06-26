#include "main_window.h"
#include "ui_main_window.h"
#include "game.h"

extern Game* game;

Main_window::Main_window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Main_window)
{
    ui->setupUi(this);
}

Main_window::~Main_window()
{
    delete ui;
}

void Main_window::on_start_button_clicked()
{
    game->show();
    game->start();
    game->setFocus();
    this->hide();
}

