#include<stdio.h>
#include<conio.h>
main()
{
	float PI,R,CircleArea;
	PI=3.14159265;
	printf("CircleArea Calculator\n");
	printf("\nPlease Enter Radius : ");
	scanf("%f",&R);
	CircleArea=PI*R*R;
	printf("Value of Ciecle area is : %.2f",CircleArea);
}
