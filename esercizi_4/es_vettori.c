#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

#define N 100

int menu();
void carica(int v [],int x);
/*si inseriscano nell'array i primi N numeri pari maggiori di x. Il 2° parametro sia 
chiesto all'utente nel main: N.B. se l'utente inserisce un numero dispari si faccia nel main quanto necessario
per passare il numero pari successivo*/
void caricaRand(int v[]);
/*carica randomicamente il vettore*/
void caricaRand2(int v2[]);
/*carica randomicamente il secondo vettore*/
void stampavettore(int v[]);
/*stamèa il preimo vettore vettore*/
void stampavettore2(int v2[]);
/*stampa il secondo vettore*/
void nuovoinserisci(int v[],int x);
/*si inserisca il parametro x come primo elemento dell'array. Il secondo
elemento dell'array sia il doppio del primo, il terzo elemento sia il triplo del secondo, il quarto sia il quadruplo
del terzo e così via.*/
int conta(int v [],int x);
/*visualizza e conta gli elementi di indice pari maggiori di un intero x passato come
parametro; la funzione restituisce quanti sono i numeri maggiori di x. Il 2° parametro sia chiesto
all'utente nel main.*/
int massimo(int v []);
/*Cerca il massimo fra gli elementi dell’array restituendo l'indice dell'elemento
massimo.*/
void inserire(int v1 [], int v2[]);
/*Inserire nel secondo array il doppio dei corrispondenti elementi del primo
array ma in ordine inverso rispetto al primo array.*/
void stampa(int v1 [],int v2 []);
/*Si stampi sul monitor l'intero presente nella posizione zero del 1° array
tante volte quanto indicato dall'intero in posizione zero del 2° array, e così via per tutti gli elementi del'array*/

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
            case 2: caricaRand(v);
                    break;
            case 3: caricaRand2(v2);
                    break;
            case 4: stampavettore(v);
                    break;
            case 5: stampavettore2(v2);
                    break;
            case 6: printf("inserisci un numero \n");
                    scanf("%d",&x);
                    nuovoinserisci(v,x);
            case 7: printf("inserisci un numero\n");
                    scanf("%d",&x);
                    n=conta(v,x);
                    printf("\n%d",n);
            case 8: n=massimo(v);
                    printf("il numero piu' grande si trova in indice %d",n);
                    break;
            case 9: inserire(v,v2);
                    break;
            case 10: stampa(v,v2);
                    break;
            default: printf("hai inserito un numro spagliato");
        }
    }
    while(r!=0);
    
}

int menu()
{
    int risp;
    printf("\n\n\ndigita 0 se vuoi uscire dal programma\n");
    printf("digita 1 per caricare il vettore\n");
    printf("digita 2 per caricare il vettore randomicamente\n");
    printf("digita 3 per caricare il secondo vettore randomicamente\n");
    printf("digita 4 per stampare il vettore\n");
    printf("digita 5 per stampare il secondo vettore\n");
    printf("digita 6 per inserire il doppio il triplo ecc...\n");
    printf("digita 7 per cotare gli elementi di indice pari \n");
    printf("digita 8 per trovare il numero nell'indice piu' grande\n");
    printf("digita 9 per scambiare e raddoppiare l'ordine del vettore\n");
    printf("digita 10 per stamapre i numeri del vettore\n");
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

void caricaRand (int v[])
{
    for (int i = 0; i<N; i++)
    {
        v[i] = rand() % 50 + 1;
    }
}

void caricaRand2 (int v2[])
{
    for (int i = 0; i<N; i++)
    {
        v2[i] = rand() % 50 + 1;
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

void stampavettore2(int v2[])
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("%d\t",v2[i]);
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

void inserire(int v1 [], int v2 [])
{
    int i;
     for (i = 0; i<N; i++) 
        v2[N-1-i] = v1[i] * 2;
}

void stampa(int v1[], int v2[]) 
{
    int i,j;
    for (i = 0; i<N; i++)
    {
        for(j = 0; i<v2[i]; j++)
        {
            printf("%d ", v1[j]);
        }
        printf("\n");
    }
}