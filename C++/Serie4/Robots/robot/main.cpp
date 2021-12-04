#include <iostream>
#include "monde.h"
#include "robot.h"
#include "robotPollueur.h"
#include "pollueurToutDroit.h"
#include "pollueurSauteur.h"
#include "robotNettoyeur.h"
#include "nettoyeurDistrait.h"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cout <<"-----------------------"<<endl;
	cout <<"On affiche le monde :"<<endl;
	Monde m(10,10);
	m.afficher();
	PollueurToutDroit ptd(3,m);
	PollueurSauteur ps1(5,m,2);
	PollueurSauteur ps2(8,m,3);
	RobotNettoyeur n(m);
	NettoyeurDistrait nd(m);
	ptd.parcourir();
	cout <<"-----------------------"<<endl;
	cout <<"Le pollueur tout droit a parcouru :"<<endl;
	m.afficher();
	ps1.parcourir();
	cout <<"-----------------------"<<endl;
	cout <<"Le premier pollueur sauteur a parcouru :"<<endl;
	m.afficher();
	ps2.parcourir();
	cout <<"-----------------------"<<endl;
	cout <<"Le deuxieme pollueur sauteur a parcouru :"<<endl;
	m.afficher();
	nd.parcourir();
	cout <<"-----------------------"<<endl;
	cout <<"Le nettoyeur distrait a parcouru :"<<endl;
	m.afficher();
	n.parcourir();
	cout <<"-----------------------"<<endl;
	cout <<"Le nettoyeur normal a parcouru :"<<endl;
	cout <<endl;
	m.afficher();
	cout <<"-----------------------"<<endl;
	return 0;
}
