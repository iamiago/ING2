#include <iostream>
#include "vector.h"
using namespace std;

Vector::Vector(unsigned int s) : elem{new double[s]}, sz{s} {}

//Vector::Vector(unsigned int s)  {
	//elem = new double[s];
	//sz = s;
//} 

Vector::Vector(const Vector& a): elem{new double[a.sz]}, sz{a.sz} 
{
	for(unsigned int i=0; i<sz; ++i) elem[i] = a.elem[i];
}

Vector::~Vector()
{
	delete [] elem;
}
void bad_copy(Vector v1)
{
	Vector v2 = v1;
	
	//v1[0] = 2;
}

Vector& Vector::operator  = (const Vector& a)
{
	sz = a.sz;
	delete[] elem;
	elem = new double[sz];
	
	//Copie terme à terme
	for(unsigned int i=0; i<sz; ++i)
	{
		elem[i] = a.elem[i];
	}
	
	return *this;
}

//ostream& operator << (ostream& os, const Vector v)
//{
	//os << "Size of vector: " << v.sz <<"\n";
	//for(unsigned int i=0; i<v.sz; ++i)
		//os << v[i] << " " ;
		
	//return os;
//}

//void test()
//{
	//Vector v2 = new Vector(4);
	//Vector v1;
	
	//v1=v2;
//}

int main()
{
	return 0;
}
