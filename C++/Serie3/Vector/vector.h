#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED
#include <string>

using namespace std;

//class nominal, class canonique: constructeur par defaut, constructeur par recopie, surcharge d'operateur d'affectation et destructeur
//const a gauche et const a droite
//const de la class, const de l'appelé
//& et commercial ce n'est pas une copie c'est l'objet lui même, le vecteur qui est retourné ce n'est pas la copie  ou un vecteur que l'on a crée mais le vecteur lui même
//Qu'est ce que ça veut dire surcharger et re-definir?
//Surcharge:
//Rédéfinition: On a le même prototype avec les memes arguments et memes types, c'est le comportement qui change (si on l'appelle sur un autre objet)
//La rédéfinition concerne uniquement l'héritage

//Méthode surchargée : plusieurs fois la même méthode dans une même classe, avec le même nom mais avec des paramètres différents.
//Méthode redéfinie : une méthode dans une classe fille qui porte le même nom et possède les mêmes paramètres qu'une méthode de sa classe mère.

//Diff entre java et c++: Java, programmation objet, toute les méthodes sont dans une classe, même le main
//C++ est un langage procédurale orienté objet
//en c++ on compile et on obtient un fichier executable (micro procésseur va l'executeur)
//Java c'est du bytecode, il faut une machine virtuelle pour l'executeur, pour transforme le bytecode en exécutable pour la machine en question (linux, windows ou mac)
//l'executable de linux ne fonctionnera pas sur windows
//Java est multi platforme, le bytecode est exécutable dans n'importe quel OS

//Encapsulation: on protège les propriétés, on ne peut y acceder que par les méthodes de la classe (private)

//Java héritage simple -> interface avec implements
//C++ heritage multiple


class Vector {

    private:
        double* pelem;
        unsigned int sz;
        string name;

    public:
        Vector() {sz=0;} // Constructeur par defaut
        Vector(unsigned int s);
        Vector(unsigned int s, string nom);
        Vector(const Vector& v); // constructeur de copie
        Vector& operator=(const Vector &a); //Surcharge de l'opérateur de surcharge
        //valeur d'une position donné du vecteur
        double& operator[] (unsigned int i) const; //Surcharge de l'objet à la positio i
        //assigner une valeur a une position donné
        Vector & operator()(unsigned int i, double val); //Surchage de la modification d'un objet à la position i
        Vector operator+(const Vector& a) const;
        Vector operator*(const Vector& a) const;

        void affiche();
        ~Vector(); //destructeur {delete[] elem;}
};


#endif // VECTOR_H_INCLUDED
