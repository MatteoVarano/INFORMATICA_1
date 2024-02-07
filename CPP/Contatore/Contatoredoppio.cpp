#include <iostream>
#include "Contatore.h"
#include "Contatoredoppio.h"
        
        Contatoredoppio::Contatoredoppio(){
            Contatoredoppio::Contatore ();
        }

        void Contatoredoppio::inc(){
            Contatore::inc();
            Contatore::inc();
        }
