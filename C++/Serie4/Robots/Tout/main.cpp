#include <iostream>
#include "polynome.h"
#include "fraction.h"
#include "vector.h"
#include "finance.h"
#include <iomanip>
#include <math.h>
using namespace std;


void testFraction(){
    cout << "Procedure pour tester la classe Fraction" << endl;
    Fraction f1;
    f1.afficher();

    Fraction f2(3);
    f2.afficher();

    Fraction f3(3,0);
    f3.afficher();

    cout << "Copie de la deuxième fraction, ";
    Fraction f4(f2);
    f4.afficher();

    cout << f1;

    Fraction *pf;
    pf = new Fraction(9,5);
    //cout << pf << endl; // valeur hexadecimal de l'emplacement du pointeur (case)
    cout << *pf << endl;
    delete pf;


    cout << "\nDeuxième serie de test\n";
    int n;
    cout  << "Entrez le nombre de fractions à créer: ";
    cin >> n;

    Fraction* ptf = new Fraction[n];
    //Tableau dynamique de fractions, n constructeurs par defaut sont appelés
    for(int i=0; i<n; ++i){
        ptf[i] = Fraction(i,i+1);
        cout << ptf[i];
    }
    delete[] ptf;

    cout << "\nTroisième serie de test\n";
    cout << "Entre le nombre de fraciton à créer: ";
    cin >>n;
    Fraction **ppf = new Fraction*[n];
    for(int i=0; i<n; ++i){
        ppf[i]=new Fraction(i+1,i+2);
        cout << *ppf[i] ;
    }
    for(int i=0; i<n; ++i){
        delete ppf[i];
    }
    delete[] ppf;

}

void testPolynome(){
    cout << "Procedure pour tester la classe polynome" << endl;

    Polynome p1(5);
    p1.afficher();

}
void testVector()
{
    cout << "Procedure pour tester la classe Vector" << endl;
    Vector v1(4);
    cout << v1;

    for(int i=0; i<4; ++i){
        v1.getElements()[i]=i+1;
    }
    cout << v1;

    cout << "Test du constructeur par recopie " << endl;
    Vector v2(v1);
    cout << v2;
}
void testFinance()
{
    Finance compte(1000,0.045);
    compte.calculateCapital(5);

    compte.calulateNbYears(1500);
}

void Exo4Tp1()
{
    double years[10];
    double value[10] = {1517.93, 1757.78, 1981.10,2215.73,2942.66,3558.32, 4063.91, 4521.16,5101.76,0};
    double moyenne=0;
    double coeffscarre=0;
    double variance=0;
    double varianceCorrige = 0;
    double ecartType=0;
    double ecartTypeCorrige = 0;
    for(int i=0; i<10; ++i){
        years[i] = 1990+i*2;

    }


    for(int i=0; i<10; ++i){
        cout << years[i] <<  "    ";
    }
    cout << endl;
    for(int i=0; i<10; ++i){
        cout << value[i] <<  " ";
        moyenne += value[i];
    }
    cout << endl;
    moyenne /=9;

    cout << "Moyenne : " << moyenne << endl;

    for(int i=0; i<9; ++i){
        coeffscarre += (value[i] - moyenne)*(value[i] - moyenne);
    }

    variance = coeffscarre/9;
    varianceCorrige= coeffscarre/8;

    cout << "Variance : " <<std::setprecision (15)<< variance << endl;
    cout << "Variance corrigé: " << std::setprecision (15)<< varianceCorrige << endl;
    cout <<"Ecart type : " << sqrt(variance) << endl;
    cout << "Ecart type corrigé :" << sqrt(varianceCorrige) << endl;





}
int main()
{
    cout << "Bienvenue dans le programme principal\n" << endl;
    //testPolynome();
    //testFraction();
    //testVector();
    //testFinance();
    //Exo4Tp1();
    return 0;
}
