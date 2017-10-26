#include<stdio.h>
main(){
	int a=3,b=1,c=5,d=6,max,min;
	
	//min
	if(a<b)
	min=a;
	else if(b<c)
	min= b;
	else if(c<d)
	min=c;
	else
	printf("Error");
	
	//max
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

	printf("\nMinimum is :%d\n", min);
	printf("\nMaximum is :%d\n",max);
}
