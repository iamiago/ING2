#include <iostream>
#include "monde.h"
#include "robot.h"
#include "robotpollueur.h"
#include "pollueurtoutdroit.h"
#include "pollueursauteur.h"
#include "robotnettoyeur.h"
#include "nettoyeurdistrait.h"
using namespace std;

int main()
{
    cout << "Bienvenue dans le programme de test des robots !." << endl;
    Monde m(10,10);
    m.afficherMatrice();

    m.metPapierGras(1,1);
    m.afficherMatrice();
    cout << "Lancement du polluer tout droit sur la colonne 2" << endl;
    PollueurToutDroit test(1,m);
    test.parcourir();
    m.afficherMatrice();
    cout << "Lancement du polluer tout droit sur la colonne 10 " << endl;
    PollueurToutDroit test2(9,m);
    test2.parcourir();
    m.afficherMatrice();
    cout <<"Lancement du pollueur sauteur sur la colonne 5" << endl;
    PollueurSauteur t(2,4,m);
    t.parcourir();
    m.afficherMatrice();
    cout<<"Lancement du Nettoyeur distrait en colone 1" << endl;
    cout<<"Nombre de papiers gras: "<< m.nbPapiersGras() << endl;
    NettoyeurDistrait b(0,0,m);
    b.parcourir();
    m.afficherMatrice();
    cout << "Lancement du robot nettoyeur en colonne 1" << endl;
    cout<<"Nombre de papiers gras: "<< m.nbPapiersGras() << endl;
    RobotNettoyeur a(0,0,m);
    a.parcourir();
    m.afficherMatrice();
    cout<<"Nombre de papiers gras: "<< m.nbPapiersGras() << endl;
    return 0;
}
