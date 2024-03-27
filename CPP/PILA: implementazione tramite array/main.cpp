#include <iostream>
#include "Pila.h"

using namespace std;

int main(){

    Pila p1(5);

    p1.Push(1);
    p1.Push(2);
    p1.Push(3);
    p1.Push(4);
    p1.Push(5);

    p1.Pop();

    p1.Push(69);

    p1.Stampa();

    int a = p1.Top();
    cout<<"Primo numero: "<< a <<endl;

    return 0;

}