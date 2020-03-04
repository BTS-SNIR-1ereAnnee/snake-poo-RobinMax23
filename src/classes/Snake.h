#ifndef SNAKE_H
#define SNAKE_H

#include "Point.h"
#include "Board.h"
#include <ncurses.h>


class Board;
class Point;
class Snake
{
public:
    
    snake();
    void ajouterPoint();
    void afficher();
    
private:
    
    pointSerpent[100];
    int longueur = 4;

    
};





#endif
