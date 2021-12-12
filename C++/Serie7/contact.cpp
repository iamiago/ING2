#include <map>
#include "contact.h"
using namespace std;

Contact::Contact(string _nom, string _prenom) : nom(_nom) , prenom(_prenom) {
    agenda.insert(make_pair(DOMICILE," "));
    agenda.insert(make_pair(PORTABLE," "));
    agenda.insert(make_pair(TRAVAIL," "));
}

Contact::Contact(string _nom, string _prenom, string dom, string port, string trav) : nom(_nom) , prenom(_prenom) {
    agenda.insert(make_pair(DOMICILE,dom));
    agenda.insert(make_pair(PORTABLE,port));
    agenda.insert(make_pair(TRAVAIL,trav));
}

Contact::~Contact() {
    delete &agenda;
}

string Contact::getNom() {
    return nom;
}

string Contact::getPrenom() {
    return prenom;
}

void Contact::setNom(string n) {
    nom = n;
}

void Contact::setPrenom(string p) {
    prenom = p;
}

string Contact::getNum(string cle) {
    if (cle== DOMICILE || cle==PORTABLE || cle==TRAVAIL) {
        carnetDAdresses::iterator element=agenda.find(cle);
        return element->second;
    }
    else throw string("Erreur, vous essayez de retrouver un numero de telephone incorrect !");
}

void Contact::setNum(string cle, string val) {
        if (cle== DOMICILE || cle==PORTABLE || cle==TRAVAIL) {
            carnetDAdresses::iterator element=agenda.find(cle);
            agenda.erase(element);
            agenda.insert(make_pair(cle, val));
        }
        else throw string("Erreur, vous essayez de modifier un numero de telephone incorrect !");
}

bool Contact::operator==(Contact & c) {
    return nom==c.getNom() && prenom==c.getPrenom();
}


bool Contact::operator!=(Contact & c) {
    return nom!=c.getNom() || (nom==c.getNom() && prenom==c.getPrenom());
}

bool Contact::operator>(Contact & c) {
    return nom>c.getNom() || (nom == c.getNom() && prenom > c.getPrenom());
}

bool Contact::operator<(Contact & c) {
    return nom<c.getNom() || (nom == c.getNom() && prenom < c.getPrenom());
}

ostream& operator<<(ostream& flux, Contact & c) {
    flux << c.getPrenom() << " " << c.getNom() << " (" << DOMICILE << ":" << c.getNum(DOMICILE) << ", " << PORTABLE << ":" << c.getNum(PORTABLE) << ", " << TRAVAIL << ":" << c.getNum(TRAVAIL) << ")" << endl;
    return flux;
}

