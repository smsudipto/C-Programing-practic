#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],C[10][10],result[10][10],c1,r1,c2,r2,i,j,k;
    int sum=0;
    printf("enter your first row and colam:\n");
    scanf("%d%d",&r1,&c1);
    printf("enter your second row and colam :\n");
    scanf("%d%d",&r2,&c2);

    printf("putting A marticx element :\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("\nA[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("enter your A martix =\n\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%10d",A[i][j]);
        }
        printf("\n");
    }

    printf("putting b marticx element :\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("\nB[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
    }

    printf("enter your B martix =\n\n");
    for(i=0; i<r2 ; i++)
    {
        for(j=0; j<c2; j++)
        {

            printf("%10d",A[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<r2 ; i++)
    {
        for(j=0; j<c2; j++)
        {
            {
                for(k=0; k<c1; k++)
                    C[i][j]=A[i][j]*B[i][j];
                result[i][j]=sum+C[i][j];

            }

        }

    }
    printf("martix multification is =\n\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%10d",result[i][j]);
        }
        printf("\n");
    }

    getch();


}
