#include <iostream>
#include "Point.h"
#include "Snake.h"
using namespace std;

Snake::Snake()
{
    this->m_index = 0;							//Déclaration de l'itérateur à 0

}

Snake::~Snake()
{
		
}

Snake::Snake(int x, int y)
{
		
}

/******
Fonction ajouter point du serpent
******/

void Snake::ajouterPoint(Point p)
{
    this->Serpent[m_index] = p;					//Serpent pointant vers le tableau
	if (m_index<=19)
	{
		m_index++;
	}
        
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


/******
Fonctions déplacement du serpent
******/

void Snake::moveDown()
{
    for(int i=0;i<m_index;i++)					//Parcourir le tableau pour afficher serpent
    {
        Serpent[i].moveDown();					//dessiner les points du serpent
    }
}


void Snake::moveUp()
{
    for(int i=0;i<m_index;i++)					//Parcourir le tableau pour afficher serpent
    {
        Serpent[i].moveUp();					//dessiner les points du serpent
    }
}


void Snake::moveLeft()
{
    for(int i=0;i<m_index;i++)					//Parcourir le tableau pour afficher serpent
    {
        Serpent[i].moveLeft();					//dessiner les points du serpent
    }
}


void Snake::moveRight()
{
    for(int i=0;i<m_index;i++)					//Parcourir le tableau pour afficher serpent
    {
        Serpent[i].moveRight();					//dessiner les points du serpent
    }
}






























