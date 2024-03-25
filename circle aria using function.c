#include<stdio.h>
double aria(double radius)
{
    return (3.1416*radius*radius);
}
double main()
{
    double area ,radius;
    printf("enter your radius: ");
    scanf("%lf",&radius);
    printf(" circle aria is :%lf",aria( radius));
}
