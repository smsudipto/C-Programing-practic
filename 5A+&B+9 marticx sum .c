#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],C[10][10],row,col,i,j,n1,secRow,secCol,n2;
    int sum=0;
    printf("please,enter your row number : ");
    scanf("%d",&row);
    printf("please,enter your col number :");
    scanf("%d",&col);

    printf("enter your marticx element :\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }

    }

     printf("enter your A marticx =:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%10d ",A[i][j]);

        }
        printf("\n ");
    }
     printf("please,enter your secRow number : ");
    scanf("%d",&secRow);
    printf("please,enter your secCol number :");
    scanf("%d",&secCol);

    printf("enter your marticx element :\n");
    for(i=0; i<secRow; i++)
    {
        for(j=0; j<secCol; j++)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }

    }

     printf("enter your B marticx =:\n");
    for(i=0; i<secRow; i++)
    {
        for(j=0; j<secCol; j++)
        {
            printf("%10d ",B[i][j]);

        }
        printf("\n ");
    }
    for(i=0; i<secRow; i++)
    {
        for(j=0; j<secCol; j++)
        {
           C[i][j]=5*A[i][j]+7*B[i][j]+9;
           sum=sum+C[i][j];

        }
        printf("\n ");
    }
    printf("sum is %d",sum);
}




