#ifndef ELLIPSE_H_INCLUDED
#define ELLIPSE_H_INCLUDED

class Ellipse{

public:
    Ellipse();
    Ellipse(float x, float y,float a, float b);
    Ellipse(const Ellipse & e);
    ~Ellipse();

protected:
    float m_cX, m_cY;
    float m_a, m_b;


public:
    void deplacer(float dx, float dy);
    void zoom(float z);
    float surface();
    virtual void afficher(); //autorise la redéfinition de la fonction dans les classes dérivés

};

#endif // ELLIPSE_H_INCLUDED
