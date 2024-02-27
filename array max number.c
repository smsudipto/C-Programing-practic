#include<stdio.h>
int main()
{
    int i,max, n,num[100];
    printf("Enter how many number :");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&num[i]);
    }
      max=num[0];

    for(i=0;i<=n;i++)
    {
        if(max<num[i])
            max=num[i];

    }
    printf("Maximum =%d\n",max);
    return 0;
}
