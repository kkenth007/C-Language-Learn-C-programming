#include <stdio.h>
int main()
{
    int i, space, rows, k=0;

    printf("Enter number of rows: ");
    scanf("%d",&rows);
    printf("\n");

    for(i=1; i<=rows; ++i, k=0)
    {
        for(space=1; space<=rows-i; ++space)
        {
            printf(" ");
        }

        while(k != 2*i-1)
        {
            printf("*");
            ++k;
        }

        printf("\n");
    }
    printf("\n");
    
    //Form 2
    
    int M, N, O, P=0;

    printf("Enter number of rows: ");
    scanf("%d",&O);
    printf("\n");
    for(M=1; M<=O; ++M, P=0)
    {
        for(N=1; N<=O-M; ++N)
        {
            printf("  ");
        }

        while(P != 2*M-1)
        {
            printf("*");
            ++P;
        }

        printf("\n");
    }
    printf("\n");
    
    
    //form 3
    
    int A, B, C;

    printf("Enter number of rows: ");
    scanf("%d",&C);
    printf("\n");

    for(A=1; A<=C; ++A)
    {
        for(B=1; B<=A; ++B)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
