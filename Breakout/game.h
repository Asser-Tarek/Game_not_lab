#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include "health.h"
#include "score.h"
#include "block.h"
#include "ball.h"

class Game: public QGraphicsView
{
private:
    int blockCount;
    int level;

public:
    Game(int level = 1, QWidget* parent=NULL);
    ~Game();


    void start();
    void create_block_colomn(double x);
    void create_block_grid();
    void set();
    void hitBlock(Block* block);
    void pause();
    void play();

    QGraphicsScene* scene;
    Score* score;
    Health* health;
    Ball* ball;

};

#endif // GAME_H

