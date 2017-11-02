#include <stdio.h>

int sum(int sum);		/* function prototype */
main()
{
int a=5,b=6,x;
printf("%d+%d=%d",a,b,sum(x));
printf("\n");
return 0;
}

/* Function definition */
int sum(int sum)
{
	int a=5,b=6;   
	return a+b;
}
