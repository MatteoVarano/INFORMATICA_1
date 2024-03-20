#include <iostream>

using namespace std;

struct s_nodo{
    int info;
    struct s_nodo * next;
};
typedef struct s_nodo nodo;
typedef nodo* pNodo;

int main(){

    pNodo p1,p2,p3,p4,p5;

    p1 = new nodo;
    p1 -> info = 1;

    p2 = new nodo;
    p2 -> info = 2;

    p3 = new nodo;
    p3 -> info = 3;

    p4 = new nodo;
    p4 -> info = 4;

    p5 = new nodo;
    p5 -> info = 5;

    p1 -> next = p2;

    p2 -> next = p3;

    p3 -> next = p4;

    p4 -> next = p5;

    p5 -> next = NULL;

    cout<< p1->info <<endl;
    cout<< (p1->next)->info <<endl;
    cout<< (p2->next)->info <<endl;
    cout<< (p3->next)->info <<endl;
    cout<< (p4->next)->info <<endl;

    return 0;
}
