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

void contaparidispari(char fin[], char fout1[], char fout2[]);
/*Scrivi un programma che legge il file numeri.txt (cifre numeriche ascii)
composto da una sequenza di numeri di una cifra separati da uno spazio bianco e successivamente scrive 2 file,
 pari.txt e dispari.txt, nei quali dovrai inserire i numeri che hai letto a seconda del loro valore pari o dispari
*/
void cesareCrypt(char fin[],char fout[]);
void cesareDecrypt(char fin[],char fout[]);
/*Scrivere le funzioni cesareCrypt e cesareDecrypt che criptano o decriptano un file in input di una chiave key,
 usando l’algoritmo di Cesare. Commentare adeguatamente il codice scritto.*/

int main()
{
    int c;

	copiafile("a/in.txt","a/out.txt");

    copianome("b/nomi.txt","b/NOMI2.txt");

    contacaratteri("c/Caratteri.txt");

    contaparidispari("d/numeri.txt","d/pari.txt","d/dispari.txt");

    cesareCrypt("e/testo.txt","e/crypt.txt");

    return 0;
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
        printf("\ni file sono stati aperti correttamente\n");

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

        fclose(err1);
    }
    else 
    {
        printf("file non aperto\n");
    }
    printf("i caratteri dentro il file sono %d\n",cont);
    printf("le parole dentro il file sono %d\n",contparole);
    printf("le righe sono %d\n",contrighe);
}

void contaparidispari(char fin[], char fout1[], char fout2[])
{
    char c;
    FILE * err1;
    FILE * err2;
    FILE * err3;

    err1=fopen(fin,"r");
    err2=fopen(fout1,"a");
    err3=fopen(fout2,"a");

    if(err1 && err2 && err3 !=0)
    {
        printf("\ni file sono stati aperti correttamente\n");

        while((c=fgetc(err1))!= EOF)
        {
            if(c % 2== 0 && c != ' ')
            {
                if(c+1==' ')
                {
                    fputc(c,err2);
                    putc(' ', err2);
                }
                else
                {
                   putc(' ', err2);
                   fputc(c,err2); 
                }
            }
            
            if(c % 2== 1 && c != ' ')
            {
                if(c+1==' ')
                {
                    fputc(c,err3);
                    putc(' ', err3);
                }
                else
                {
                    putc(' ', err3);
                    fputc(c,err3);
                }    
            }
        }
        fclose(err1);
        fclose(err2);
        fclose(err3);
    }
    else 
    {
        printf("file non aperto\n");
    }
}

void cesareCrypt(char fin[],char fout[])
{
    char c;
    FILE * err1;
    FILE * err2;

    err1=fopen(fin,"r");
    err2=fopen(fout,"a");

    if(err1 != 0)
    {
        printf("il file e' stato aperto correttamente\n");

        while((c=fgetc(err1))!=EOF)
        {
            if(c>='A' && c<='W')
            {
                c+=3;
                fputc(c,err2);
            }
            else
            {
                if(c>='X' && c<='Z')
                {
                     c-=25;
                     fputc(c,err2);
                }
                else 
                {
                    if(c==' ')
                    {
                        fputc(' ',err2);
                    }
                }
            }

            if(c>='a' && c<='w')
            {
                c+=3;
                fputc(c,err2);
            }
            else
            {
                if(c>='x' && c<='z')
                {
                     c-=25;
                     fputc(c,err2);
                }
                else 
                {
                    if(c==' ')
                    {
                        fputc(' ',err2);
                    }
                }
            }
        }

    }
    else
    {
        printf("file non aperto\n");
    }
}

