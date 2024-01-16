#include <iostream>

using namespace std;

class Frazione {
    private:
        int numeratore;
        int denominatore;
    public:
        Frazione(){}
        void setnumeratore(int n){
            numeratore=n;
        }
        void setdenominatore(int d){
            denominatore=d;
        }
        int getnumeratore(){ 
            return numeratore;
        }
        int getdenominatore(){
            return denominatore;
        }
        void stampa(){
            cout<< numeratore << "/" << denominatore << endl;
        }
        void semplifica(){}
        int MCD(int n,int d,){}
        
};

int main(){
    Frazione f1;
    int n,d;
    cout<<"inserisci il numeratore e il denominatore"<<endl;
    cin>>n;
    cin>>d;
    f1.setnumeratore(n);
    f1.setdenominatore(d);
    f1.stampa();
    f1.semplifica();
}