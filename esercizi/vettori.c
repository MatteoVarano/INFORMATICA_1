#include <stdio.h>
#define N 10

int main()
{
    int i,cont,ris=0;
    int vettore[N];

    for(i=0;i<N;i++)
    {
        printf("inserisci 10 numeri: ");
        scanf("%d",&vettore[i]);
    }

    for(cont=0;cont<N;cont++)
    {
        printf("%d \t",vettore[cont]);
    }
    
    for(cont=0;cont<N;cont++)
    {
        ris=ris+vettore[cont];
        printf("%d",ris);
    }
    
    return 0;
}