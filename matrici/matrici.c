#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define R 5
#define C 5

int menu();

void caricamatrice(int[][C]);

void caricarandom10a50(int[][C]);

void stampamatrice(int[][C]);

void stampadiagonale(int[][C]);

int main()
{
    int matrice[R][C],risp;
    
    do
    {
        risp=menu();
        switch(risp)
        {
            case 0: printf("\nfine programma\n");
                    break;
            case 1: caricarandom10a50(matrice);
                    break;
            case 2: caricamatrice(matrice);
                    break;
            case 3: stampamatrice(matrice); 
                    break;
            case 4: stampadiagonale(matrice);
                    break;
            default: printf("\nhai inserito il numero sbagliato\n");
        }
    }
    while(risp!=0);

    return 0;
}

int menu()
{
    int risp;
    printf("\n\n\ndigita 0 se vuoi uscire dal programma\n");
    printf("\ndigita 1 se si vuole caricare la matrice con numer da 10 a 50\n ");
    printf("\ndigita 2 per inserire a mano i numeri nella matrice\n");
    printf("\ndigita 3 se si vuole stampare la matrice\n");
    printf("\ndigita 4 se si vuola stampare i numeri in diagonale nella matrice\n\n");
    scanf("%d",&risp);
    return risp;
}


void caricarandom10a50(int matrice[][C])
{
    int i,j;
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        matrice[i][j]=rand() % 41 + 10;
    }
}

void stampamatrice(int matrice[][C])
{
    int i,j;
    printf("\n");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        printf("%d\t", matrice[i][j]);
        printf("\n");
    }
}

void caricamatrice(int matrice[][C])
{
    int i,j;

    printf("\ninserisci i numeri per caricare la matrice\n");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        scanf("%d", &matrice[i][j]);
    }   
}

void stampadiagonale(int matrice[][C])
{
    int i,j;
    printf("\n");
    for(i=0; i<R; i++)
    {
        printf("%d\t", matrice[i][i]);
    }
}