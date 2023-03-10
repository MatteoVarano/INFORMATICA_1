#include<stdio.h>

void numAmici(void);
int sommaDivisori(int);

int main()
{
    numAmici();
}



void numAmici(void)
{
    int n1,n2,r;
    printf("--Funzione Numeri Amici--\n\n");

    for(int i = 1; i<1500; i++)
    {
        n1 = sommaDivisori(i)-i;
        
        for(int j = 1; j<1500; j++)
        {
            n2 = sommaDivisori(j) - j;

            if(n1 == j && n2 == i && i != j && r!= j)
            {
                printf("\n%d e %d sono numeri amici\n", i, j);

                r = i;
            }
            
        }
    }
}

int sommaDivisori(int x)
{
    int r = 0;  //conterrà la somma di tutti i divisori

    //itero tutti i numeri tra 1 e il numero
    for(int i = 1; i<=x; i++)
    {
        if(x%i==0) 
            r += i;    //se l'indice del ciclo è un divisore lo sommo  
    }

    //restituisco il risultato
    return r;
}