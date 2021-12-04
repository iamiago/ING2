#ifndef MONDE_H_INCLUDED
#define MONDE_H_INCLUDED
#include <vector.h>
using namespace std;


class Monde{

protected:
    int nbL;
    int nbC;
    vector<vector<bool>> mat;

public:
    Monde(int lignes, int colonnes);
    ~Monde();
    int getNbL();
    int getNbC();
    void metPapierGras(int i, int j);
    void prendPapierGras(int i, int j);
    bool estSale(int i, int j);
    void afficher(int i, int j);



private:

};




#endif // MONDE_H_INCLUDED
