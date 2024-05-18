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

    Ball(int level = 1, QGraphicsItem *parent = nullptr);

    double getCenterX();
    int count;

public slots:

    void move();

private:

    QTimer* timer = nullptr;

    double xVelocity;
    double yVelocity;

    int level;

    void reverse_velocity_out_of_bounds();
    void paddle_collision();
    void block_collision();

};

#endif // BALL_H
