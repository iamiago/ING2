#ifndef POINT2D_H_INCLUDED
#define POINT2D_H_INCLUDED

class Point2D {

private:
    int x;
    int y;

public:
    Point2D();

    Point2D(int abs, int ord);

    void setX(int);
    void setY(int);
    int getX();
    int getY();

    virtual void afficher();

    ~Point2D();

};


#endif // POINT2D_H_INCLUDED
