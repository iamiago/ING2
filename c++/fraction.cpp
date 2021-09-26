#include <iostream>
#include "fraction.h"
using namespace std;

Fraction::Fraction() : numerateur{0}, denominateur{1}{}

Fraction::Fraction(int n): numerateur{n}, denominateur{1}{}

Fraction::Fraction(int n, int d): numerateur{n}, denominateur{d}{}

Fraction::Fraction(const Fraction& f)
{
	numerateur = f.numerateur;
	denominateur = f.denominateur;
}

Fraction::~Fraction(){}

ostream& operator << (ostream& out, const Fraction& f)
{
	out << "Fraction: " << f.numerateur << "/" << f.denominateur << endl;
	return out;
}

void test()
{
	Fraction f1;
	Fraction f2(10);
	Fraction f3(5,6);
	Fraction f4(f3);
	
	cout << f1 << endl;
	cout << f2 << endl;
	cout << f3 << endl;
	cout << f4 << endl;
	
	Fraction* pf;
	pf = new Fraction(9,5);
	cout << *pf << endl;
	delete pf;
}

void test2()
{
	int n;
	cout << "Nombre de fractions à créer: ";
	cin >> n;
	
	Fraction* ptf = new Fraction[n]; //Tableau dynamique de fractions, n constructeurs par defaut sont appelés
	
	for(int i=0; i<n; ++i)
	{
		ptf[i] =  Fraction(i,i+1);
		cout << ptf[i] << endl;
	}
	
	delete[] ptf;
}

void test3()
{
	int n;
	cout << "Nombre de fractions à créer: ";
	cin >> n;
	Fraction** ppf = new Fraction*[n];
	
	for(int i=0; i<n; ++i){
		ppf[i] = new Fraction(i+1,i+2);
		cout << *ppf[i] << endl;
	}
	
	for(int i=0; i<n; ++i){
		delete ppf[i];
	}
	
	delete[] ppf;
}

int main()
{
	Fraction f(7,2);
	cout << f << endl;
	
	cout << "Test #1\n";
	test();
	
	cout << "Test #2\n";
	test2();
	
	cout << "Test #3\n";
	test3();
}
