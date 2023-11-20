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

void crea(char fin[]);

void stampa(char fin[]);

int contacognome(char fin[],char n[]);

void media(char fin[]);

int cercacognome(char fin[], char n[]);

int contarecord(char fin[]);

int main()
{
    int r;
    char n[R];
    studente s;

    crea("file.dat");

    stampa("file.dat");

    r=contacognome("file.dat","varano");
    printf("cognomi trovati %d\n\n",r);

    media("file.dat");

    printf("inserisci il cognome da trovare: ");
    scanf("%s",n);
    r=cercacognome("file.dat",n);
    if(r!=-1)
    {
        printf("il cognome e' stato trovato il posizione:%d\n",r);
    }
    else
    {
        printf("il cognome non e' stato trovato");
    }

    r=contarecord("file.dat");
    printf("i record sono %d\n",r);    

    return 0;
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
            int t=i+1;
            s.matricole = t;

            printf("\ninserisci il nome\n");
            scanf("%s",s.nome);

            printf("inserisci il cognome\n");
            scanf("%s",s.cognome);

            printf("inserisci il giorno di nascita\n");
            scanf("%d",&s.nascita.giorno);

            printf("inserisci il mese di nascita\n");
            scanf("%s",s.nascita.mese);

            printf("inserisci il anno di nascita\n");
            scanf("%d",&s.nascita.anno);

            for(int j=0; j<V;j++)
            {
                s.voti[j] = rand()%10+1;
            }

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
    studente s;
    FILE * err1;
    err1=fopen(fin, "rb");
    if(err1!=NULL)
    {
        while(!feof(err1))
        {
            fread(&s, sizeof(studente), 1, err1);

            printf("\nnumero matricola: %d\n", s.matricole);
            printf("cognome: %s\n", s.cognome);
            printf("nome: %s\n", s.nome);
            printf("giorno di nascita: %d/%s/%d\n", s.nascita.giorno, s.nascita.mese, s.nascita.anno);
            printf("voti\n");
            for(int j = 0; j<V; j++){
                printf("%d\t", s.voti[j]);
            }
            printf("\n\n");
        }
    }
    fclose(err1);
}

int contacognome(char fin[],char n[])
{
    studente s;
    FILE * err1; 
    err1=fopen(fin, "rb");

    int c = 0;

    if(err1 != NULL)
    {
        while(!feof(err1))
        {
            fread(&s, sizeof(studente), 1, err1);

            if(strcmp(s.cognome, n) == 0) 
            c++;
        }
    }
    fclose(err1);

    return c; 
}

void media(char fin[])
{
    studente s;
    FILE * err1;
    err1=fopen(fin,"rb");
    int j,media = 0, max = 0 , min = 10;

    if(err1!=NULL)
    {
        while(!feof(err1))
        {
            fread(&s, sizeof(studente), 1, err1);

            printf("cognome:%s\n",s.cognome);
            for(j=0;j<V;j++)
            {
                media+=s.voti[j];

                if(max<s.voti[j])
                {
                    max=s.voti[j];
                }
                if(min>s.voti[j])
                {
                    min=s.voti[j];
                }
            }
            
            media/=V;

            printf("media dei voti: %d\n", media);
            printf("massimo dei voti: %d\n", max);
            printf("minimo dei voti: %d\n\n", min);

            media = 0;
            max = 0;
            min = 10;            

        }
    }
    fclose(err1);    
}

int cercacognome(char fin[], char n[])\
{
    studente s;
    FILE * err1; 
    err1=fopen(fin, "rb");

    int c = -1;

    if(err1 != NULL)
    {
        while(!feof(err1))
        {
            fread(&s, sizeof(studente), 1, err1);

            if(strcmp(s.cognome, n)==0) 
            {
                c = ftell(err1) / sizeof(studente); 
            }
        }
    }
    fclose(err1);

    return c; 
}

int contarecord(char fin[])
{
    FILE * err1;
    err1=fopen(fin, "rb");

    int d = -1;

    if(err1!=NULL)
    {
        fseek(err1, 0, SEEK_END);
        d=ftell(err1);
    }

    d/=sizeof(studente);

    return d;    
}