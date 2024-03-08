#include<stdio.h>
int main()
{
    float radius,volume,area;
    const float pi=3.1416;
    printf(" enter the radius of the sphere: ");
    scanf("%f",&radius);
    volume=(4*pi*radius*radius*radius)/3;
    area=4*pi*radius*radius;
    printf("volume of the sphere :%2f\n",volume);
    printf("surface area of the sphere %2f\n",area);
    return 0;
}
