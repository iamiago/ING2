#ifndef POLLUEURSAUTEUR
#define POLLUEURSAUTEUR

#include "robotPollueur.h"

class PollueurSauteur : public RobotPollueur {
	protected :
		int delta;
	public :
		PollueurSauteur(int y, Monde & mo, int d);
		void parcourir();
};

#endif
