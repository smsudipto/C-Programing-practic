#include<stdio.h>
int main()
{
    int i,j;
    int a[3][4],b[3][4];
    printf("Enter the element of A :\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("A [%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("A=  \n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ",a[i][j]);

        }
        printf("\n ");
    }

        printf("Enter the element of B:\n");

        for(i=0; i<3; i++)
        {
            for(j=0; j<4; j++)
            {
                printf("B [%d][%d] = ",i,j);
                scanf("%d",&b[i][j]);
            }
        }
        printf("B=  \n");
        for(i=0; i<3; i++)
        {
            for(j=0; j<4; j++)
            {

                printf("%d ",b[i][j]);

            }
            printf("\n ");


        }
          getch();
    }
