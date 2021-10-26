#include <iostream>
#include "complexe.h"
using namespace std;

int main()
{
    cout << "Bienvenue dans le programme des nombres complexes!" << endl;

    Complexe z1(2,2);
    Complexe z2(3,3);

    z1.afficher();
    z2.afficher();

    Complexe z3;
    z3 = z1+z2;
    z3.afficher();

    cout << z3 << endl;
    return 0;
}
