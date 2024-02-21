#ifndef QUADRILATERO_H
#define QUADRILATERO_H

class Quadrilatero{
    public:
        int base;
        int altezza;

        Quadrilatero();

        int perimetro();

        int getlato();

        int getaltezza();

        void setlato(int base);

        void setaltezza(int altezza);

        void stampa();
    
};
#endif
