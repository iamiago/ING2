#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
using namespace std;

class Fraction{
private:
	int numerateur;
	int denominateur;

public:
	Fraction();				//Constructeur par default
	Fraction(int n);			//Constructeur avec un parametre
	Fraction(int n, int d);		//Constructeur avec 2 parametres
	Fraction(const Fraction& f);  //Constructeur de recopie
	virtual ~Fraction();				//Destructeur
	
	//Autres méthodes
	friend ostream& operator << (ostream& out, const Fraction& f);
	
	
};
	
	
#endif
