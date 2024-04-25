#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QGraphicsScene>

class Game: public QGraphicsView
{
public:
    Game(QWidget* parent=NULL);


    void start();
    void create_block_colomn(double x);
    void create_block_grid();


    QGraphicsScene* scene;

};

#endif // GAME_H

