#include <iostream>
#include "pila.h"

using namespace std;

int main(){
    pila p1;

    p1.push(1);
    p1.push(2);
    p1.push(3);
    p1.pop();
    p1.push(4);
    p1.push(5);
    p1.push(6);
    p1.stampa();
}