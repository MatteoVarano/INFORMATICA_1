/*
  File: resto
  Autore: Matteo Varano
  Classe: 3H
  Data: 05/10/22
  
  Scrivi un programma che visualizza il resto della divisione tra due numeri interi. 

  Input: due numeri
  Elaborazione: divisione
  Output: resto
*/

#include <stdio.h> 
#include <math.h>

int main()
{
	printf("Matteo Varano \n");
	
	//input
	int numero1,numero2;
	int resto;
	
	printf("inserisci il primo numero \n");
	scanf("%d",&numero1);
	printf("inserisci il secondo numero \n");
	scanf("%d",&numero2);
	
	//elaborzione
	resto=numero1%numero2;
	
	//output
	printf("Il resto e' %d", resto);
	
	return 0;
}
