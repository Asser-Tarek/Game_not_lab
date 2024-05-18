#include "joever.h"
#include "ui_joever.h"
#include "game.h"

extern Game* game;

Joever::Joever(int thislevel,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Joever)
{
    level = thislevel;
    ui->setupUi(this);

    QPixmap pic(":/pictures/its_joever.jpeg");
    QPixmap neopic = pic.scaled(471,381, Qt::KeepAspectRatio);
    ui->label->setPixmap(neopic);
}

Joever::~Joever()
{
    delete ui;
}


void Joever::on_pushButton_2_clicked()
{
    delete game;
    this->hide();
    game = new Game(level = 1);
    game ->start();
    game ->show();
}

