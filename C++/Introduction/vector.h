#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
using namespace std;

class Vector{
private:
	double* elem;
	unsigned int sz;
	
public:
	Vector(unsigned int s);				//Constructeur avec l'allocation dynamique
	Vector(const Vector& a); 			//Constructeur de copie
	Vector& operator = (const Vector& a);   //Opérateur d'affectation
	
	virtual ~Vector();
	
	//friend ostream& operator << (ostream& os,const Vector& v);
	
};

#endif
