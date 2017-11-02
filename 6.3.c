#include<stdio.h>
int main()
{   
    int loop;
    int input;
    int i;
    int max,sum;
	float avg; 
	int count=0;
     
    printf(" Enter number for loop : ");
    scanf("%d", &loop);
    printf("\n");
     
    for(i = 0; i < loop; i++)
    {
        printf(" Number #%d : ", i+1);
        scanf("%d", &input);
        sum=sum+input;
        count=5;
        if(i==0 || input > max)
        {
            max = input;
        }
    }
    
    avg=sum/count;
    
    printf("\n AVG is %.2f\n", avg);
    printf("\n Sum is %d\n", sum);
    printf("\n Maximum is %d\n", max);
     
    return 0;
}
