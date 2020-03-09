#include <iostream>
#include "Point.h"
#include "Snake.h"
using namespace std;

Snake::Snake()
{
    this->m_index = 0;							//Déclaration de l'itérateur à 0
}



/******
Fonction ajouter point du serpent
******/

void Snake::ajouterPoint(Point p)
{
    this->Serpent[m_index] = p;					//Serpent pointant vers le tableau

        
}


/******
Fonction Affichage du serpent
******/

void Snake::afficher()
{
    for(int i=0;i<m_index;i++)					//Parcourir le tableau pour afficher serpent
    {
        Serpent[i].drawPoint();					//dessiner les points du serpent
    }
}

	Snake::~Snake()
	{
		
	}
