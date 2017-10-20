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


/*Thanks for comscidev.com Knowlead C
http://www.comscidev.com/375-%E0%B8%A0%E0%B8%B2%E0%B8%A9%E0%B8%B2%E0%B8%8B%E0%B8%B5-%E0%B8%84%E0%B9%88%E0%B8%B2%E0%B8%A1%E0%B8%B2%E0%B8%81%E0%B8%97%E0%B8%B5%E0%B9%88%E0%B8%AA%E0%B8%B8%E0%B8%94/*/
