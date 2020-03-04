/*
 Projet: snake
 Auteur: Sylvain Guilbert
*/
#include <iostream>
#include "Point.h"
#include "Board.h"

using namespace std;

int main()
{

    // pointeurs sur l'unique instance de la classe UniqueObject
    Board *fenetre;
    // initialisation des pointeurs
    fenetre = Board::getInstance ();

    Point p(9,9);
    p.drawPoint();
    p.moveUp();
    p.drawPoint();
    p.setX(15);
    cout << p.getX();
    
       
    
    //cout << "press any key to quit" << endl;
    getchar();
    fenetre->kill();
    return 0;
}
