#include <iostream>
#include <string>

using namespace std;
/**fonction qui traite les division par 0**/
int division(int a, int b)
{
    if(b==0)
        throw string("ERREUR: division par 0");
    else
        return a/b;
//    try
//    {
//        if(b==0) throw string("Division par 0");
//        else return a/b;
//    }
//    catch(string const& erreur) // erreur est une instance crée à la volée de la classe string avec son constructeur
//    {
//        cerr << erreur << endl;
//    }
//    }catch(const std::exception & e){
//        cout << e.what() ;
//    }
}
/**test de la fonction qui gre les division par 0**/
void blockTryCatch(){
cout << "Bienvenue dans le programme d'écriture et lecture" << endl;

    cout << "Entrez un numerateur :";
    int num;
    cin >>num;
    cout << "Entre un denominateur :";
    int denom;
    cin >>denom;

    try{
        cout << "Division de a = "<< num << " par b = " << denom << " = " << division(num,denom) << endl;
    }
    catch(string const& err){
        cerr << err << endl;
    }

}
int saisirInt()
{
    int a;
    int cpt = 0;
    while(1 && cpt <3){
        try{
            cout << "Entrer un entier compris entre 1 et 10: ";
            cin >> a;
            if(a<1 || a>10) throw(10);
            return a;
        }catch(int a){
            cpt++;
            cout << "Erreur de saisie, essaies restant: "<< 3-cpt << endl;
        }
    }
}

class Essai{
    public:
        class Erreur{
            public:
                Erreur(int n=0):_val(n){}
                int get_val() { return _val;}
            private:
                int _val;
        };
    Essai(){cout << "Constructeur d'Essai" << endl;}
    ~Essai(){ cout << "Destructeur d'Essai" << endl;}
    void f1()
    {
        throw Erreur(10);
    }
};

void testClasseEssai(){
    try
    {
        Essai e1;
        e1.f1();
        cout << "Test test test" << endl;
    }
    catch (Essai::Erreur e){
        cout << "Erreur de numéro: " << e.get_val() << endl;
    }
}

class erreur{

    public:
    public:
        int cause;
        erreur(int c):cause(c){}
        erreur(const erreur & tmp):cause(tmp.cause){}
};

class other{};

void testerreur(){
    int i;
    cout << "Tapez 0 pour une erreur d'exception et 1 pour une erreur de type int: ";
    cin >>i;

    try
    {
        switch(i)
        {
            case 0:
            {
                erreur a(0);
                throw a;
            }
            case 1:
            {
                int a = 1;
                throw (a);
            }
            default:
            {
                other c;
                throw (c);
            }
        }

    }
    catch(erreur & tmp)
    {
        cout << "Erreur erreur! (cause"<<tmp.cause<<")"<<endl;

    }
    catch(int tmp)
    {
        cout << "Erreur int! (cause"<<tmp<<")"<<endl;
    }
    catch(...)
    {
        cout << "Exception inattendue" << endl;
    }

}
//virtual -> on doit implementer le destructeur ou la methode en question

void testClasseErreur()
{
    int a,b;
    cout << "Valeur pour a: ";
    cin >> a;
    cout << "Valeur de b: ";
    cin >> b;
    try{
        cout << division(a,b);

    }catch(Erreur const& e){
        cerr << "ERREUR: "<< e.what() << endl;
        cerr << "ERREUR niveau: "<< e.getNiveau() << endl;
        cer << "ERREUR numero: "<<e.getNumero() << endl;
    }
}
int main()
{
    cout << "Bienvenue dans le programme des exceptions!" << endl;

    //blockTryCatch();

//    int a;
//    a=saisirInt();
//    cout << "Valeur saisie: "<<a;

//    testClasseEssai();
//    testerreur();


    return 0;
}
