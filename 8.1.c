#include<stdio.h>
#include<string.h>
main()
{
	char s1[30],s2[30];
	int i,len,j,a;
	printf("Enter Your string :");
	scanf("%s",&s1);

	len=strlen(s1); //check count all index
	j=(len-1);

	for(i=0;i<=len;i++){
		s2[i]=s1[j];
		j--;
	}
	printf(": %s : ",s2);
	a=strcmp(s1,s2);
	if (a== 0)
      printf("String is a palindrome.\n");
   else 
    printf("String is not a palindrome.\n");
}
