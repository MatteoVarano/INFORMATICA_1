#include <iostream>
#include "pila.h"

using namespace std;

void pila::push(int dato){
    t = new nodo;
    t -> dato = dato;
    t -> next = primo;
    primo = t;
}

void pila::pop(){
   if(primo->next != NULL)
    {
        t  = primo;
        primo = primo -> next;
        delete t;
    }
}

int pila::top(){
    return primo -> dato;
}

void pila::stampa(){
    t = primo;
    while (t!= NULL) {
        cout << t->dato << endl;
        t = t->next;
    }
}