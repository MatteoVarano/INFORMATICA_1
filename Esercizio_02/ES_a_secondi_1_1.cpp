/*
  File: seondi
  Autore: Matteo Varano
  Classe: 3H
  Data: 05/10/22

  Scrivi un programma che legge in input un valore corrispondente a un numero di secondi e lo trasforma in ore,minuti e secondi

  Input: secondi
  Elaborazione: 
  Output: ore minuti secondi
*/


#include <stdio.h> 

int main()
{
	printf("Matteo Varano \n");
	//input 
	int secondi;
	int ore,minuti;
	int secondi_iniziali;
	
	printf("inserisci un numero \n");
	scanf("%d",&secondi);
	secondi_iniziali=secondi;
	
	//elaborazione
	minuti=(secondi-secondi%60) / 60;
	ore=(minuti-minuti%60) / 60;
	secondi = secondi % 60;
	minuti= minuti % 60;
	
	//output
	printf("%d = %dh %dm %ds",secondi_iniziali,ore, minuti, secondi); //stampa risultato
	
	return 0;
	
}

