#include "Score.h"
//#include <QFont>


Score::Score(QGraphicsItem *parent) : QGraphicsTextItem(parent)
{
    // initilize the score with 0

    score = 0;

    // draw the score

    setPlainText(QString("Score : ") + QString::number(score)); // score 0

    setDefaultTextColor(Qt::white);

    // setFont(QFont("times",16)); //changes the font and size



}

void Score::increase()
{
    score++;

     // re-draws score with a new value

     setPlainText(QString("Score : ") + QString::number(score));



}

int Score::getScore()
{
    return score;
}
