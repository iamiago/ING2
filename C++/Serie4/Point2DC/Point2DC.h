#ifndef POINT2DC_H_INCLUDED
#define POINT2DC_H_INCLUDED

#include "Point2D.h"

class Point2DC : public virtual Point2D {

private:
    short couleur;

public:
    Point2DC();
    Point2DC(int abs, int ord, short cl);

    void setColor(short a);
    short getColor();

    virtual void afficher();

    ~Point2DC();

};


#endif // POINT2DC_H_INCLUDED
