/** ****************************************************************************************
* \mainpage stringhe 
*
* @brief 
* 
* 
* @author Matteo Varano
* @date 27/09/2023
* @version 1.0 versione iniziale
*/

#include<stdio.h>
#include<string.h>

#define R 10
#define C 20

void carica(char m[][C]);
//nella funzione si chiedano all’utente R stringhe di lunghezza massima C-1

void stampa(char m[][C]);
//stampa sul monitor le stringhe seguite dalla loro lunghezza. Curare la visualizzazione su monitor

int piuLunga(char m[][C]);
// la funzione restituisce l’indice della riga dove è memorizzata la stringa più lunga e visualizza nel main la stringa

void scambia(char m[][C], int k, int t);
/*nella funzione si scambiano tra di loro le stringhe di indice k e t .
Eseguita la funzione la stringa della riga k+1 (indice k)  
si trovi nella riga t+1 e quella della riga t+1 si trovi nella riga k+1 */

int primaAlfabeto(char m[][C]);
// la funzione restituisce l’indice della stringa che è la prima in ordine alfabetico

void ordina(char m[][C]);
// terminata l’esecuzione della funzione, tutte le stringhe sono in ordine alfabetico

int main()
{
    char m[R][C];
    int r;

    carica(m);

    stampa(m);

    r=piuLunga(m);
    printf("\nla parola piu' lunga e' %s\n\n",m[r]);

    scambia(m,2,5);
    stampa(m);

    r=primaAlfabeto(m);
    printf("\nla prima parola nella matrice in ordine alfabetico e' %s\n\n",m[r]);

    ordina(m);
    stampa(m);

    return 0;
}

void carica(char m[][C])
{
    int i,riga=1;
    for(i=0;i<R;i++)
    {
        printf("\ninserisci una parola nella riga %d: ",riga);
        scanf("%s", m[i]);
        riga++;
    }
}

void stampa(char m[][C])
{
    int i,r;
    for(i=0;i<R;i++)
    {
        r=strlen(m[i]);
        printf("%s\t\t%d\n",m[i],r);
    }
}

int piuLunga(char m[][C])
{
    int max = 0;
    for(int i = 0; i<R; i++)
    {
        if(strlen(m[i]) > strlen(m[max]))
            max = i;
    }
    return max;
}

void scambia(char m[][C], int k, int t)
{
    char x[C];
    strcpy(x, m[k]);
    strcpy(m[k], m[t]);
    strcpy(m[t], x);
}

int primaAlfabeto(char m[][C])
{
    int alfabeto=0,i;
    for(i=1;i<R;i++)
    {
        if(strcmp(m[alfabeto],m[i])>0)
        alfabeto=i;
    }
    return alfabeto;
}

void ordina(char m[][C])
{
    int i,j;
    for(i=0;i<R;i++)
    {
        for(j=i+1;j<R;j++)
        {
            if(strcmp(m[i],m[j])>0)
            {
                scambia(m,i,j);
            }
        }
    }
}