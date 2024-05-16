#include "game.h"
#include "ball.h"
#include "paddle.h"
#include "block.h"

Game::Game(QWidget *parent): QGraphicsView(parent)
{
    // initialize scene
    scene = new QGraphicsScene(0,0,950,600);
    setScene(scene);

    // set mouse tracking
    setMouseTracking(true);


}


void Game::start()
{
    set();
}

void Game::create_block_colomn(double x)
{
    for (size_t i = 0, n = 1; i < n; i++)
    {
        Block* block = new Block();
        block->setPos(x,i*50); // 2 space b/w blocks (50 height of block)
        scene->addItem(block);
    }
}

void Game::create_block_grid()
{
    for (size_t i = 0, n = 2; i < n; i++)
    {
        if (i % 2 == 0)
        {
            create_block_colomn(i*50);
        }

    }
}
void Game::set()
{
    // create a ball
    Ball* ball = new Ball();
    ball->setPos(475,500);
    scene->addItem(ball);

    // create a paddle ;)
    Paddle* paddle = new Paddle();
    paddle->setPos(450,575);
    scene->addItem(paddle);
    paddle->grabMouse();

    // add the block grid
    create_block_grid();

    //create the score
    score = new Score();
    score->setPos(score->x(),score->y()+25);
    scene->addItem(score);

    // create health
    health = new Health();
    health->setPos(health->x(),health->y()+50);
    scene->addItem(health);

}
