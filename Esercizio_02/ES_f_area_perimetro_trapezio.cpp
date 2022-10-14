/** ****************************************************************************************
* \mainpage area e perimetro trapezio
*
* @brief  Scrivi un programma che calcola l’area e il perimetro di un trapezio 
* dopo aver letto i dati necessari
* 
* ho utilizzato i valori 20,10,5,7
* 
* @author Matteo Varano
* @date 07/10/2022
* @version 1.0 <data> <Descrivere le modifiche apportate>
* @version 1.1 <data> <Descrivere le modifiche apportate>
*/

#include <stdio.h>

int main()
{
	printf("Matte Varano \n");
	
	//input
	float base_maggiore,base_minore,lato_obliquo,altezza;
	//output
	float area,perimetro;
	
	//avvalorare input
	printf("inserisci il valore della base maggiore \n");
	scanf("%f",&base_maggiore);
	printf("inserisci il valore della base minore \n");
	scanf("%f",&base_minore);
	printf("inserisci il valore del lato obliquo \n");
	scanf("%f",&lato_obliquo);
	printf("inserisci il valore dell' altezza \n");
	scanf("%f",&altezza);
	
	//elaborazione
	area=((base_maggiore+base_minore)*altezza)/2;
	perimetro=base_maggiore+base_minore+(lato_obliquo*2);
	
	//output
	printf("l'area e' %.2f \n",area);
	printf("il perimetro e' %.2f",perimetro);
	
	return 0;
	
}
