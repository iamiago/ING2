#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
using namespace std;


class Fraction
{
    public:
    Fraction(); //Constructeur par default
       Fraction(int n); //Constructeur avec un parametre
       Fraction(int n, int d); //Constructeur avec 2 parametres
       Fraction(const Fraction& f); //Constructeur de recopie
       virtual ~Fraction(); //Destructeurs

       friend ostream& operator << (ostream & out, const Fraction &f);
       void afficher();
       /**
        Fraction():num{0},denom{1}{}

        Fraction(int n): num(n), denom(1){}

        Fraction(int n, int d): num(n), denom(d){}//if d!=0

        Fraction(const Fraction& f){
            num=f.num;
            denom=f.denom;
        }

        virtual ~Fraction(){}


        //Autres méthodes

        //Surcharge de l'opérateur de sortie de flux <<
        friend ostream& operator << (ostream & out, const Fraction& f){
            out << "Fraction: " << f.num << "/" << f.denom << endl;
            //return out;
        }
//        ostream & operator << (ostream & out, const Fraction & f){
//            out << "Fraction: "<< f.num << "/" << f.denom << endl;
//        }
        void afficher(){
            cout <<"Fraction: "<< num << "/" << denom << endl;
        }

*/

    protected:

    private:
        int num;
        int denom;
};

#endif // FRACTION_H
