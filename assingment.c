#include<stdio.h>
int main()
{
    int s[100],t[100];
    scanf("%s %s",&s,&t);
    strcat(t,s);
    printf("%s\n",t);
    return 0;
}
