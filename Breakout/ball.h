#ifndef BALL_H
#define BALL_H

#include "joever.h"
#include "score.h"
#include "health.h"
#include <QGraphicsRectItem>
#include <QGraphicsProxyWidget>
#include <QTimer>

class Ball: public QObject, public QGraphicsEllipseItem
{
    Q_OBJECT
public:

    void endTimer();
    void startTimer();

    Ball(QGraphicsItem* parent=NULL);

    double getCenterX();

public slots:

    void move();
    void gameover();

private:

    QTimer* timer = nullptr;

    double xVelocity;
    double yVelocity;

    void reverse_velocity_out_of_bounds();
    void paddle_collision();
    void block_collision();

};

#endif // BALL_H
