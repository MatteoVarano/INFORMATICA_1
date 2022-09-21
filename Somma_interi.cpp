/*
  File: Somma interi
  Autore: Matteo Varano
  Classe: 3H
  Data: 21/09/22

  somma di due interi letti da tastiera e stampa a schermo del risultato

  Input: Due numeri interi
  Elaborazione: somma
  Output: Un numero intero
*/

#include <stdio.h> //printf,scanf

int main()
{
	//dichiariamo le due variabili
	int num1,num2;
	//e output
	int ris;
	
	//input due numeri
	printf("inserisci ilprimo numero");
	scanf("%d",&num1);
	printf("inserisci secondo numero");
	scanf("%d",&num2);
	
	//elaborazione: somma
	//asegnazione alla variabile ris
	//il risultatodella espressione num1+num2
	
	ris=num1+num2;
	
	//output: un numero intero
	printf("la somma e' %d",ris);
	
	//termino il programma
	return 0;
}
