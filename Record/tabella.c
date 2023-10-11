#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define R 20
#define N 2

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
int Studenti10(studente s1[]);
void caricaTabella(studente s1[]);
void caricaRecord(studente s1[]);
void stampaTabella(studente s1[]);
void stampaRecord(studente s1[]);
void OrdinaTabella(studente s1[]);

int main()
{
    printf("Matteo Varano\n");
    studente s1[N];
    char a[R];
    int r=0;
    
    carica(s1);
    stampa(s1);

    printf("inserisci un cognome da cercare: ");
    scanf("%s",a);
    r=ricercaCog(s1,a);
    if(r==0)
    printf("cognome trovto\n");
    else
    printf("cognome non trovato\n");

    r=stampamedia(s1);
    printf("\nle medie che superano il 6 sono %d\n",r);

    r=Studenti10(s1);
    printf("\ngli studenti che hanno almeno un 10 sono: %d\n",r);

    caricaTabella(s1);
    stampaTabella(s1);

    return 0;
}

void carica(studente s1[])
{
    int i,j;
    for(i=0;i<N;i++)
    {
        printf("\ninserisci il numero di matricola dello studente\n");
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
        printf("%d\t%s \t  %s \t %d %s %d\t",s1[i].matricole,s1[i].nome,s1[i].cognome,s1[i].nascita.giorno,s1[i].nascita.mese,s1[i].nascita.anno);
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
    int i,j,c=0,m=0;
    for(i=0;i<N;i++)
    {
        for(j=0;j<10;j++)
        {
            m+=s1[i].voti[j];
        }
        m/=10;
        if(m>6)
        {
            c++;
        }
        printf("\nla media di %s e': %d\n",s1[i].cognome,m);
    }
    return c;
}

int Studenti10(studente s1[])
{
    int i,j,c=0;
    for(i=0;i<N;i++)
    {
        for(j=0;j<10;j++)
        {
            if(s1[i].voti[j]==10)
            {
                c++;
                j=10;
            }
        }
    }
    return c;
}

void caricaRecord(studente s1[])
{
    int i,j;
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

void caricaTabella(studente s1[])
{
    int i;
    for(i=0;i<N;i++)
    {
        caricaRecord(s1);
    }
}

void stampaRecord(studente s1[])
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

void stampaTabella(studente s1[])
{
    int i;
    for(i=0;i<10;i++)
    {
        stampaRecord(s1);
    }
}

void OrdinaTabella(studente s1[])
{
    studente c;
    for(int i = 0; i<N-1; i++)
    {
        for(int j = i+1; j<N; j++)
        {
            if(strcmp(s1[i].cognome, s1[j].cognome) > 0)
            {
                c = s1[i];
                s1[i] = s1[j];
                s1[j] = c;
            }
        }
    }
}