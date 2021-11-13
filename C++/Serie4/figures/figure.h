#ifndef FIGURE_H_INCLUDED
#define FIGURE_H_INCLUDED

class Figure
{
public:
    virtual void afficher() const  =0;
    virtual Figure* copie() const = 0;
    virtual ~Figure(){}
};

#endif // FIGURE_H_INCLUDED
