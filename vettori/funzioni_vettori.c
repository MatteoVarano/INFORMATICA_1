#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define N 10

int menu();

int caricavettore(int v[]);

void caricarandom(int v[]);

void stampavettori(int v[]);

void ordinavettore1(int v[]);

void scambiavetore(int v[]);

void bubblesort(int v[]);

int contamutipli(int v[],int);

int ricercabinaria(int v[],int);

int main()
{
    int v[N];
    int cont=0,i,r,m;

        do
    {
        r=menu();
        switch(r)
        {
            case 0: printf("Fine programma \n");
                    break;
            case 1: r=caricavettore(v);
                    break;
            case 2: caricarandom(v);
                    break;
            case 3: printf("\ni numeri nel vettore sono\t");
                    stampavettori(v);
                    break;
            case 4: printf("\nil vettore è stato ordinato\t");
                    ordinavettore1(v);
                    break;
            case 5: printf("\n il vettore è stato ordinato");
                    bubblesort(v);
                    break;
            case 6: printf("il vettore è stato cambiato");
                    scambiavetore(v);
                    break;
            case 7: printf("inserisci un numero: ");
                    scanf("%d",&r);
                    r=contamutipli(v,r);
                    printf("multipli nel vettore %d\n",r);
                    break;
            case 8: printf("inserisci un numero da cercare nel vettore: ");
                    scanf("%d",&m);
                    r=ricercabinaria(v,m);
                    printf("%d\n",r);
                    break;                         
            default: printf("hai inserito un numero sbagliato\n");                           
        }
    }
    while(r!=0);

    return 0;
}


int menu()
{
    int risp;
    printf("\n\n\ndigita 0 se vuoi uscire dal programma\n\n");
    printf("digita 1 per inserire i numeri da tastiera\n");
    printf("digita 2 per caricare numeri randomici\n\n");
    printf("digita 3 per stampare il vettore\n");
    printf("digita 4 per ordinare il vettore\n");
    printf("digita 5 per ordinare il vettore in un altro modo\n");
    printf("digita 6 per scambiare l'ordine del vettore\n");
    printf("digita 7 per contare i multipli di un numero\n");
    printf("digita 8 per ricercare un numero1\n");
    scanf("%d",&risp);
    return risp;
}

int caricavettore(int v[])
{
    int cont,i;
    for(i=0;i<N;i++)
    {
        printf("inserisci 10 numeri: ");
        scanf("%d",&v[i]);
    }
    return *v;
}

void caricarandom(int v[])
{
    srand(time(NULL));
    for(int i = 0; i<N; i++)
    {
        v[i] = rand()%50 + 1;
    }
}

void stampavettori(int v[])
{
        for(int c = 0; c<N; c++)
    {
        printf("%d\t ", v[c]);
    }
    printf("\n\n");

    
}

void ordinavettore1(int v[])
{
    int z,i,j;
    
    for(i=0;i<N-1;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(v[i]<=v[j])
            {
                z=v[i];
                v[i]=v[j];
                v[j]=z;
            }
        }
    }
}

void scambiavetore(int v[])
{
    int i,j,aiuto;
    for(i=0,j=N-1;i<N/2;i++,j--)
    {
        aiuto=v[i];
        v[i]=v[j];
        v[j]=aiuto;
    }
}

void bubblesort(int v[])
{
    int fine = N-1;
    int scambio = 0;
    int z, c;

    do
    {
        scambio = 0;
        for(int i = 0; i<fine; i++)
        {
            if(v[i]>v[i+1])
            {
                scambio=1;
                z=v[i];
                v[i] = v[i+1];
                v[i+1] = z;
                
                c=i;
            }
        }
        fine = c;
    } while(scambio);
}

int contamutipli(int v[],int i)
{
int c=0;

    for(int i = 1; i<N; i++)
    {
        if(v[i]%i==0) 
        c++;
    }
return c;
}

int ricercabinaria(int v[], int x)
{
    int inf = 0, sup = N-1, m;
    do
    {
        m = (inf + sup)/2;

        if(v[m] > x) sup = m-1;

        if(v[m] < x) inf = m+1;

        if(inf > sup) return -1;

    } while(v[m] != x);

    return m;
}

