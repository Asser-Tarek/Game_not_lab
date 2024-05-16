#ifndef SCORE_H
#define SCORE_H

#include <QGraphicsTextItem>
#

class Score : public QGraphicsTextItem{

public:

    // creating the member functions of score,
    Score(QGraphicsItem * parent = 0);

    void increase();  // increases score

    int get_score(); // diplays the score

private:
    int score; // keeps track of the score



};

#endif // SCORE_H
