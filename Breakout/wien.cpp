#include "wien.h"
#include "ui_wien.h"

extern Game* game;

Wien::Wien(int thisLevel, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Wien)
{
    level = thisLevel;
    ui->setupUi(this);

    QPixmap pic(":/pictures/yippie.jpeg");
    QPixmap neopic = pic.scaled(321,271, Qt::KeepAspectRatio);
    ui->image->setPixmap(neopic);
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

