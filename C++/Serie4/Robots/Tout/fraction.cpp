#include "fraction.h"
#include <iostream>
using namespace std;

Fraction::Fraction():num(0), denom(1){}
Fraction::Fraction(int n):num(n), denom(1){}
Fraction::Fraction(int n, int d):num(n){
    if(d!=0) denom=d;
}
Fraction::Fraction(const Fraction&f):num(f.num), denom(f.denom){}
Fraction::~Fraction(){}

ostream& operator << (ostream & out, const Fraction & f){
    out << "Fraction : " << f.num << "/" << f.denom << endl;
    return out;
}

void Fraction::afficher(){
    cout << "Fraction: " << num << "/" << denom << endl;
}
