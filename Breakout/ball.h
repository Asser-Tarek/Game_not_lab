#ifndef BALL_H
#define BALL_H

#include "joever.h"
#include <QGraphicsRectItem>
#include <QGraphicsProxyWidget>

class Ball: public QObject, public QGraphicsEllipseItem
{
    Q_OBJECT
public:

    Ball(QGraphicsItem* parent=NULL);

    double getCenterX();

public slots:

    void move();
    void gameover();
    void win();


private:

    double xVelocity;
    double yVelocity;

    void reverse_velocity_out_of_bounds();
    void paddle_collision();
    void block_collision();
};

#endif // BALL_H
