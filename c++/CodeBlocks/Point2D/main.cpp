#include <iostream>
#include "permuter.h"
using namespace std;

void Permuter::permuterClassique(int a, int b)
{   // Ne marche pas
    int tmp =a;
    a=b;
    b=tmp;
}

void Permuter::permuterReference(int& a, int& b)
{
    int tmp = a;
    a=b;
    b=tmp;
}

void Permuter::permuterPointeur(int* a, int* b)
{
    int tmp;

    tmp= *a;
    *a=*b;
    *b=tmp;
}




int main()
{
    cout << "Veuillez rentrer 2 nombres: \n";
    int a,b;
    cin >> a >> b;

    cout << "a = " << a << " b = " << b << endl;

    Permuter p;
    p.permuterClassique(a,b);
    cout << "a = " << a << " b = " << b << endl ;

    p.permuterPointeur(&a,&b);
    cout << "a = " << a << " b = " << b << endl ;

    p.permuterReference(a,b);
    cout << "a = " << a << " b = " << b << endl ;

    return 0;
}
