#include <stdio.h>

int main()
{
    int a,sum=0,i;
    
	printf("Number : ");
    scanf("%d",&a);
    while (a!=0)
    {
        i = a % 2;
        if (i == 0)
        {
            sum = sum + a;
            printf ("%d ",a);
        }
        a--;
    }
    
    printf("\nSum of : %d",sum);

    return 0;
}

//P OAT LRU Y8%2
