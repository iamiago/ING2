#include <iostream>
#include "cercle.h"
using namespace std;

//interface: classe où l'on trouve que les prototypes des méthodes (n'est pas instantiable)

Cercle::Cercle(): Ellipse(){}
// le constructeur de la classe dérivée appelle généralmenet un des constructers de la classe de base


Cercle::Cercle(float x, float y, float d): Ellipse((float) x, (float) y, (float) d, (float) d){}

Cercle::~Cercle(){}

void Cercle::afficher()
{
cout << "Cercle de rayon" << m_a/2 << "\n";
}
