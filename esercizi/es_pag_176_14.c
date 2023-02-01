#include<stdio.h>

int main()
{
    int num1,num2,aiuto=0,ris;
    printf("inserisci num1\n");
    scanf("%d",&num1);
    printf("inserisci num1\n");
    scanf("%d",&num2);

    do
    {
        if(num1<num2)
        {
            aiuto=num1;
            num1=num2;
            num2=aiuto;
        }
        else
        {
        ris=num1-num2;
        }
    }
    while(ris<=3);
    {
        printf("%d",ris);
    }
    return 0;
}