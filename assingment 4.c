#include<stdio.h>
int main()
{
    int N,count =0;
    float weight,height,bmi;
    printf("enter the number of boys:");
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        printf("enter the weight and height of boy%d:",i);
        scanf("%f%f",&weight,&height);
        bmi=weight/pow(height,2);
        if(bmi<=18.4)
            count++;
    }
    printf("the number of underweight boys is :%d\n",count);
    return 0;


}
