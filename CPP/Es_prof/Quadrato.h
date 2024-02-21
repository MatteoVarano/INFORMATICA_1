#ifndef QUADRATO_H
#define QUADRATO_H

#include "Quadrilatero.h"
#include "Rettangolo.h"

class Quadrato : public Rettangolo{
    public:

        Quadrato();

        int area();
};
#endif