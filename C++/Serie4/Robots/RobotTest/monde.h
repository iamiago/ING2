#ifndef MONDE_H
#define MONDE_H

#include <vector>
using namespace std;
class Monde
{
    public:
        Monde(int lignes, int colonnes);
        void afficherMatrice();
        void metPapierGras(int i, int j);
        void prendPapierGras(int i, int j);
        bool estSale(int i, int j);
        int nbPapiersGras();
        int getnbL();
        int getnbC();


    protected:
        int nbL;
        int nbC;
        vector<vector<bool>> mat;

    private:
};

#endif // MONDE_H
