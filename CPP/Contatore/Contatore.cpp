#include <iostream>
#include "Contatore.h"

using namespace std;


        Contatore::Contatore(){
            valore=0;
            passo=1;

        }

        Contatore::Contatore(int valore){
            this->valore=valore;
            passo=1;
        }

        Contatore::Contatore(int valore, int passo){
            this->valore=valore;
            this->passo=passo;
        }

        Contatore::~Contatore(){}

        int Contatore::getValore(){
            return valore;
        }

        void Contatore::setValore(int valore){
            this->valore=valore;
        }

        int Contatore::getPasso(){
            return passo;
        }

        void Contatore::setPasso(int passo){
            this->passo=passo;
        }
        
        void Contatore::reset(){
            valore=0;
            passo=0;
        }    //pone valore a zero

        void Contatore::inc(){
            for(int i=0;i<passo;i++){
                valore++;
            }
        }

        void Contatore::dec(){
            for(int i=0;i<passo;i++){
                valore--;
            }
        }      //decrementa l'attributo valore di tante unità quanto indicato nell'attributo passo

        void Contatore::stampa(){
            cout<<endl;
            cout<<"valore: "<<valore<<endl;
            cout<<"passo: "<<passo<<endl;
            cout<<endl;
        } //stampa il valore dei due attributi privati

