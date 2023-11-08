/** ****************************************************************************************
* \mainpage file log 
*
* @brief 
* esercizi sui file 
* 
* @author Matteo Varano
* @date 08/11/2023
* @version 1.0 versione iniziale
*/

#include <stdio.h>
#include <stdlib.h>

void cesareCrypt(char  fin[],char  fout[],int chiave);

void cesareDecrypt(char  fin[],char  fout[],int chiave);

int main(int argc, char * argv[])
{
    if (argc != 5) {
        printf("Utilizzo: %s [input_file] [output_file] [chiave] [azione (c/d)]\n", argv[0]);
        return 1;
 	   }

 	  char *input_file = argv[1];
  	  char *output_file = argv[2];
  	  int chiave = atoi(argv[3]);
   	  char azione = argv[4][0];

      if(azione=='c')
      {
        cesareCrypt(input_file,output_file,chiave);
      }
      else
      {
        cesareDecrypt(input_file, output_file,chiave);
      }
}

void cesareCrypt(char fin[],char fout[],int chiave)
{
    char c;
    FILE * err1;
    FILE * err2;

    err1=fopen(fin,"r");
    err2=fopen(fout,"w");

    if(err1 != 0)
    {
        printf("il file e' stato aperto correttamente\n");

        while((c=fgetc(err1))!=EOF)
        {
            if(c>='A' && c<='Z'-chiave)
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

            if(c>='a' && c<='z'-chiave)
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
        fclose(err1);
        fclose(err2);
    }
    else
    {
        printf("file non aperto\n");
    }
}

void cesareDecrypt(char fin[],char fout[],int chiave)
{
    char c;
    FILE * err1;
    FILE * err2;

    err1=fopen(fin,"r");
    err2=fopen(fout,"w");

    if(err1 != 0)
    {
        printf("il file e' stato aperto correttamente\n");

        while((c=fgetc(err1))!=EOF)
        {
            if(c>='D' && c<='Z')
            {
                c-=3;
                fputc(c,err2);
            }
            else
            {
                if(c>='A' && c<='C')
                {
                     c+=25;
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

            if(c>='d' && c<='z')
            {
                c-=3;
                fputc(c,err2);
            }
            else
            {
                if(c>='a' && c<='c')
                {
                     c+=25;
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
        fclose(err1);
        fclose(err2);
    }
    else
    {
        printf("file non aperto\n");
    }
}