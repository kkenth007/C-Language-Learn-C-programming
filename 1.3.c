#include<stdio.h>
int main()
{
int v;
printf("Enter an Number :");
scanf("%d",&v);;
printf("%d is an %s number.\n",v,((v%2)==1)?"odd" : "even"); // even 2,4 > odd =1,3
}
