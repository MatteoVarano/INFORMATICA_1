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

    
}

void carica(char m[][C])
{
    int i;
    for(i=0;i<R;i++)
    {
        printf("inserisci una parola:");
        scanf("%s", m[i]);
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
    
}
