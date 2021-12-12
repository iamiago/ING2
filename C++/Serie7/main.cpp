#include "contact.h"
//#include<Vector>
using namespace std;
#include <vector>
#include <list>
//protected je ne peux pas voir de l'exterieur
//les classes friend ou les classes qui heritent ont accès

int main() {
    Contact c("James", "Rick");
    c.setNum(DOMICILE,"0215923857");
    c.setNum(PORTABLE,"0692847364");
    c.setNum(TRAVAIL,"0139275638");
     cout << c << endl;
   //  Vector<contact> mesContacts;
   // mesContacts.insert(c);

    try{
        cout << c.getNum("Portable") << endl;
        c.setNum("Portable", "0692847024");
    }
    catch (string & s) {
        cerr << s << ". L'operation est annulee !" << endl;
    }
    cout << c << endl;


    cout << "Test de repertoire" << endl;
    list<Contact> repertoire;
    repertoire.push_back(c);

    for (auto x : repertoire){
        cout << x ;
    }
}
