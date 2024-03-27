#include <iostream>
#include "Pila.h"

using namespace std;

Pila::Pila(int size){
    vet = new int[size];
    this->size = size;
    fine = 0;
}

bool Pila::isFull(){
    if(fine==size){
        return true;
    }
    return false;
}

bool Pila::isEmpty(){
    if(fine == 0){
        return true;
    }
    return false;
}

bool Pila::Push(int a){
    if(!isFull()){
        vet[fine] = a;
        fine++;
        return true;
    }
    return false;
}

bool Pila::Pop(){
    if(!isEmpty()){
        fine--;
        return true;
    }
    return false;
}

int Pila::Top(){
    if(!isEmpty()){
        return vet[fine-1];
    }
    return 0;
}

void Pila::Stampa(){
    for(int i=0;i<size;i++){
        cout<<vet[i]<<endl;
    }
}