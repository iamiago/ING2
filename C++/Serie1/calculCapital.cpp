#include <iostream>
#include "calculCapital.hpp"

double evolutionCapital(double capital, int annees)
{
	for(int i=0; i<annees; ++i){
		capital = capital + (0.045)*capital;
		//cout << capital << " ";
	}
	return capital;
}

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
