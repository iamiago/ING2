#include <iostream>
//#include "calculCapital.hpp"

using namespace std;

class Finance
{
private:
	double capital;
	
public:
	Finance(double Capital);

	void calculCapital(int n);
	
	
};

Finance::Finance(double Capital)
{
	capital = Capital;
}
void Finance::calculCapital(int n)
{
	for(int i=0; i<n; ++i)
	{
		capital += (0.045)*capital;
	}
	cout << capital << endl;
}



int main()
{
	int n;
	cout << "Nombres d'annees: \n";
	cin >> n;
	
	cout << "Capital : \n";
	double c;
	cin >> c;
	
	Finance f(c);
	f.calculCapital(n);
	
	
	return 0;
}
