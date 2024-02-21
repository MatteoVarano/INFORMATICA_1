#include <iostream>
#include "Rettangolo.h"
#include "Quadrilatero.h"

using namespace std;

        Rettangolo::Rettangolo(){
            Rettangolo::Quadrilatero();
        }

        int Rettangolo::area(){
            return base*altezza;
        }