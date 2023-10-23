#include <stdio.h>
#include <unistd.h>

int main()
{
	printf("Matteo Varano\n");
	char a;
	int i;
	printf("inserisci\n v per far lampeggiare di verde un led per 10 volte\n r per far lampeggiare di rosso un led per 10 volte\n g per far lampeggiare di giallo un led per 10 volte\n q per chiudere il programma\n");
	scanf("%c",&a);
	
	int pid = fork();
	
	if(pid==0)
	{
		switch(a)
		{
			case 'v':
					for(i=0;i<10;i++)
					{
						printf("led verde acceso\n");
						usleep(300000);
						printf("led verde spento\n");
					}
					break;
			case 'r':
					for(i=0;i<10;i++)
					{
						printf("led rosso acceso\n");
						usleep(700000);
						printf("led rosso spento\n");
					}
					break;
			case 'g':
					for(i=0;i<10;i++)
					{
						printf("led giallo acceso\n");
						usleep(1500000);
						printf("led giallo spento\n");
					}
					break;
				case 'q':
						printf("fine programma\n");
						break;
				default:
							printf("carattere sbagliato\n");					
		}
	}
	return 0;
}