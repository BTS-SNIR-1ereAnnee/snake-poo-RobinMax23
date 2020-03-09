/*
 Projet: snake
 Auteur: Sylvain Guilbert
*/
#include <iostream>
#include "Point.h"
#include "Board.h"
#include "Snake.h"

using namespace std;

int main()
{

    // pointeurs sur l'unique instance de la classe UniqueObject
    Board *fenetre;
    // initialisation des pointeurs
    fenetre = Board::getInstance ();


    
//    p.drawPoint();
//    p.moveUp();
//    p.drawPoint();
//    p.setX(15);
//    cout << p.getX();
	
	Snake serpent;	
	
	Point p(9,9);				
	serpent.ajouterPoint(p);		//Appel de la fonction ajouterPoint
	serpent.afficher();				//Appel de la fonction affichage
    
	Point p2(9,10);
	serpent.ajouterPoint(p2);		
	serpent.afficher();

	Point p3(9,11);
	serpent.ajouterPoint(p3);
	serpent.afficher();
	
	Point p4(9,12);
	serpent.ajouterPoint(p4);
	serpent.afficher();
	
    //cout << "press any key to quit" << endl;
    getchar();
    fenetre->kill();
    return 0;
}
