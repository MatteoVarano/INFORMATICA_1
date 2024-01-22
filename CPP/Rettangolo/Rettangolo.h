#ifndef RETTANGOLO_H
#define RETTANGOLO_H

class Rettangolo {
    private:
        double base;
        double altezza;
    public:
        Rettangolo();

        Rettangolo(double b);

        Rettangolo(double b, double a);

        void setbase(double b);

        void setaltezza(double a);

        double getbase();

        double getaltezza();

        double calcarea();

        double calperimetro();
        
        double caldiagonale();
        
        void stampatut();

        void setBaseAltezza(double base=1, double altezza=2){
            this->base=base;
            this->altezza=altezza;
        }
};
#endif