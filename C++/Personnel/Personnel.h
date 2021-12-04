#pragma once
#include <vector>
#include "Employe.h"

class Personnel {
	private :
		std::vector<const Employe *> staff;
	public :
		int size() const {return staff.size();}
		void ajouter(const Employe * e) {staff.push_back(e);}
		bool charger(const std::string & fichier); 
		void calculer();
};
