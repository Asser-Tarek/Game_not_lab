#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QGraphicsScene>

#include "Score.h"
#include "Health.h";


class Game: public QGraphicsView
{
public:
    Game(QWidget* parent=NULL);


    void start();
    void create_block_colomn(double x);
    void create_block_grid();


    QGraphicsScene* scene;

    Score * score;

    Health * health;

};

#endif // GAME_H

