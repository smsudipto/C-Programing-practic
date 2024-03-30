
#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if((ch>='0'&&ch<='9') || (ch>'a'&&ch<='f') ||(ch>='A'&&ch<='F'))
{
    printf(" Hexadicimal Digit");
}

return 0;
}
