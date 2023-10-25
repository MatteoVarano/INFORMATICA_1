/** ****************************************************************************************
* \mainpage stringhe 
*
* @brief 
* esercizi sui file 
* 
* @author Matteo Varano
* @date 23/10/2023
* @version 1.0 versione iniziale
*/

#include <stdio.h>

void copiafile(char fin[],char fout[]);
/*Scrivi  un  programma  che  esegue  la  copia  di  un  file  di  testo. 
  Il  programma  legge  carattere per carattere il contenuto del file in.txt 
  e lo ricopia nel file out.txt. */

void copianome(char fin[],char fout[]);
/*Scrivi  un  programma  che  legge  il  file  nomi.txt e  scrive  un  file  NOMI2.TXT, 
  dove  tutti  i  nomi  sono stati trasformati in caratteri maiuscoli.*/

void contacaratteri(char fin[]);
/*Scrivi un programma che conta i caratteri, le parole e le righe presenti in un file di testo
 (non gli spazi, tabulazioni e a capo)*/

int main()
{
    int c;

	copiafile("in.txt","out.txt");

    copianome("nomi.txt","NOMI2.txt");

    contacaratteri("Caratteri.txt");
}

void copiafile(char fin[],char fout[])
{
	FILE * err1;
    FILE * err2;
    char c;
    err1=fopen(fin,"r");
    err2=fopen(fout,"a");

    if(err1 != 0 && err2 != 0)
    {
        printf("\ni file sono stati aperti correttamente\n");
        while((c=fgetc(err1))!=EOF)
        {
            fputc(c,err2);
        }

        fclose(err1);
        fclose(err2);
    }
    else
    {
        printf("\nfile non aperti\n");
    }

}  

void copianome(char fin[], char fout[])
{
    FILE * err1;
    FILE * err2;
    char c;
    err1=fopen(fin,"r");
    err2=fopen(fout,"a");

    if(err1 != 0 && err2 != 0)
    {
        printf("\ni file sono stati aperti correttamente\n");
        while((c=fgetc(err1))!=EOF)
        {
            if(c >='a' && c<='z')
            {
                c-=32;
            }
            fputc(c,err2);
        }

        fclose(err1);
        fclose(err2);
    }
    else
    {
        printf("\nfile non aperti\n");
    }
}

void contacaratteri(char fin[])
{
    int cont=0,contrighe=1,contparole=1;
    char p;
    FILE * err1;

    err1=fopen(fin,"r");

    if(err1 != 0)
    {
        printf("\nil file e' stato aperto correttamente\n");

        while((p=fgetc(err1)) != EOF)
        {
            if(p==' ' || p=='\n')
            {
                contparole++;
            }

            if(p>='A' && p<='Z' || p>='a' && p<='z')
            {
                cont++;
            }

            if(p=='\n')
            {
                contrighe++;
            }
            

        }
    }
    else 
    {
        printf("file non aperto\n");
    }
    printf("i caratteri dentro il file sono %d\n",cont);
    printf("le parole dentro il file sono %d\n",contparole);
    printf("le righe sono %d\n",contrighe);
}