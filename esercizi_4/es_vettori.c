#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

#define N 100

int menu();
void carica(int v [],int x);
void stampavettore(int v[]);
void nuovoinserisci(int v[],int x);
int conta(int v [],int x);
int massimo(int v []);
void inserire(int v1 [], int v2[]);
void stampa(int v1 [],int v2 []);

int main()
{
    int v [N],v2 [N],r,x,n=0;
        do
    {
        r=menu();
        switch(r)
        {
            case 0: printf("Fine programma");
                    break;
            case 1: printf("\niserisci un numnero\n");
                    scanf("%d",&x);
                    if(x%2!=0)
                    {
                        x++;
                    }
                    carica(v,x);
                    break;
            case 2: stampavettore(v);
                    break;
            case 3: printf("inserisci un numero \n");
                    scanf("%d",&x);
                    nuovoinserisci(v,x);
            case 4: printf("inserisci un numero\n");
                    scanf("%d",&x);
                    n=conta(v,x);
                    printf("\n%d",n);
            case 5: n=massimo(v);
                    printf("il numero piu' grande si trova in indice %d",n);
                    break;
        }
    }
    while(r!=0);
    
}

int menu()
{
    int risp;
    printf("\n\n\ndigita 0 se vuoi uscire dal programma\n");
    printf("digita 1 per caricare il vettore\n");
    printf("digita 2 per stampare il vettore\n");
    printf("digita 3 per inserire il doppio il triplo ecc...\n");
    printf("digita 4 per cotare gli elementi di indice pari \n");
    printf("digita 5 per trovare il numero nell'indice piu' grande\n");
    printf("");
    scanf("%d",&risp);
    return risp;

}

void carica(int v[],int x )
{
    int i;
    for (i=0;i<N;i++)
    {
        v[i]=x;
        x=x+2;
    }
}

void stampavettore(int v[])
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("%d\t",v[i]);
    }
}

void nuovoinserisci(int v[],int x)
{
    int i,r=2;
    for(i=0;i<N;i++)
    {
        v[i]=x;
        x=x*r;
        r++;
    }
}

int conta(int v[],int x)
{
   int i,cont=0;
   for(i=0;i<N;i+=2)
   {
        if(v[i]>x)
        {
            printf("%d\t",i);
            cont++;
        }
   }
    return cont;
}

int massimo(int v[])
{
    int i,cont=0;
    for(i=0;i<N;i++)
    {
        if(v[i]<v[i+1])
        {
            cont++;
        }
    }
    return cont;

}