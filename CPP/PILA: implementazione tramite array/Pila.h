#ifndef PILA_H
#define PILA_H

class Pila{

    private:
        int *vet;
        int size;
        int fine;
    
    public:
        Pila(int);
        bool isFull();
        bool isEmpty();
        bool Push(int);
        bool Pop();
        int Top();
        void Stampa();


};
#endif