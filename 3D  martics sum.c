

#include<stdio.h>
int main()
{
    int i,j;
    int a[2][2],b[2][2],c[2][2];
    printf("Enter the element of A :\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("A [%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("A=  \n");

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d ",a[i][j]);

        }
        printf("\n ");
    }

        printf("Enter the element of B:\n");

        for(i=0; i<2; i++)
        {
            for(j=0; j<2; j++)
            {
                printf("B [%d][%d] = ",i,j);
                scanf("%d",&b[i][j]);
            }
        }
        printf("B=  \n");
        for(i=0; i<2; i++)
        {
            for(j=0; j<2; j++)
            {

                printf("%d ",b[i][j]);

            }
            printf("\n ");


        }
       for(i=0;i<2;i++)
       {
           for(j=0;j<2;j++)
           {
               c[i][j]=a[i][j]+ b[i][j];
           }

       }
       printf("a+b=\n");
       for(i=0;i<2;i++)
       {
           for(j=0;j<2;j++)
           {
             printf("\t ");
              printf("%d",c[i][j]);
           }
            printf("\n ");
       }



          getch();
    }
