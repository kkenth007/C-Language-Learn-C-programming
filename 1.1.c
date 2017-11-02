#include<stdio.h>
main()
{
	int width,Long,area;
	
	printf("Rectangle Calculator\n");
	printf("\nEnter Width : ");
	scanf("%d",&width);
	printf("Enter Long : ");
	scanf("%d",&Long);
	area=width*Long;
	printf("Area is : %d",area);	
}
