#include <iostream>
#include <math.h>

using namespace std;

class Rettangolo {
    private:
        double base;
        double altezza;
    public:
        Rettangolo(){
            base=1;
            altezza=1;
        }

        Rettangolo(double b, double a){
            base=b;
            altezza=a;
        }

        void setbase(double b){
            base=b;
        }

        void setaltezza(double a){
            altezza=a;
        }

        double getbase(){
            return base;
        }

        double getaltezza(){
            return altezza;
        }

        double calcarea(){
            return base*altezza;
        }

        double calperimetro(){
            return (base+altezza)*2;
        }

        double caldiagonale(){
            return sqrt(base*base+altezza*altezza);
        }

        void stampatut(){
            cout<<"base:"<<base<<endl;
            cout<<"altezza:"<<altezza<<endl;
            cout<<"area:"<<calcarea()<<endl;
            cout<<"perimetro:"<<calperimetro()<<endl;
            cout<<"diagonale:"<<caldiagonale()<<endl;
            cout<<endl;
        }
};

Rettangolo R1;
Rettangolo R2(3,5);

int main(){
    R1.setbase(5);
    R1.setaltezza(7);

    R1.stampatut();

    R2.stampatut();

    
}