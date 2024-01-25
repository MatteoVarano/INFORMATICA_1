#include <iostream>
#include "Contatore.h"

using namespace std;

Contatore C1;

Contatore C2(3);

Contatore C3(5,3);

int main(){

    int valore,passo;

    cout<<"**primo contatore**"<<endl;
    C1.stampa();
    cout<<"inserisci valore"<<endl;
    cin>>valore;
    C1.setValore(valore);
    cout<<"inserisci passo"<<endl;
    cin>>passo;
    C1.setPasso(passo);
    C1.stampa();


    cout<<"**sencondo ccontatore**"<<endl;
    C2.stampa();
    C2.inc();
    cout<<"valore di Valore incrementato del valore di Passo"<<endl;
    C2.stampa();

    cout<<"**terzo contatore**"<<endl;
    C3.stampa();
    C3.dec();
    cout<<"valore di Valore decrementato del valore di Passo"<<endl;
    C3.stampa();
}