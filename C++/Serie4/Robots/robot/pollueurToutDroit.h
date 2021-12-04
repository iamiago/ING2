#ifndef POLLUEURTOUTDROIT
#define POLLUEURTOUTDROIT

#include "robotPollueur.h"

class PollueurToutDroit : public RobotPollueur {
	protected :
		int colDepart;
	public :
		PollueurToutDroit(int y, Monde & mo);
		void parcourir();
};

#endif
