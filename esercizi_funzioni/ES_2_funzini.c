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

/*stampa i numeri di fibonacci*/
void fibonacci(int);

/*controlla se il numero inserito dall'utente e' pari o dispari restiruendo 1 se dispari e 0 se pari*/
int pari_dispari(int);

int main()
{
    int num1,r;

    do
    {
        r=menu();
        switch(r)
        {
            case 0: printf("Fine programma \n");
                    break;
            case 1: printf("inserisci un numero maggiore di 3: ");
                    scanf("%d",&num1);
                    fibonacci(num1);
                    break; 
            case 2: printf("inserisci un numero per controllare se e' pari o dispari: ");
                    scanf("%d",&num1);
                    r=pari_dispari(num1);
                    if(r==0)
                    {
                        printf("il numero e' pari\n");
                    }
                    else
                    {
                        printf("il numero e' dispari\n");
                    }
                    break;
            case 3: break;
            case 4: break;
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
    printf("digita 1 per scrivere tanti numeri di fibonacci quanti ne sceglie l'utente\n");
    printf("digita 2 per controllare se il numero che inserisci e' pari o dispari\n");
    scanf("%d",&risp);
    return risp;
}

void fibonacci(int x)
{
    int cont,num1=0,num2=1,ris;
    for(cont=x;cont>0;cont--)
    {
        ris=num1+num2;
        num1=num2;
        num2=ris;
        printf("%d\n",ris);
    }
    
}

int pari_dispari(int x)
{
    int pari_dispari;

     if(x%2==0)
     {
        pari_dispari=0;
     }
     else
     {
        pari_dispari=1;
     }
    return pari_dispari;
}

