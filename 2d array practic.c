#include<stdio.h>
int main()
{
    int i,j;
    int a[3][3],b[3][3],c[3][3];
    printf("Enter the element of A :\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("A [%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("A=  \n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",a[i][j]);

        }
        printf("\n ");
    }

        printf("Enter the element of B:\n");

        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                printf("b [%d][%d] = ",i,j);
                scanf("%d",&b[i][j]);
            }
        }
        printf("B=  \n");
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {

                printf("%d ",b[i][j]);

            }
            printf("\n ");


        }
       for(i=0;i<3;i++)
       {
           for(j=0;j<3;j++)
           {
               c[i][j]=a[i][j]+ b[i][j];
           }

       }
       printf("a+b=\n");
       for(i=0;i<3;i++)
       {
           for(j=0;j<3;j++)
           {
             printf("\t ");
              printf("%d",c[i][j]);
           }
            printf("\n ");
       }



          getch();
    }
