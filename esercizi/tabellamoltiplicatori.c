#include <stdio.h>

int main()
{
    int a,b=1,cont;

    for (a=1;a<=10;a++)
        for(cont=1;cont<=10;cont++)
        {
            b=b*a;
            if(cont!=10)
            {
                printf("%d\t",b);
            }
            else 
            printf("%d\n",b);
        }
    
    return 0;
}