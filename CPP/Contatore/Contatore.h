#ifndef CONTATORE_H
#define CONTATORE_H

class Contatore{
    private:
        int valore;
        int passo;
    public:
        Contatore();

        Contatore(int valore);

        Contatore(int valore, int passo);

        ~Contatore();

        int getValore();

        void setValore(int valore);

        int getPasso();

        void setPasso(int passo);
        
        void reset();    //pone valore a zero

        void inc();       //incrementa l'attributo valore di tante unità quanto indicato nell'attributo passo

        void dec();      //decrementa l'attributo valore di tante unità quanto indicato nell'attributo passo

        void stampa();  //stampa il valore dei due attributi privati

        class Contatoredoppio{};

};
#endif