#include <iostream>
using namespace std;

double evolutionCapital(double capital, int annees)
{
	for(int i=0; i<annees; ++i){
		capital = capital + (0.045)*capital;
		cout << capital << " ";
	}
	return capital;
}

int main()
{
	
	int n;
	cout << "Nombres d'annees: \n";
	cin >> n;
	
	cout << "Capital : \n";
	double c;
	cin >> c;
	
	cout << evolutionCapital(c,n)<< "\n";
	
}
