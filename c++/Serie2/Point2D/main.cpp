#include <iostream>
#include "permuter.h"
#include "point3d.h"
#include "polynome.h"

using namespace std;



int main()
{
/*
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

*/

/*
    Point3D point;
    Point3D point2(2,3);
    Point3D point3(1,2,3);
    point.print();
    point2.print();
    point3.print();

    cout << point3.getx() << endl;

    point3.setx(40);


    cout << point3.getx() << endl;

    Point3D point4(40,2,3);

    point3.compare(point4) ? cout << "Les point sont égaux \n" : cout << "Les point sont différents \n";
*/
    int a[] = {2,2,2};
    Polynome pol(2,a);
    pol.print();


    Polynome pol2(pol);

    pol2.print();
    return 0;
}
