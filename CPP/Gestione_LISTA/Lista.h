#ifndef LISTA_H
#define LISTA_H

struct s_nodo{
   int info;
   struct s_nodo* next;
}; typedef struct s_nodo nodo;

class Lista{
    private:
        nodo* Testa;   //puntatore al 1° nodo della lista
    public:
        Lista();   //pone a NULL il puntatore alla Lista
        void InsInTesta(int x);     //coincide con pop di pila
        void cancellaTesta();                    //coincide con push di pila    
        void InsInCoda(int x);    //inserimento in coda (diventa ultimo elemento della lista)
        void CancellaCoda(); //cancella ultimo elemento della lista
        void StampaLista();   //scorre tutta la lista stampando su monitor il campo info
        bool IsEmpty(); // restituisce true se è vuota (nessun nodo), false altrimenti
        void InserisciPosizione(int pos, int x);//parametri: posizione del nodo e valore da inserire
        void CancellaPosizione(int pos);//parametro: posizione del nodo da cancellare
};
#endif