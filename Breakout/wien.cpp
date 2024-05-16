#include "wien.h"
#include "ui_wien.h"

extern Game* game;

Wien::Wien(int thisLevel, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Wien)
{
    level = thisLevel;
    ui->setupUi(this);
}

Wien::~Wien()
{
    delete ui;
}

void Wien::on_next_clicked()
{
    delete game;
    this->hide();
    game = new Game(level);
    game ->start();
    game ->show();
}

