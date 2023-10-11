#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define R 20
#define N 1

struct data
{
    int giorno;
    char mese[12];
    int anno;
}typedef data;

struct strudente
{
    int matricole;
    char nome[R];
    char cognome[R];
    int voti[10];
    data nascita;
}typedef studente;

void carica(studente s1[]);
void stampa(studente s1[]);
int ricercaCog(studente s1[], char a[]);
int stampamedia(studente s1[]);

int main()
{
    printf("Matteo Varano\n");
    studente s1[N];
    char a[R];
    int r;
    
    carica(s1);
    stampa(s1);

    printf("inserisci un cognome da cercare: ");
    scanf("%s",a);
    r=ricercaCog(s1,a);
    if(r==0)
    printf("cognome trovto");
    else
    printf("cognome non trovato\n");
}

void carica(studente s1[])
{
    int i,j;
    for(i=0;i<N;i++)
    {
        printf("inserisci il numero di matricola dello studente\n");
        scanf("%d",&s1[i].matricole);
        printf("inserisci il nome dell'alunno\n");
        scanf("%s",s1[i].nome);
        printf("inserisci il cognome dell'alunno\n");
        scanf("%s",s1[i].cognome);
        printf("inserisci la data di nascita dell'alunno\n");
        scanf("%d %s %d",&s1[i].nascita.giorno,s1[i].nascita.mese,&s1[i].nascita.anno);
        for(j=0;j<10;j++)
            s1[i].voti[j]=rand()%10+1;
    }
}

void stampa(studente s1[])
{
    int i,j;
    for(i=0;i<N;i++)
    {
        printf("Nome: %s\n",s1[i].nome);
        printf("Cognome: %s\n",s1[i].cognome);
        printf("Numero matricola: %d\n",s1[i].matricole);
        printf("Data di nascita %d %s %d\n",s1[i].nascita.giorno,s1[i].nascita.mese,s1[i].nascita.anno);
        printf("Voti:");
        for(j=0;j<10;j++)
        {
            printf("%d\t",s1[i].voti[j]);
        } 
        printf("\n\n");
    }
}

int ricercaCog(studente s1[], char a[])
{
    for(int i = 0; i<N; i++)
    {
        if(strcmp(s1[i].cognome, a) == 0) return i;
    }
    return -1;
}

int stampamedia(studente s1[])
{
    int i=0;
    for(i=0;i<N;i++)
    {

    }
    return 0;
}