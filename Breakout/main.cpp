#include <QApplication>
#include "game.h"
#include "main_window.h"

Game* game;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    game = new Game();

    Main_window* start = new Main_window();
    start->show();

    return a.exec();
}
