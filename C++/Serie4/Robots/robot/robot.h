#ifndef ROBOT
#define ROBOT

#include "monde.h"

class Robot {
	protected :
		int posx, posy;
		//Monde m;
		Monde & m;
	public :
		Robot(int x, int y, Monde & mo);
		void allerEn(int i, int j);
		virtual void parcourir() = 0;
};

#endif

