#include <stdio.h>

#define N 10

int menu();

int caricavettore(int v[]);

void stampavettori(int v[]);

void ordinavettore(int v[]);

int main()
{
    int v[N];
    int cont=0,i,r;

        do
    {
        r=menu();
        switch(r)
        {
            case 0: printf("Fine programma \n");
                    break;
            case 1: r=caricavettore(v);
                    printf("\ni numeri nel vettore sono\t");
                    stampavettori(v);
                    printf("\ni numeri nel vettore ordinati sono\t");
                    ordinavettore(v);
                    stampavettori(v);
            case 2: 
            default: printf("hai inserito un numero sbagliato\n");                           
        }
    }
    while(r!=0);

    return 0;
}


int menu()
{
    int risp;
    printf("Matteo Varano \n");
    printf("\ndigita 0 se vuoi uscire dal programma\n");
    printf("digita 1 per inserire i numeri da tastiera\n");
    printf("digita 2 per caricare numeri randomici\n");
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

void stampavettori(int v[])
{
        for(int c = 0; c<N; c++)
    {
        printf("%d\t ", v[c]);
    }
    printf("\n\n");

    
}

void ordinavettore(int v[])
{
    int z,i,j;
    
    for(i=0;i<N-1;i++)
    {
        for(j=i+1;j<N-1;j++)
        {
            if(v[i]<v[j])
            {
                z=v[i];
                v[i]=v[j];
                v[j]=z;
            }
        }
    }
}