/** ****************************************************************************************
* \mainpage funzioni somma
*
* @brief 
* 
* @author Matteo Varano
* @date 11/01/2023
* @version 1.0 versione iniziale
*/

#include<stdio.h>
#include<limits.h>
#define N 5
#define n 3

/*avendo in input due interi restituisce la somma*/
int somma(int,int);

/*trova il massimo tra N numeri interi*/
int max(int);

int main()
{
    int ris,c;
    ris=somma (N,n);
    printf("la somma e %d \n",ris); 

    printf("inserisci il numero di numeri ");
    scanf("%d",&c);
    ris=max(c);
    printf("massimo = %d\n",ris);

    return 0;
}

int somma(int x,int y)
{
    int s;
    s=x+y;
    return s;
}

int max(int z)
{
    int max=INT_MIN,num;

    for(int i=0;i<z;i++)
    {
        printf("inserisci un intero ");
        scanf("%d",&num);
        if(num>max) 
        max=num;
    }
    return max;
}