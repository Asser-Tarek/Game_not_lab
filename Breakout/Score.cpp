#include "score.h"
#include <QFont>


Score::Score(QGraphicsItem *parent) : QGraphicsTextItem(parent)
{
    // make score zero

    score = 0;

    //

    setPlainText(QString("Score: ") + QString::number(score)); // score 0

    setDefaultTextColor(Qt::white);

    setFont(QFont("times",16)); //changes the font and size



}

void Score::increase()
{
    score++;

    // re-draws score with a new value

    setPlainText(QString("Score: ") + QString::number(score));



}

int Score::get_score()
{
    return score;
}
