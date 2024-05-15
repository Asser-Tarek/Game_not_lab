#include "ball.h"
#include <QTimer>
#include <QBrush>
#include "game.h"
#include "paddle.h"
#include "block.h"

extern Game* game; //external global object called game

Ball::Ball(QGraphicsItem *parent): QGraphicsEllipseItem(parent), QObject()
{
    // draw rect
    setRect(0,0,50,50);
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::magenta);
    setBrush(brush);

    // move up right initially
    xVelocity = 0;
    yVelocity = -5;

    QTimer* timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(10);
}

double Ball::getCenterX()
{
    return x() + rect().width()/2;
}

int count = 3;

void Ball::move()
{
    // if out of bounds, reverse the velocity
    reverse_velocity_out_of_bounds();

    // if collides with paddle, reverse yVelocity, and add xVelocity
    // depending on where (in the x axis) the ball hits the paddle
    paddle_collision();

    // handle collisions with blocks (destroy blocks and reverse ball velocity)
    block_collision();

    // this function runs when there are only two objects in the scene
    win();

    moveBy(xVelocity,yVelocity);

    if (y() + 50 > 600)
    {
        // move up right initially
        xVelocity = 0;
        yVelocity = -5;

        count--;

        game->health->decrease();

        if(count==0){

         gameover();

        }
    }
}

void Ball::reverse_velocity_out_of_bounds()
{
    // check if out of bound, if so, reverse the proper velocity
    double screenW = game->width();
    double screenH = game->height();

    // left edge
    if (mapToScene(rect().topLeft()).x() <= 0)
    {
        xVelocity = -1 * xVelocity;
    }

    // right edge
    if (mapToScene(rect().topRight()).x() >= screenW)
    {
        xVelocity = -1 * xVelocity;
    }

    // top edge
    if (mapToScene(rect().topLeft()).y() <= 0)
    {
        yVelocity = -1 * yVelocity;
    }

    // bottom edge - NONE (can fall through bottom)
}

void Ball::paddle_collision()
{
    QList<QGraphicsItem*> cItems = collidingItems();
    for (size_t i = 0, n = cItems.size(); i < n; ++i)
    {
        Paddle* paddle = dynamic_cast<Paddle*>(cItems[i]);
        if (paddle){
            // collides with paddle



            // reverse the y velocity
            yVelocity = -1 * yVelocity;

            // add to x velocity depending on where it hits the paddle
            double ballX = getCenterX();
            double paddleX = paddle->getCenterX();

            double dvx = ballX - paddleX;
            xVelocity = (xVelocity + dvx)/15;

            return;
        }
    }
}



void Ball::block_collision()
{   
    QList<QGraphicsItem*> cItems = collidingItems();
    for (size_t i = 0, n = cItems.size(); i < n; ++i)
    {
        Block* block = dynamic_cast<Block*>(cItems[i]);
        // collides with block
        if (block)
        {


            double yPad = 15;
            double xPad = 15;
            double ballx = pos().x();
            double bally = pos().y();
            double blockx = block->pos().x();
            double blocky = block->pos().y();

            // increase score
            game->score->increase();

            // collides from bottom
            if (bally > blocky + yPad && yVelocity < 0)
            {
                yVelocity = -1 * yVelocity;
            }

            // collides from top
            if (blocky > bally + yPad && yVelocity > 0 )
            {
                yVelocity = -1 * yVelocity;
            }

            // collides from right
            if (ballx > blockx + xPad && xVelocity < 0)
            {
                xVelocity = -1 * xVelocity;
            }

            // collides from left
            if (blockx > ballx + xPad && xVelocity > 0)
            {
                xVelocity = -1 * xVelocity;
            }

            // delete block(s)
            game->scene->removeItem(block);
            delete block;

        }
    }
}

//int health_ = 3
//
//    void health_left();
//{
//    health_--;
//}
//




void Ball::gameover()
{

    // set ball pos after it falls back to origin with a slow speed

    // am IF statement connected to the heath when it goes down to zero




    for(size_t i = 0, n = scene()->items().size(); i < n; i++)
    {
        scene()->items()[i] -> setEnabled(false);
    }

    QGraphicsTextItem *gameover = new QGraphicsTextItem;
    gameover->setFont (QFont ("Times New Roman", 70)) ;
    gameover->setDefaultTextColor(Qt::red);
    gameover->setPlainText("Game Over");
    gameover->setPos (330, 250) ;

    Joever joever;
    joever.isVisible();
    joever.exec();

    scene()->removeItem(this);
    delete this;



}





void Ball::win()
{
    if (scene()->items().size() == 2) // Assuming only the ball and paddle are present
    {
        QGraphicsTextItem *winMessage = new QGraphicsTextItem;
        winMessage->setFont(QFont("Times New Roman", 70));
        winMessage->setDefaultTextColor(Qt::green);
        winMessage->setPlainText("Win!");
        winMessage->setPos(350, 250);
        scene()->addItem(winMessage);
    }
}

