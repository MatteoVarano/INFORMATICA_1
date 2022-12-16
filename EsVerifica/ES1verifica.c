#include <stdio.h>

int main()
{
    int num1,num2,cont,somma=0;

    printf("inserisci due numeri interi \n");
    scanf("%d \n",&num1);
    scanf("%d",&num2);
    
     for(cont=num1;cont<=num2;cont++)
    {
        printf("\n %d \n",cont);
        somma+=cont;
    }
    printf("la somma e' %d \n",somma);
    return 0;
}