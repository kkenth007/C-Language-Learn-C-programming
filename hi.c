#include<stdio.h>
main(){
	int array[6]={5,10,15,20,25,30};
	int i,index5;
	index5= array[5];
	array[5] = array[4];
	array[4] = array[3];
	array[3] = array[2];
	array[2] = array[1];
	array[1] = array[0];
	array[0] = index5;
	
	for(i=0;i<6;i++){
		printf("%d ",array[i]);
	}
}

