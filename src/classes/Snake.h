#ifndef SNAKE_H
#define SNAKE_H

#include "Point.h"
#include "Board.h"
#include <ncurses.h>


class Board;
class Point;
class Snake							//Création de class Snake
{
public:

    Snake();						//Constructeurpar défault
    Snake(int x, int y);			//Constructeur
    virtual ~Snake();				//Destructeur
    
    void ajouterPoint(Point p);		//Attributs
    void afficher();				//Attributs
    void moveDown();
    void moveUp();
    void moveRight();
    void moveLeft();
    
private:
    
    Point Serpent[20];				//Déclaration Tableau
    int m_index;					//Déclaration itérateur

    
};



#endif
