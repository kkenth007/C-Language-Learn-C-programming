#include <stdio.h>
int sum(int sum);		/* function prototype */
int sumb(int sumb);
main()
{
int a=5,b=6,x,y;
printf("maximum is %d, minimum  is %d",sumb(y),sum(x));
printf("\n");
return 0;
}
/* Function definition */
int sum(int sum)
{
	int min;
	int a=3,b=1,c=5,d=6,n;
	if(a<b)
	min=a;
	else if(b<c)
	min= b;
	else if(c<d)
	min=c;
	else
	printf("Error");
   
	return min;
}

int sumb(int sumb)
{
	int max;
	int a=3,b=1,c=5,d=6,n;
	if(a>b)
	max=a;
	if(b>a )
	max=b;
	else if(d>c)
	max=d;
	else if(c>b)
	max=c;
	else 
	printf("Error");
   
	return max;
}
