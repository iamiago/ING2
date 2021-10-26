#ifndef COMPLEXE_H_INCLUDED
#define COMPLEXE_H_INCLUDED

#include <iostream>
using namespace std;

class Complexe {
    protected :
        double re;
        double im;
    public :
        Complexe();
        Complexe(double _re, double _im);
        Complexe(Complexe & c);
        ~Complexe();
        double getRe() const;
        double getIm() const;
        void setRe(double _re);
        void setIm(double _im);
        Complexe operator+(const Complexe & c) const;
        Complexe operator-(const Complexe & c) const ;
        Complexe operator*(const Complexe & c) const ;
        Complexe operator/(const Complexe & c) const;
		void  operator+=(const Complexe & c);
        void  operator=(const Complexe & c);
//        friend bool operator== (const & Complexe, const & Complexe);
        void afficher();
};

ostream& operator<<(ostream& out, const Complexe& c);


#endif // COMPLEXE_H_INCLUDED
