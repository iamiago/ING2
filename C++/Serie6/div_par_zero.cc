#include <string> // pour le message d'erreur

// ... cf exercice 40

Rationnel division(Rationnel r1, Rationnel r2) throw(string);
// ...
int main()
{
    Rationnel r1 = { 1, 2 };     // r1=1/2
    Rationnel zero = { 0, 1 };   // zero= 0/1
    try {
        division(r1, zero);
    }
    catch (string& erreur) {
        cerr << erreur << endl;
        cout << "pas défini" << endl;
    }
    return 0;
}

// ...

/* =========================================================== */

Rationnel division(Rationnel r1, Rationnel r2) throw(string) 
{
    Rationnel rez;
    if (r2.p < 0) {
        rez.p = (-r1.p) * r2.q;
        rez.q = (-r2.p) * r1.q;
    } else if (r2.p > 0) {
        rez.p = r1.p * r2.q;
        rez.q = r2.p * r1.q;
    }
    else {throw string("Erreur: division par zéro.");}
    reduction(rez);
    return rez;
}
