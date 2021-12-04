#include "finance.h"
#include <iostream>
using namespace std;
Finance::Finance(double cap, double r):capital(cap), rate(r){}

void Finance::calculateCapital(int years){
    int cap=0;
    cap=capital;
    for(int i =0; i<years; ++i){
        cap+=cap*rate;
    }

    cout <<"Au bout de " << years << "ans le capital sera de : " << cap <<"€"<< endl;

}
void Finance::calulateNbYears(int cap){
    int years=0;
    int fakecap=capital;
    while(fakecap <= cap){
        years++;
        fakecap+=fakecap*rate;
    }
    cout << "Il faut " << years << "ans pour atteindre le capital " << fakecap <<"€"<< endl;
}
