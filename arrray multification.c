#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int i,j,r1,r2,c1,c2;
    printf("enter your 1st row and colam:");
    scanf("%d %d",&r1,&c1);

    printf("enter your 2nd row and colam:");
    scanf("%d %d",&r2,&c2);
    while(c1!=r2)
    {
        printf("Error,the 1st matrix colam and 2nd matrix row is not match.so,please write the colam and row number again.\n ");

        printf("enter your 1st row and colam:");
        scanf("%d %d",&r1,&c1);

        printf("enter your 2nd row and colam:");
        scanf("%d %d",&r2,&c2);

         }

         printf("enter the 1st element of A:\n");
         for(i=0;i<r1;i++)
         {
             for(j=0;j<c1;j++)
             {
                printf("a[%d][%d]=",i,j);
             scanf("%d",&a[i][j]);
             }
         }
         printf("Martix  A =\n");
         for(i=0;i<r1;i++)
         {
             for(j=0;j<c1;j++)
             {
                printf("%10d",a[i][j]);

             }
             printf("\n");
         }

printf("enter the 1st element of B\n:");
         for(i=0;i<r1;i++)
         {
             for(j=0;j<c1;j++)
             {
                printf("b[%d][%d]=",i,j);
             scanf("%d",&b[i][j]);
             }
         }
         printf("Martix  B =\n");
         for(i=0;i<r2;i++)
         {
             for(j=0;j<c2;j++)
             {
                printf("%10d",b[i][j]);

             }
             printf("\n");
         }

         for(i=0;i<r2;i++)
         {
             for(j=0;j<c2;j++)
             {
                c[i][j]=a[i][j]*b[i][j];

             }

         }

         printf("martix multification =\n");
         for(i=0;i<r2;i++)
         {
             for(j=0;j<c2;j++)
             {
               printf("%10d",c[i][j]);

             }
             printf("\n");

         }




}
