#ifndef HEALTH_H
#define HEALTH_H

// works just like the score code

#include <QGraphicsTextItem>

class Health : public QGraphicsTextItem{
public:

    // creating the member functions of health


        Health(QGraphicsItem * parent=0);

    void decrease();  // decreases health

    int getHealth(); // diplays the health

    int health_check;

private:
    int health; // keeps track of the health bar



};


#endif // HEALTH_H
