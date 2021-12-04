#include <iostream>
#include "fonctions.h"

using namespace std;

int main()
{
      cout << "Hello world!" << endl;

      Finance finance;

    int nbAnnees;
    cout << "entre sur combien d'annees : ";
    cin >> nbAnnees;
    finance.calculateCapital(nbAnnees);


    int minCap;
    cout << "entre le minimum du capital attendu  : ";
    cin >> minCap;

      finance.calculateNbYears(minCap);
      return 0;

      return 0;
}
