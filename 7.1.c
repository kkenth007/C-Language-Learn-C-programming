#include<stdio.h>
main()
{
	int size=5,i,sum;
	float avg;
	printf("\n Enter array size : ");
	int array[size];
	printf(" Enter array element\n\n");
	for (i=0;i<size;i++)
	{
		printf(" Number %d : ", i+1);
		scanf("%i",&array[i]);
		sum=(array[0] + array[1]+array[2]+array[3]+array[4]);
		avg=sum/size;
	}
	printf("\n Average is : %.2f ",avg);
}
