#ifndef CONTACT_H_INCLUDED
#define CONTACT_H_INCLUDED

#include <map>
#include <string>
#include <iostream>
using namespace std;

typedef map<string,string> carnetDAdresses;

const string DOMICILE="Domicile";
const string PORTABLE="Portable";
const string TRAVAIL="Travail";

class Contact{
    protected :
        string nom, prenom;
        carnetDAdresses agenda;
    public :
        Contact(string _nom, string _prenom);
        Contact(string _nom, string _prenom, string dom, string port, string trav);
        ~Contact();
        string getNum(string cle);
        void setNum(string cle, string val);
        string getNom();
        string getPrenom();
        void setNom(string n);
        void setPrenom(string p);
        bool operator==(Contact & c);
	    bool operator!=(Contact & c);
        bool operator>(Contact & c);
        bool operator<(Contact & c);
};

ostream& operator<< (ostream& flux, Contact & c);

#endif // CONTACT_H_INCLUDED
