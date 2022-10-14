/** ****************************************************************************************
* \mainpage area e perimetro trapezio
*
* @brief Dato un numero inserito dall’utente, compreso tra 100 e 999, stampalo in modo che 
* ogni cifra sia separata dalle altre da uno spazio.  
*
* ho 
* 
* @author Matteo Varano
* @date 07/10/2022
* @version 1.0 <data> <Descrivere le modifiche apportate>
* @version 1.1 <data> <Descrivere le modifiche apportate>
*/

#include <stdio.h>

int main()
{
	printf("Matteo Varano \n");
	
	//input
	int numero1;
	//output
	int n1,n2,n3;
	
	printf("Inserisci un numero tra 100 e 999: ");  //richiesta numero all'utente
    scanf("%d", &numero1);
  
    n1 = numero1 / 100;   
    n2 = (numero1 - n1 * 100) / 10;  
    n3 = (numero1 - (n1*100 + n2*10));   
  
    printf("%d \t %d \t %d \t", n1, n2, n3); 
    
    return 0;
}
