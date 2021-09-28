#include "permuter.h"


void Permuter::permuterClassique(int a, int b)
{   // Ne marche pas
    int tmp =a;
    a=b;
    b=tmp;
}

void Permuter::permuterReference(int& a, int& b)
{
    int tmp = a;
    a=b;
    b=tmp;
}

void Permuter::permuterPointeur(int* a, int* b)
{
    int tmp;

    tmp= *a;
    *a=*b;
    *b=tmp;
}
