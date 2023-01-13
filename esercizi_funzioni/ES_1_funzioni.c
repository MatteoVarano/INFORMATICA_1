/** ****************************************************************************************
* \mainpage funzioni 
*
* @brief 
* 
* @author Matteo Varano
* @date 11/01/2023
* @version 1.0 versione iniziale
*/

#include<stdio.h>
#include<limits.h>

/*restituisce il massimo comume divisore di due numeri */
int med(int,int,int);

/*restituisce la somma dei divisori di un numero inserito da tastiera*/
int somma_divisori(int);

/*restituisce l'aria di un rettangolo ricevendo in input la base e l'altezza*/
int area_rettangolo(int,int);

int main()
{
    printf("Matteo Varano \n");

    int num1,num2,ris=0,mcd;
    int num3,somma;

    printf("inserisci il primo numero ");
    scanf("%d",&num1);
    printf("inserisci il secondo numero ");
    scanf("%d",&num2); 
    mcd=med(num1,num2,ris);
    printf("il massimo comune divisore e: %d\n",mcd);

    printf("\ninserisci un numero dal quale verarano sommati i divisori ");
    scanf("%d",&num3);
    somma=somma_divisori(num3);
    printf("la somma dei divisori di %d e %d \n",num3,somma);
}

int med(int num1,int num2,int ris)
{
    while (num2 != 0) 
    {
        ris = num2;
        num2 = num1 % num2;
        num1 = ris;
    }
    return num1;
}

int somma_divisori(int num3)
{
    int somma,cont;
    for(cont=2;cont<=num3;cont++)
    
        if(num3%cont==0)
        somma=somma+cont;
        return somma;  
       
}