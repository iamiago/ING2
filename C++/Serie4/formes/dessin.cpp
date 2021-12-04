#include "dessin.h"

  // op�rateur d'affectation faisant une copie profonde
  Dessin& Dessin :: operator=(const Dessin& autre) {
    if (this != &autre) {
      libere();              // libere la m�moire actuellement utilis�e
      clear();               // vide le vector
      copie_profonde(autre); // copie en faisant une nouvelle allocation
    }
    return *this;
  }

  void Dessin :: ajouteFigure(const Figure& fig) {
      push_back(fig.copie());
  }

  void Dessin :: affiche() const {
    cout << "Je contiens :" << endl;
    for (unsigned int i(0); i < size(); ++i) (*this)[i]->affiche();
  }

  // m�thode (priv�e) servant au constructeur de copie et � l'operator=
  void Dessin :: copie_profonde(const Dessin& autre) {
    for (unsigned int i(0); i < autre.size(); ++i)
      push_back(autre[i]->copie());
  }
  // m�thode (priv�e) servant au destructeur et � l'operator=
  void Dessin :: libere() {
    for (unsigned int i(0); i < size(); ++i) delete (*this)[i];
  }
