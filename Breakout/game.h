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
    void create_block_colomn(double x, double );
    void create_block_grid(int level);
    void set();
    void hitBlock(Block* block);
    void pause();
    void play();
    void gameover();


    QGraphicsScene* scene;
    Score* score;
    Health* health;
    Ball* ball;

};

#endif // GAME_H

