#include <iostream>
#include "Point.h"
#include "Snake.h"
using namespace std;

Snake::Snake()
{
    this->m_index = 0;
}

void Snake::ajouterPoint(Point p)
{
    this->Serpent[m_index] = p;
    if(m_index <= 19)
    {
        m_index++;
    }
        
}

void Snake::afficher()
{
    for(int i=0;i<m_index;i++)
    {
        Serpent[i].drawPoint();
    }
}
