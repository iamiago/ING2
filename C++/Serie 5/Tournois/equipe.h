#ifndef EQUIPE_H
#define EQUIPE_H
//editeur de lien -> includes
//inline pendant la compilation il remplace le prototype de la fct par le corps de la fct
//on a pas le droit de l'utiliser pour les fonction recursives
//et lorsque il y a des pointeurs (car on ne connait pas à l'avance la taille)
// lorsqu'on utilise la même fonction plusieurs fois (car ça ralonge le code)

//static <-> constante globale
//methode ou var static varialbe de classe non pas une variable d'instance
//on peut acceder directement par la classe pas besoin d'un objet
//accessible par toutes les methodes de la classe


class Equipe
{
    public:
        Equipe();
        virtual ~Equipe();

    protected:

    private:
};

#endif // EQUIPE_H
