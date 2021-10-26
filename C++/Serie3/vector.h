#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED
#include <string>

using namespace std;

class Vector {
	private:
		double* pelem;
		unsigned int sz;
		string name;
	public:
	    Vector() {sz=0;}//contructeur par d�faut
		Vector(unsigned int);
		Vector(unsigned int, string name);
		Vector(const Vector& v);	 	   //constructeur de copie
		Vector& operator=(const Vector& a); //op�rateur d'affectation
		double & operator[](unsigned int i) const; //op�rateur d'addition
		Vector operator+(const Vector& a) const; //op�rateur d'addition
		Vector operator*(const Vector& a) const ; //op�rateur de soustract

		void affiche();
		~Vector() ;//{delete[] elem; }
};


#endif // VECTOR_H_INCLUDED
