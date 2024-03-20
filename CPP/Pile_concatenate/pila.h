#ifndef PILA_H
#define PILA_H
#include <iostream>

struct nodo {
    int dato;
    nodo *next;
}typedef nodo;

class pila{
    private:
        nodo *primo;
        nodo *t;
    
    public:
        pila(int dato = 0)
        {
            primo = new nodo;
            primo -> dato = dato;
            primo -> next = NULL;
        }

        void push(int);
        void pop();
        int top();
        void stampa();
};
#endif