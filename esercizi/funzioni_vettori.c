#include <stdio.h>

#define N 10

void ordinavettore(int v[]);

int contamultipli(int v[], int x);

int contaprimi(int v[]);

int main()
{
    int* v[N];
    int cont=0,i;
    for(i=0;i<N;i++)
    {
        printf("inserisci il %d numero nel vettore",cont);
        scanf("%d",v[i]);
        cont++;
    }
    ordinavettore(v[]);
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