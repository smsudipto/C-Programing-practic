
#include<stdio.h>
int main()
{
    int i,sum=0, mark[]={1,2,3,4,6};

    for(i=0;i<=5;i++)
    {
        sum = sum+ mark[i];
    }
        printf("sum is: %d\n",sum);
        printf("avareg number is :%0.2f",(float)sum/5);



}
