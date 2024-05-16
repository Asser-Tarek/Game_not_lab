#include "game.h"
#include "paddle.h"
#include "block.h"
#include "wien.h"

extern Game* game;

Game::Game(int thisLevel, QWidget *parent): QGraphicsView(parent)
{
    level = thisLevel;
    blockCount = 0;

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
    for (size_t i = 0, n = 4; i < n; i++)
    {
        blockCount++;
        Block* block = new Block();
        block->setPos(x,i*50); // 2 space b/w blocks (50 height of block)
        scene->addItem(block);
    }
}

void Game::create_block_grid()
{
    for (size_t i = 0, n = i; i < n; i++)
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
    ball = new Ball();
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

void Game::hitBlock(Block* block)
{
    blockCount--;
    scene->removeItem(block);
    delete block;
    if(blockCount <= 0)
    {
        pause();
        Wien* wien = new Wien(++level);
        wien -> show();

    }
}

void Game::pause()
{
    ball->endTimer();
}

void Game::play()
{
    ball->startTimer();
}

Game::~Game()
{
    delete ball;
}
