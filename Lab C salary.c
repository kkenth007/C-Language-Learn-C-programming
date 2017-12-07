#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
   int num,emid,ot,salary;
   FILE *fptr;
   fptr = fopen("C:\\program.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
	char name_em[99];
	printf(" Enter id EM : ");
	scanf("%d",&emid);
	printf(" Enter Name : ");
	scanf("%s",&name_em);
	printf(" Enter is Salary : ");
	scanf("%d",&salary);
	printf(" Enter OT : ");
	scanf("%d",&ot);
	system("cls");
	printf("\n EM ID : %d",emid);
	printf("\n EM Name : %s\n",name_em);
	fprintf(fptr,"\n EM ID : %d",emid);
	fprintf(fptr,"\n EM Name : %s\n",name_em);
	float sum,tax;
	sum=salary+ot;
	if(sum>=100000){
		tax=(sum*10)/100;
		sum=sum-tax;
	}else if (sum>=70000){
		tax=(sum*7)/100;
		sum=sum-tax;
	}else if (sum>=50000){
		tax=(sum*5)/100;
		sum=sum-tax;
	}else if (sum>=30000){
		tax=(sum*3)/100;
		sum=sum-tax;
	}else if (sum<30000){
		tax=(sum*1)/100;
		sum=sum-tax;
	}else{
		printf("\n Please try again\n");	
	}
	fprintf(fptr," Money all : %d\n",salary);
	fprintf(fptr," OT : %d\n",ot);
	fprintf(fptr," Tax : %.2f\n",tax);
	fprintf(fptr," Salary : %.2f\n",sum);
	fclose(fptr);
	printf(" Money all : %d\n",salary);
	printf(" OT : %d\n",ot);
	printf(" Tax : %.2f\n",tax);
	printf(" Salary : %.2f\n",sum);
	printf(" File Save in to C:\\program.txt");
   return 0;
}
