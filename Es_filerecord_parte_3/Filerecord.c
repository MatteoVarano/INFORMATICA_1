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
#include <string.h>

#define N 1
#define R 20
#define V 10

struct alunno
{
    char nome[R];
    char cognome[R];
}typedef studente;

void crea(char fin[]);

void stampa(char fin[]);

int modifica(char fin[],char s[], char s2[]);

int main()
{
    int r;

    crea("prova.dat");

    stampa("prova.dat");

    r=modifica("prova.dat","Rossi","Bianchi");
    printf("i nomi sostituiti sono %d\n",r);

    printf("\ndopo funzione modifica\n");
    stampa("prova.dat");

    
}

void crea(char fin[])
{
    studente s;
    FILE * err1;
    err1=fopen(fin,"ab");
    

    if(err1 != 0)
    {
        for(int i=0;i<N;i++)
        {
            printf("\ninserisci il nome\n");
            scanf("%s",s.nome);

            printf("inserisci il cognome\n");
            scanf("%s",s.cognome);

            fwrite(&s, sizeof(studente), 1, err1);
        }
        fclose(err1);
        
    }
    else
    {
        printf("il file non e' stato aperto\n");
    }

}

void stampa(char fin[])
{
    int n;
    studente s;
    FILE * err1;
    err1=fopen(fin, "rb");
    if(err1!=NULL)
    {
        while(!feof(err1))
        {
            n=fread(&s, sizeof(studente), 1, err1);

            if(n>0)
            {
                printf("\ncognome: %s\n", s.cognome);
                printf("nome: %s\n", s.nome);
                printf("\n\n");
            }
        }
    }
    fclose(err1);
}

int modifica(char fin[],char s[], char s2[])
{
    int r;
    FILE * err1 = fopen(fin,"rb+");
    studente f;


    if(err1!=NULL)
    {
        while(fread(&f, sizeof(studente), 1, err1))
        {
            if(strcmp(f.cognome,s)==0)
            {
                fseek(err1,-sizeof(studente),SEEK_CUR);
                strcpy(f.cognome,s2);
                fwrite(&f, sizeof(studente), 1 , err1);
                fseek(err1,0,SEEK_CUR);
                r++;
            }
        }    
    }
    return r;
}