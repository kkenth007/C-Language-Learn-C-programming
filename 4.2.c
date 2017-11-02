#include<stdio.h>
#include<conio.h>
main()
{
	int hight;   
	char name [8];

	printf("Enter name : ");
	scanf("%s",name);
	printf("Enter hight (cm.) : ");
	scanf("%d",&hight);
	printf("Name Hight (cm.)\n");
	printf("%s ",name);
	printf("%d",hight);	
}
