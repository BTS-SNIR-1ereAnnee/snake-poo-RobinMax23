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
    
    Snake();
    void ajouterPoint();
    void afficher();
    
private:
    
    Point Serpent[100];
    int longueur = 4;

    
};





#endif
