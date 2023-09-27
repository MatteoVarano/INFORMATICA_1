/** ****************************************************************************************
* \mainpage stringhe 
*
* @brief 
* carica 10 stinghe di lunghezza massima 19; stampa le stinghe su monitor con la loro luncheza;
* stampare su monitor la stringa piu' lunga
* 
* @author Matteo Varano
* @date 11/01/2023
* @version 1.0 versione iniziale
*/

#include<stdio.h>
#include<string.h>

#define R 10
#define C 20

void caricastringhe(char s[][C]);

void stampastringhe(char s[][C]);

void stringapiulunga(char s[][C]);

int main()
{
    int r;
    char str[R][C];
    
    caricastringhe(str);

    stampastringhe(str);

    stringapiulunga(str);
    
}

void caricastringhe(char s[][C])
{
    int i;
    for(i=0;i<R;i++)
    {
        printf("inserisci una parola:");
        scanf("%s", s[i]);
    }
}

void stampastringhe(char s[][C])
{
    int i,r;
    for(i=0;i<R;i++)
    {
        r=strlen(s[i]);
        printf("%s\t\t%d\n",s[i],r);
    }
}

 
void stringapiulunga(char s[][C])
{
    int max = 0;
    for(int i = 0; i<R; i++)
    {
        if(strlen(s[i]) > strlen(s[max]))
            max = i;
    }
    printf("\nla parola piu' lunga e' %s\n",s[max]);
}