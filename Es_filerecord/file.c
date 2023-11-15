/** ****************************************************************************************
* \mainpage file record
*
* @brief 
* esercizi sui file 
* 
* @author Matteo Varano
* @date 13/11/2023
* @version 1.0 versione iniziale
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 1
#define R 20
#define V 10

struct data
{
    int giorno;
    char mese[12];
    int anno;
}typedef data;

struct alunno
{
    int matricole;
    char nome[R];
    char cognome[R];
    int voti[V];
    data nascita;
}typedef studente;

void crea(char fin[],studente s[]);

void stampa(char fin[],studente s[]);

void contacognome(char fin[],studente s[]);

void media(char fin[],studente s[]);

int main()
{
    studente s[N];

    crea("file.dat",s);

    stampa("file.dat",s);

    return 0;
}

void crea(char fin[],studente s[])
{
    FILE * err1;
    err1=fopen(fin,"ab");
    int t;

    if(err1 != 0)
    {
        for(int i=0;i<N;i++)
        {
            t=i+1;
            s[i].matricole = t;

            printf("\ninserisci il nome\n");
            scanf("%s",s[i].nome);

            printf("inserisci il cognome\n");
            scanf("%s",s[i].cognome);

            for(int j=0; j<V;j++)
            {
                s[i].voti[j] = rand()%10+1;
            }

            printf("inserisci il giorno di nascita\n");
            scanf("%d",&s[i].nascita.giorno);

            printf("inserisci il mese di nascita\n");
            scanf("%s",s[i].nascita.mese);

            printf("inserisci il anno di nascita\n");
            scanf("%d",&s[i].nascita.anno);

            fwrite(&s, sizeof(studente), 1, err1);
        }
        fclose(err1);
        
    }
    else
    {
        printf("il file non e' stato aperto\n");
    }

}

void stampa(char fin[],studente s[])
{
    FILE * err1;
    err1=fopen(fin,"rb");

    if(err1 != 0)
    {
        for(int i=0;i<N;i++)
        {
            fread(&s, sizeof(studente), 1, err1);
            printf("\nnumero matricola: %d\n",s[i].matricole);
            printf("cognome: %s\n",s[i].cognome);
            printf("nome: %s\n",s[i].nome);
            printf("data di nascita: %d %s %d\n", s[i].nascita.giorno, s[i].nascita.mese, s[i].nascita.anno);
            for(int j=0;j<V;j++)
            {
                printf("voti: %d\n",s[i].voti[j]);
            }
        }
        fclose(err1);
    }
    else
    {
        printf("file non aperto");
    }
}