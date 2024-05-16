#include "joever.h"
#include "ui_joever.h"

Joever::Joever(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Joever)
{
    ui->setupUi(this);

    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);

    setAttribute(Qt::WA_NoSystemBackground);
    setAttribute(Qt::WA_TranslucentBackground);
    setAttribute(Qt::WA_PaintOnScreen);

    setAttribute(Qt::WA_TransparentForMouseEvents);

    QPixmap pic(":/pictures/its_joever.jpeg");
    QPixmap neopic = pic.scaled(471,381, Qt::KeepAspectRatio);
    ui->label->setPixmap(neopic);
}

Joever::~Joever()
{
    delete ui;
}



