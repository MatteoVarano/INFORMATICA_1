#include <iostream>
#include "Rettangolo.h"
#include "Quadrato.h"

using namespace std;

        Quadrato::Quadrato(){
            Quadrato::Quadrilatero();
        }

        int Quadrato::area(){
            return base*base;
        }
