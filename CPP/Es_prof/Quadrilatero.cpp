#include <iostream>
#include "Quadrilatero.h"

using namespace std;

        Quadrilatero::Quadrilatero(){
            base=1;
            altezza=1;
        }

        int Quadrilatero::perimetro(){
            return (base+altezza)*2;
        }

        int Quadrilatero::getlato(){
            return base;
        }

        int Quadrilatero::getaltezza(){
            return altezza;
        }

        void Quadrilatero::setlato(int base){
            this->base=base;
        }

        void Quadrilatero::setaltezza(int altezza){
            this->altezza=altezza;
        }

        void Quadrilatero::stampa(){
            cout<<"base: "<<base<<endl;
            cout<<"altezza: "<<altezza<<endl;
        }
