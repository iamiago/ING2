#include <iostream>
#include"carre.h"
#include"dessin.h"
#include"cercle.h"
#include"triangle.h"

using namespace std;


void LocalementUnCercleDePlus(const Dessin& img) {
   Dessin tmp(img);
   tmp.ajouteFigure(Cercle(1));
   cout << "Affichage de 'tmp': " << endl;
   tmp.affiche();
}


int main()
{
   cout << "Hello world!" << endl;

   Dessin dessin;

   //dessin.ajouteFigure(Triangle(3,4));
   dessin.ajouteFigure(Carre(2));

   LocalementUnCercleDePlus(dessin);

   dessin.ajouteFigure(Triangle(6,1));
   dessin.ajouteFigure(Cercle(12));

   cout << endl << "Affichage du dessin : " << endl;
   dessin.affiche();

   return 0;
}
