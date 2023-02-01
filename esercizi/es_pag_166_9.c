#include<stdio.h>

int main()
{
    int num,cont=0,ris;
    printf("inserisci un numero\n");

    while(num%2==0)
    {
        scanf("%d",&num);
        if(num%2==0)
        {
            cont++;
        }
        else 
        {
            printf("i numeri pari sono %d\n",cont);
        }
    }   
    return 0;
}