
#include<stdio.h>
int main()
{
    int i,j,k;
    int A[10][10],B[10][10],C[10][10],row,col,r2,c2;
    int sum;
    printf("enter your row:");
    scanf("%d",&row);
    printf("enter your col:");
    scanf("%d",&col);



    printf("Enter the element of A :\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A [%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("A=  \n");

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",A[i][j]);

        }
        printf("\n ");
    }

    printf("enter your row2:");
    scanf("%d",&r2);
    printf("enter your col2:");
    scanf("%d",&c2);



    printf("Enter the element of B :\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("B [%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    printf("B=  \n");

    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ",B[i][j]);

        }
        printf("\n ");
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            sum = 0;
            for(k=0; k<col; k++)
                sum = sum+A[i][k]*B[k][j];
            C[i][j] = sum;
        }
    }
    printf("Result:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%10d ",C[i][j]);
        }
        printf("\n");
    }
    return 0;

}
