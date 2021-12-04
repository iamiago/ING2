#include <string>
#include <iostream>

using namespace std;

class Equipe {
public:
Equipe(string pnom, int p, int m,int b){
nom = pnom;
points=p;
marques=m;
encaisses=b;
}
  string nom;
  int points;
  int marques;
  int encaisses;
};
/********************/
class Match {
public:
Match(int p, int d){
prems=p;
deuz=d;
}
  int prems;
  int deuz;
};

/**************************/
void swap(Equipe&, Equipe&);
bool meilleure(const Equipe&, const Equipe&);
/***********************/

int main()
{
  const int nb_matchs(6);//const int nb_matchs=6;
  Match matchs[nb_matchs] =
    {
      {3,1}, // Suisse - Croatie
      {2,0}, // France - Angleterre
      {3,0}, // Suisse - Angleterre
      {2,1}, // France - Croatie
      {0,1}, // Angleterre - Croatie
      {3,2}  // Suisse - France
    };

  const int nb_equipes(4);//const int nb_equipes =4;

  Equipe groupe2[nb_equipes] =
    {
      { "Angleterre" , 0, 0, 0 }, // equipe 0
      { "Croatie"    , 0, 0, 0 }, // equipe 1
      { "France"     , 0, 0, 0 }, // equipe 2
      { "Suisse"     , 0, 0, 0 }, // equipe 3
    };

  // saisie des matchs
  for (int i(0); i < nb_matchs; ++i) {
    cout << groupe2[matchs[i].prems].nom << " - "
         << groupe2[matchs[i].deuz ].nom << " ? ";
    int score[2];
    cin >> score[0];
    cin >> score[1];

    // mise à jour des buts marqués/encaissés
    groupe2[matchs[i].prems].marques   += score[0];
    groupe2[matchs[i].prems].encaisses += score[1];
    groupe2[matchs[i].deuz ].marques   += score[1];
    groupe2[matchs[i].deuz ].encaisses += score[0];

    // affectation des points
    if (score[0] > score[1])
      { groupe2[matchs[i].prems].points += 3; } // 1er gagne
    else if (score[0] < score[1])
      { groupe2[matchs[i].deuz ].points += 3; } // 2e gagne
    else {
      groupe2[matchs[i].prems].points += 1;     // match
      groupe2[matchs[i].deuz ].points += 1;     //   nul
    }
  }

  // affichage des résultats
  cout << endl << "Résultats : " << endl;
  for (int i(0); i < nb_equipes; ++i) {
    cout << "  " << groupe2[i].nom << " : "
         << groupe2[i].points << " points, "
         << groupe2[i].marques << " buts marqués, "
         << groupe2[i].encaisses << " buts encaissés, "
         << "différence : "
         << groupe2[i].marques - groupe2[i].encaisses
         << endl;
  }

  // classement
  for (int i(0); i < nb_equipes-1; ++i)
    for (int j(nb_equipes-1); j > i; --j)
      if (meilleure(groupe2[j], groupe2[j-1]))
        swap(groupe2[j-1], groupe2[j]);

  // affichage du classement
  cout << endl << "Le classement final est : " << endl;
  for (int i(0); i < nb_equipes; ++i)
    cout << "  " << i+1 << " : " << groupe2[i].nom << endl;

  return 0;

}

bool meilleure(const Equipe& eq1, const Equipe& eq2)
{
  if (eq1.points > eq2.points) return true;
  else if (eq1.points < eq2.points) return false;

  if (eq1.marques - eq1.encaisses > eq2.marques - eq2.encaisses)
    return true;
  else if (eq2.marques - eq2.encaisses > eq1.marques - eq1.encaisses)
    return false;

  if (eq1.marques > eq2.marques) return true;
  else if (eq2.marques > eq1.marques) return false;

  return true; // decision arbitraire
}

void swap(Equipe& eq1, Equipe& eq2)
{
  const Equipe eq(eq1);
  eq1 = eq2;
  eq2 = eq;
}
