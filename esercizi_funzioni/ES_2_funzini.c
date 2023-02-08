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

/*menu che chiede ad inizio programma quale funzione usare*/
int menu();

/*stampa i numeri di fibonacci*/
void fibonacci(int);

/*controlla se il numero inserito dall'utente e' pari o dispari restiruendo 1 se dispari e 0 se pari*/
int pari_dispari(int);

/*restituisce la somma e i divisori di un numero inserito da tastiera*/
void stampa_divisori(int); 

/*mi restituisce tutti i numeri aici da 0 a 1500*/
void numeri_amici(void);
int somma_divisori(int);

int main()
{
    int num1,r,ris;

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
            case 2: printf("\ninserisci un numero per controllare se e' pari o dispari: ");
                    scanf("%d",&num1);
                    ris=pari_dispari(num1);
                    if(ris==0)
                    {
                        printf("il numero e' pari\n\n");
                    }
                    else
                    {
                        printf("il numero e' dispari\n\n");
                    }
                    break;
            case 3: printf("inserisci un numero da cui verra trovato i divisori e la loro somma: ");
                    scanf("%d",&num1);
                    stampa_divisori(num1);
                    break;
            case 4: printf("i numeri amici sono\n");
                    numeri_amici();
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
    printf("digita 1 per scrivere tanti numeri di fibonacci quanti ne sceglie l'utente\n");
    printf("digita 2 per controllare se il numero che inserisci e' pari o dispari\n");
    printf("digita 3 per calcolare la somma tra i divisori du un numero intero\n");
    printf("digita 4 per trovare tutti i numeri amici da 0 a 1500\n");
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

    while(x>=1)
    {
        x=x-2;
    }

    return x;
}

void stampa_divisori(int x)
{
    int somma=0,cont;
    for(cont=1;cont<=x;cont++)
    {
        if(x%cont==0)
        {
            somma=somma+cont;
            printf("%d\n",cont);
            
        }    
    }  
    printf("la somma dei divisori di %d e %d \n",x,somma);
    return;        
}

void numeri_amici()
{
    int cont,cont2,ris,ris2,r;
    for(cont=1;cont<=1500;cont++)
    {
        ris=somma_divisori(cont)-cont;
    
        for(cont2=1;cont2<=1500;cont2++)
        {
            ris2=somma_divisori(cont2)-cont2;
        
            if(ris == cont2 && ris2 == cont && cont != cont2 && r!= cont2)
            {
                printf("%d %d",ris,ris2);

                r=cont;
            }
        }
    }
    return;           
}

int somma_divisori(int x)
{
    int somma,cont;
    for(cont=1;cont<=x;cont++)
    
        if(x%cont==0)
        somma=somma+cont;
        return somma; 
}
