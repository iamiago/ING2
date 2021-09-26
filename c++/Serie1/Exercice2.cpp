#include <iostream>
using namespace std;

int tempsRestant(double capital, double valeur)
{
	int cpt(0);
	while(capital<valeur)
	{
		capital += (0.045)*capital;
		++cpt;
	}
	return cpt;
}

int main()
{
	cout << "Capital de départ: \n";
	int capital;
	cin>> capital;
	
	cout << "Capital seuil: \n";
	int seuil;
	cin>>seuil;
	
	cout << "Il faut attendre "<< tempsRestant(capital,seuil) << " annees\n";
	return 0;
}
