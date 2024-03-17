#include<stdio.h>
int main()
{
    double x1,x2,a,b,c,d;
    printf("enter your number a,b,c:\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    d=sqrt(b*b-4*a*c);
    x1=(-b+d)/2*a;
    x2=(-b-d)/2*a;
    printf("enter your x1= %lf \n",x1);
    printf("enter your x2= %lf \n",x2);
    return 0;


}
