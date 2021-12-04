#include"triangle.h"
#include<iostream>

using namespace std;

Triangle ::  Triangle(double b = 0.0, double h = 0.0) : base(b), hauteur(h) {
    cout << "Construction d'un triangle " << base << "x" << hauteur << endl;
  }

  Triangle :: Triangle(const Triangle& autre)
    : Figure(autre), base(autre.base), hauteur(autre.hauteur)
  {
    cout << "Copie d'un triangle " << base << "x" << hauteur << endl;
  }

  Triangle :: ~Triangle() { cout << "Destruction d'un triangle" << endl; }

  Figure* Triangle :: copie() const { return new Triangle(*this); }

  void Triangle :: affiche() const {
    cout << "Un triangle " << base << "x" << hauteur << endl;
  }
