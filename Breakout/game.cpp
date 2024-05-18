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
    scene = new QGraphicsScene(0,0,1000,600);
    setScene(scene);

    // set mouse tracking
    setMouseTracking(true);


}


void Game::start()
{
    set();
}

void Game::create_block_colomn(double x, double numBlocks)
{
    for (double i = 0; i < numBlocks; i++)
    {
        blockCount++;
        Block* block = new Block();
        block->setPos(x, i * 50); // 2 space b/w blocks (50 height of block)
        scene->addItem(block);
    }
}

void Game::create_block_grid(int level)
{
    double height = 6; // Number of rows for the height of the triangle
    double blockWidth = 50;// Width of each block
    double totalWidth = height * blockWidth;
    double screenWidth = scene->width();
    double startX = 0;

    // Square variable declaration

    double size;

    // Rectangle variables declarations

    double rectHeight;
    double rectWidth;

    switch (level)
    {
    case 1:

        size = 2; // Size of the square (2x2)
        totalWidth = size * blockWidth;
        startX = ((screenWidth/2) - (totalWidth/2)); // Adjust startX to place the shape on the right side

        for (size_t i = 0; i < size; i++)
        {
            create_block_colomn(startX + i * blockWidth, size);
        }

        break;

    case 2: // Square case or level two.

        size = 5; // Size of the square (5x5)
        totalWidth = size * blockWidth;
        startX = ((screenWidth/2) - (totalWidth/2)); // Adjust startX to place the shape on the right side

        for (size_t i = 0; i < size; i++)
        {
            create_block_colomn(startX + i * blockWidth, size);
        }

        break;

    case 3:

        for (size_t i = 0; i < height; i++)
        {
            create_block_colomn(i * 50, height - i);
        }


        startX = screenWidth - totalWidth; // Adjust startX to place the shape on the right side

        for (size_t i = 0; i < height; i++)
        {
            create_block_colomn(startX + i * blockWidth, i + 1);
        }

        break;

    case 4:

        totalWidth = height * blockWidth;
        startX = (screenWidth/2)  - totalWidth;

        for (size_t i = 0; i < height; i++)
        {
            create_block_colomn(startX + i * blockWidth, i + 1);
        }

        totalWidth = (height * 2 - 1) * blockWidth;
        startX = (screenWidth - totalWidth);

        for (size_t i = 0; i < height; i++)
        {
            create_block_colomn(startX + (height - i) * blockWidth, i + 1);
        }

        break;

    case 5:

        rectHeight = 4; // Number of rows
        rectWidth = screenWidth/50;  // Number of columns
        totalWidth = rectWidth * blockWidth;
        startX = screenWidth - totalWidth; // Adjust startX to place the shape on the right side

        for (size_t i = 0; i < rectWidth; i++)
        {
            create_block_colomn(startX + i * blockWidth, rectHeight);
        }
    }
}


void Game::set()
{
    // create a ball
    ball = new Ball(level);
    ball->setPos(475,500);
    scene->addItem(ball);

    // create a paddle
    Paddle* paddle = new Paddle();
    paddle->setPos(450,575);
    scene->addItem(paddle);
    paddle->grabMouse();

    // add the block grid
    create_block_grid(level);

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
        ball->count = 3;
        pause();
        Wien* wien = new Wien(++level);
        wien->show();

    }
}

void Game::gameover()
{
    for(size_t i = 0, n = scene->items().size(); i < n; i++)
    {
        scene->items()[i] -> setEnabled(false);
    }


    Joever* joever = new Joever(level);
    joever->show();


    game->pause();
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
