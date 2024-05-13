#include "game.h"
#include "ball.h"
#include "paddle.h"
#include "block.h"

Game::Game(QWidget *parent): QGraphicsView(parent)
{
    // initialize scene
    scene = new QGraphicsScene(0,0,1000,600);
    setScene(scene);

    // set mouse tracking
    setMouseTracking(true);
}

void Game::start()
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

    // create the blocks grid
    create_block_grid();
}

void Game::create_block_colomn(double x)
{
    for (size_t i = 0, n = 1; i < n; i++)
    {
        Block* block = new Block();
        block->setPos(x,i*52); // 2 space b/w blocks (50 height of block)
        scene->addItem(block);
    }
}

void Game::create_block_grid()
{
    for (size_t i = 0, n = 1; i < n; i++)
    {
        create_block_colomn(i*50);
    }
}
