#include<iostream>
using namespace std;
int main()
{
 int num1,num2,num3;
    cout<<"Enter your numer1:";
    cin>>num1;
    cout<<"Enter your numer2:";
    cin>>num2;
    cout<<"Enter your numer3:";
    cin>>num3;
if(num1>num2&&num1>num3)
{
    cout<<"large number is:"<<num1;
}
else if(num2>num1&&num2>num3)
{
    cout<<"large number is:"<<num2;
}
else if(num3>num1&&num3>num2)
{
    cout<<"large number is:"<<num3;
}
else
{
   cout<<"the number is equal.";
}
    }
