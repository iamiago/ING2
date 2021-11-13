#include <iostream>
#include "vector.h"

using namespace std;

int main()
{
    cout << "Bienvenu dans le programme Vector!" << endl;
    Vector a(2,string("Vector1"));

    a[0] = 2.0;
    a[1] = 3.0;
    a.affiche();

    Vector b(2, string("Vector2"));

    b[0] = 1.0;
    b[1] = 2.0;

    b.affiche();

    cout << "Vector3 = Vector1 + Vector2\n\n";
    Vector c(2,string("Vector3"));
    c=a+b;
    c.affiche();

    cout << "Vector4 = Vector1 * Vector2\n\n";
    Vector d(2,string("Vector4"));
    d=a*b;
    d.affiche();

    return 0;
}
