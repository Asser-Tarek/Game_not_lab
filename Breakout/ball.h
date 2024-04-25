#ifndef BALL_H
#define BALL_H

#include <QGraphicsRectItem>

class Ball: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:

    Ball(QGraphicsItem* parent=NULL);

    double getCenterX();

public slots:

    void move();
    void gameover();

private:

    double xVelocity;
    double yVelocity;

    void reverse_velocity_out_of_bounds();
    void paddle_collision();
    void block_collision();
};

#endif // BALL_H
