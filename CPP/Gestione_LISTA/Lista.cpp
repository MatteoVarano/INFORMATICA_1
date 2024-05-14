#include <iostream>
#include "Lista.h"

using namespace std;

Lista::Lista(){
    this->Testa = NULL;
}

void Lista::InsInTesta(int x){
    nodo *p = new nodo;
    p->info = x;
    p->next = Testa;
    Testa = p;
}

void Lista::cancellaTesta(){
    nodo *c;
    if(Testa != NULL)
     {
        c = Testa;
        Testa = Testa->next;
        delete c;
     }
}

void Lista::StampaLista(){
    nodo *c = Testa;

    while(c != NULL){
        cout<< c->info << endl;
        c=c->next;
    }

    cout<<endl;
}

void Lista::InsInCoda(int x){
    nodo *p = Testa;
    while(p->next != NULL){
        p=p->next;
    }
    nodo *t = new nodo;
    t->info = x;
    t->next = NULL;
    p->next = t;
}

void Lista::CancellaCoda(){
    nodo *p = Testa;
    if(!IsEmpty()){
        while(p->next != NULL){
            p=p->next;
        }
    }
    nodo *t = p->next;
    delete t;
    
}

bool Lista::IsEmpty(){
    if(Testa == NULL)
    {
        return true;
    }
    return false;
}