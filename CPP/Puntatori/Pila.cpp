#include <iostream>
#include "Pila.h"

using namespace std;

    Pila::Pila(){
        size = 10;
        vet = new int[size];
    }

    Pila::Pila(int size){
        this->size = size;
        vet = new int[size];
    }

    bool Pila::isEmpy(){
        if(fine==0){
            return true;
        }
        else{
            return false;
        }

    }

    bool Pila::isFull(){
        if(fine==size){
            return true;
        }
        else{
            return false;
        }
    }

    bool Pila::push(int x){
        if(!isFull())
        {
            vet[fine]=x;
            fine++;
        }
        return true;
    }

    bool Pila::pop(){
        if(!isEmpy())
        {
            fine--;
            return true;
        }
        return false;

    }

    int Pila::top(){
        return vet[fine];
    }

    void Pila::stampa(){
        for(int i=0;i<size;i++)
        {
            cout<<vet[i]<<endl;
        }
    }

