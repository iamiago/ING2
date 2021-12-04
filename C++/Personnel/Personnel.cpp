#include <fstream>
#include <algorithm>
#include <iostream>
#include "Personnel.h"
#include "Manutentionnaire.h"
#include "Representant.h"
#include "Vendeur.h"
#include "Technicien.h"

bool compareEmploye(const Employe * e1, const Employe * e2) {
	return e1->getDate() < e2->getDate();
}

bool Personnel::charger(const std::string & fichier) {
	std::ifstream ifs(fichier);
	if (ifs) {
		Employe * emp;
		char type; // 1er caractère pour connaitre le type d'employé 
		std::string nom;
		std::string prenom; 
		std::string date;
		double attr; // chiffre affaire (double) ou nombre d'unités ou nombre d'heures (int)
		std::string fin; 
		while (!ifs.eof()) {
			ifs >> type; 
			ifs >> nom;
			ifs >> prenom;
			ifs >> date;			
			ifs >> attr;
			ifs >> fin; 
			if (!ifs.fail()) { // si les formats sont bons et pas end-of-file
				switch (type) {
					case 'V' : 
						emp = new Vendeur(nom,prenom,date,attr);
						break;
					case 'R' :
						emp = new Representant(nom,prenom,date,attr);
						break;
					case 'T' :
						emp = new Technicien(nom,prenom,date,attr);
						break;
					case 'M' :
						emp = new Manutentionnaire(nom,prenom,date,attr);
						break;
					default : 
						std::cerr << "Le format n'est pas bon" << std::endl;
						return false;
				}
				std::cout << type << " " << nom << " "<< prenom << " "<< date << " " << attr << " " << fin << std::endl;
				staff.push_back(emp);
			}
			else {
				if (!ifs.eof()) {
					std::cerr << "Le format n'est pas bon" << std::endl;
					return false;
				}
			}
		}
		// trier le staff
		std::sort(staff.begin(), staff.end(), compareEmploye);
		for (const auto & e : staff)
			std::cout << e->getInfo() << std::endl;
		return true;
	}
	else {
		std::cerr << "Impossible d'ouvrir le ficher" << std::endl;
		return false;
	}
}

void Personnel::calculer() {
	double s = 0;
	for (const auto & emp : staff) {
		std::cout << "Salaire : " << emp->salaire() << std::endl;
		s += emp->salaire();
	}
	std::cout << "Moyenne : " << s/size() << std::endl;
}

