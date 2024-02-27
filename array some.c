
#include<stdio.h>
int main()
{
    int i,sum=0, mark[5];
    mark[0]=10;
    mark[2]=20;
    mark[3]=30;
    mark[4]=40;
    mark[5]=50;
    for(i=0;i<=5;i++)
    {
        sum = sum+ mark[i];
    }
        printf("sum is: %d\n",sum);
        printf("avareg number is :%d",sum/5);



}
