#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
using namespace std;

class Vector
{
    public:
        Vector(unsigned int s); //constructeur avec allocation dynamique
        Vector(const Vector& v);//Constructeur de recopie
        Vector & operator = (const Vector& v); //operateur d'affectation
        virtual ~Vector(); //Destructeur
        double * getElements();
        friend ostream& operator << (ostream & out, const Vector& v);
        /**
        Vector(unsigned int s):Size(s), Elements(new double[s]){}

        Vector(const Vector&v):Size(v.Size), Elements(new double[v.Size])
        {
            for(unsigned int i=0; i<Size; ++i) Elements[i]=v.Elements[i];
        }

        Vector& operator = (const Vector &v){
            Size=v.Size;
            delete[] Elements;
            Elements = new double[Size];

            //copie terme à terme
            for(unsigned int i =0; i<Size; ++i){
                Elements[i]=v.Elements[i];

            }
        }

        virtual ~Vector(){delete[] Elements;}

        //Getteurs ou accesseurs
        double * getElements(){
            return Elements;
        }
        //Autres méthodes

        friend ostream& operator << (ostream & out, const Vector& v){
            out << "Vector de taile :" << v.Size;
            out << "\nCoeffs: ";
            for(int i=0; i<v.Size; ++i){
                out << v.Elements[i] << " ";
            }
            out << endl;
        }
        **/


    protected:

    private:
        unsigned int Size; //Taille du vecteur
        double * Elements; //Tableau dynamique avec les elements du vecteur
};

#endif // VECTOR_H
