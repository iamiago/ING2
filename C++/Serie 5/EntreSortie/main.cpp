#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

void ecriture()
{
string nom, tel;
    ofstream fichrep("repertoire.txt");
    for(int i=0; i<2; ++i){
        cout << "\npersonne" << i+1 << "\n";
        cout << "nom ? ";
        cin >> nom;
        fichrep << nom << " ";
        cout << "\ntelephone? ";
        cin >> tel;
        fichrep << tel << "\n";
    }

    fichrep.close();
}

void lecture()
{
string nom, tel;
ifstream ficrep("repertoire.txt");// ouverture du fichier en lecture
    ficrep >> nom >> tel;
    while(!ficrep.eof()){
        cout << nom << "\t"<< tel << "\n";//on affiche les infos
        ficrep >> nom >> tel;// on lit les info suivantes
    }
    ficrep.close();
}

//    ofstream ofs("test.txt", ios::out);
//    ofs << 3 << endl;
//    ofs << 4 << endl;
//    ofs.close();
//
//    ifstream ifs("test.txt");
//    if (ifs){
//        int n;
//        while(!ifs.eof()){
//            ifs >> n;
//            if(!ifs.fail()){
//                cout << n;
//            }
//        }
//        ifs.close();
//    }else{
//        cerr << "Impossible d'ouvrir le fichier" << endl;
//    }
//

int main()
{


    //ecriture();
   // lecture();



    return 0;
}
