#include "wien.h"
#include "ui_wien.h"

Game* game_new;

Wien::Wien(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Wien)
{
    ui->setupUi(this);
}

Wien::~Wien()
{
    delete ui;
}

void Wien::on_next_clicked()
{
    game_new = new Game();
    game_new->start();
    game_new->show();
}

