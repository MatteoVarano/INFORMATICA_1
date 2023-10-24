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

int main()
{
	copiafile("in.txt","out.txt");

    copianome("nomi.txt","NOMI2.txt");
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
        printf("i file sono stati aperti correttamente\n");
        while((c=fgetc(err1))!=EOF)
        {
            fputc(c,err2);
        }

        fclose(err1);
        fclose(err2);
    }
    else
    {
        printf("file non aperti\n");
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
        printf("i file sono stati aperti correttamente\n");
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
        printf("file non aperti\n");
    }
}