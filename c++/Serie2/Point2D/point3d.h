#ifndef POINT3D_H
#define POINT3D_H

class Point3D{

private:
    int x,y,z;

public:
    //Constructeurs & destructeurs
    Point3D();
    Point3D(int x, int y);
    Point3D(int x, int y, int z);
    Point3D(Point3D& autre); //Constructeur par recopie
    ~Point3D();

    //Getteurs & setteurs
    void setx(int a);
    void sety(int b);
    void setz(int c);

    int getx();
    int gety();
    int getz();

    //autres fonctions
    void print() const;

    bool compare(Point3D& autre);




};

#endif
