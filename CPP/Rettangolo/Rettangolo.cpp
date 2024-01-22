#include <iostream>
#include <math.h>
#include "Rettangolo.h"

using namespace std;


        Rettangolo::Rettangolo(){
            base=1;
            altezza=1;
        }

        Rettangolo::Rettangolo(double b){
            base=b;
            altezza=b;
        }

        Rettangolo::Rettangolo(double b, double a){
            base=b;
            altezza=a;
        }

        void Rettangolo::setbase(double b){
            base=b;
        }

        void Rettangolo::setaltezza(double a){
            altezza=a;
        }

        double Rettangolo::getbase(){
            return base;
        }

        double Rettangolo::getaltezza(){
            return altezza;
        }

        double Rettangolo::calcarea(){
            return base*altezza;
        }

        double Rettangolo::calperimetro(){
            return (base+altezza)*2;
        }

        double Rettangolo::caldiagonale(){
            return sqrt(base*base+altezza*altezza);
        }

        void Rettangolo::stampatut(){
            cout<<"base:"<<base<<endl;
            cout<<"altezza:"<<altezza<<endl;
            cout<<"area:"<<calcarea()<<endl;
            cout<<"perimetro:"<<calperimetro()<<endl;
            cout<<"diagonale:"<<caldiagonale()<<endl;
            cout<<endl;
        }
