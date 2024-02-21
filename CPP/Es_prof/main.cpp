#include <iostream>
#include "Quadrilatero.h"
#include "Rettangolo.h"
#include "Quadrato.h"

using namespace std;

int main(){
    Quadrilatero q;
    Rettangolo r;
    Quadrato q1;

    q.base=10;

    r.base=20;

    q1.altezza=50;

    q.stampa();

    cout<<"\n"<<endl;

    r.stampa();

    cout<<"\n"<<endl;
    
    q.stampa();



}