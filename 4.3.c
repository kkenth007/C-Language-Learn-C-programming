#include<stdio.h>
#include<conio.h>
int main()
{ 
    int loop=5;
    int input;
    int i;
    int max,sum;
	float avg; 
	int count=0;
    printf(" Enter 5 number.\n");
    printf("\n");
    for(i = 0; i < loop; i++)
    {
        printf(" Number %d : ", i+1);
        scanf("%d", &input);
        sum=sum+input;
        count=5;
    }
    avg=sum/count;
    printf("\n AVG is %.2f\n", avg);
    return 0;
}
