/** ****************************************************************************************
* \mainpage funzioni 
*
* @brief 
* 1) Scrivere una funzione chiamata "mcd" che prende in input due numeri interi e restituisce 
*    il loro massimo comune divisore utilizzando l'algoritmo di Euclide. 
* 2) Scrivere una funzione chiamata "somma_divisori" che prende in input un numero intero 
*    e restituisce la somma dei suoi divisori.
* 3) Scrivere una funzione chiamata "area_rettangolo" che prende in input la base e 
*    l'altezza di un rettangolo e restituisce l'area. 
* 
* @author Matteo Varano
* @date 11/01/2023
* @version 1.0 versione iniziale
*/

#include<stdio.h>
#include<limits.h>

/*menu che chiede ad inizio programma quale funzione usare*/
int menu();

/*restituisce il massimo comume divisore di due numeri */
int med(int,int,int);

/*restituisce la somma dei divisori di un numero inserito da tastiera*/
int somma_divisori(int);

/*restituisce l'aria di un rettangolo ricevendo in input la base e l'altezza*/
int area_rettangolo(int,int);

/*stampa i numeri di fibonacci*/
void fibonacci(int);

int main()
{
    int num1,num2,ris=0,mcd,r;
    int num3,somma;
    int base,altezza,area;

    do
    {
        r=menu();
        switch(r)
        {
            case 0: printf("Fine programma \n");
                    break;
            case 1: printf("inserisci il primo numero ");
                    scanf("%d",&num1);
                    printf("inserisci il secondo numero ");
                    scanf("%d",&num2); 
                    mcd=med(num1,num2,ris);
                    printf("il massimo comune divisore e: %d\n",mcd);
                    break;
            case 2: printf("\ninserisci un numero dal quale verranno sommati i divisori ");
                    scanf("%d",&num3);
                    somma=somma_divisori(num3);
                    printf("la somma dei divisori di %d e %d \n",num3,somma); 
                    break;
            case 3: printf("\ninserisci la base del rettangolo ");
                    scanf("%d",&base);
                    printf("inserisci l'altezza del rettangolo ");
                    scanf("%d",&altezza);
                    area=area_rettangolo(base,altezza);
                    printf("l'area del rettangolo e %d\n",area);  
                    break;
            case 4: printf("inserisci un numero maggiore di 3: ");
                    scanf("%d",&num1);
                    fibonacci(num1);
                    break;      
            default: printf("hai inserito un numero sbagliato\n");                           
        }
    }
    while(r!=0);
   
    return 0;
}

int menu()
{
    int risp;
    printf("\nMatteo Varano \n");
    printf("\ndigita 0 se vuoi uscire dal programma\n");
    printf("digita 1 per calcolare l'mcd tra due numeri interi\n");
    printf("digita 2 per calcolare la somma tra i divisori du un numero intero\n");
    printf("digita 3 per calcolare l'area di un rettangolo con base e altezza ineri\n");
    printf("digita 4 per scrivere tanti numeri di fibonacci quanti ne sceglie l'utente\n");
    scanf("%d",&risp);
    return risp;
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
    for(cont=1;cont<=num3;cont++)
    
        if(num3%cont==0)
        somma=somma+cont;
        return somma;  
       
}

int area_rettangolo(int x,int y)
{
    int ris;
    ris=x*y;
    return ris;
}

void fibonacci(int x)
{
    int cont,num1=0,num2=1,ris;
    for(cont=x;cont>=0;cont--)
    {
        ris=num1+num2;
        num1=num2;
        num2=ris;
        printf("%d\n",ris);
    }
    
}

