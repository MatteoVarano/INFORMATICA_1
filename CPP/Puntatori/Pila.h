#ifndef PILA_H
#define PILA_H

class Pila {
    private:
        int *vet;
        int size;
        int fine=0;
    public:
        Pila();
        Pila(int);
        bool isEmpy();
        bool isFull();
        bool push(int);
        bool pop();
        int top();
        void stampa();
};
#endif