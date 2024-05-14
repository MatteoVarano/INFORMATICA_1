#include <iostream>
#include "Lista.h"

using namespace std;

int main(){
    Lista l;

    l.InsInTesta(1);
    l.InsInTesta(1);
    l.InsInTesta(1);
    l.InsInTesta(1);
    l.InsInTesta(1);
    l.InsInCoda(69);

    l.StampaLista();

    l.CancellaCoda();
    l.InsInCoda(777);

    l.StampaLista();

}