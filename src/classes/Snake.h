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
    ~Snake();
    void ajouterPoint(Point p);
    void afficher();
    
private:
    
    Point Serpent[20];
    int m_index;

    
};



#endif
