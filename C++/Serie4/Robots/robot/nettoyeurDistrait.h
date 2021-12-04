#ifndef NETTOYEURDISTRAIT
#define NETTOYEURDISTRAIT

#include "robotNettoyeur.h"

class NettoyeurDistrait : public RobotNettoyeur {
	public :
		NettoyeurDistrait(Monde & mo);
		void parcourir();
};

#endif
