#include "Health.h"
//#include <QFont>


Health::Health(QGraphicsItem *parent) : QGraphicsTextItem(parent)
{
    // initilize the score with 0

    health = 3;

    // draw the score

    setPlainText(QString("Health: ") + QString::number(health)); // score 0

    setDefaultTextColor(Qt::red);

    // setFont(QFont("times",16)); //changes the font and size



}

void Health::decrease()
{
    health--;

    // re-draws health with a new value

    setPlainText(QString("Health : ") + QString::number(health));



}





int Health::getHealth()
{
    return health;
}
