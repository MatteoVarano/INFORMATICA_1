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

void copiafile(char  fin[],char  fout[]);


int main(int argc, char *argv[]) 
{
    if (argc != 3) 
    {
        printf("Utilizzo: %s [input_file] [output_file]\n", argv[0]);
        return 1;
 	}

 	char *input_file = argv[1];
  	char *output_file = argv[2];

    copiafile(input_file, output_file);
}


void copiafile(char  fin[],char  fout[])
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