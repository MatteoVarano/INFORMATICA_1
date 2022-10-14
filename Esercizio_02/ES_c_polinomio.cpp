/** ****************************************************************************************
* \mainpage polinomio
*
* @brief Scrivi un programma che legge in ingresso 4 numeri che sono i coefficienti di un 
* polinomio -ax^3 +bx^2 - c^x + d e valuta il suo valore in un punto x, sempre inserito dall’utente
* 
* ho utilizzato i numeri 45,30,26,10,2
* 
* @author Matteo Varano
* @date 07/10/2022
* @version 1.0 <data> <Descrivere le modifiche apportate>
* @version 1.1 <data> <Descrivere le modifiche apportate>
*/

#include <stdio.h> 
#include <math.h>

int main ()
{
	printf("Matteo Varano \n");
	
	
	//input
	float a,b,c,d,x;
	//output
	float risultato;
	
	//inserimento dei valori
	printf("inserisci valore di a \n");
	scanf("%f",&a);
	
	printf("inserisci valore di b \n");
	scanf("%f",&b);
	
	printf("inserisci valore di c \n");
	scanf("%f",&c);
	
	printf("inserisci valore di d \n");
	scanf("%f",&d);
	
	printf("inserisci valore di x \n");
	scanf("%f",&x);
	
	//elaborazione
	
	risultato=(-a*(pow(x,3))+b*(pow(x,2))-c*x+d);
	
	printf("il risultato del polinomio e' %.2f",risultato);
	
	return 0;
	
	
}
