#ifndef ERREUR_H
#define ERREUR_H

#include <exception>
#include <string>

class Erreur: public exception
{
    public:
        Erreur(int numero = 0, string const& phrase="", int niveau=0) throw():m_numero(numero), m_phrase(phrase),m_niveau(niveau)
        {

        }
        virtual const char* what() const throw()
        {
            return m_phrase.c_str();
        }


        virtual ~Erreur() throw;

    protected:

    private:
        int m_numero;
        string m_phrase;
        int m_niveau;
};

#endif // ERREUR_H

//design pattern regroupement de classe qui fait une grosse fonctionnalité
//assemblage d'un nombre de classe pour créer une fonctionnalité
//Pattern singleton -> gerer l'accès unique a une base de données
