#include<iostream>
using namespace std;
int main()
{
 char ch1,ch2,ch3;
    cout<<"Enter your character1:";
    cin>>ch1;
    cout<<"Enter your character2:";
    cin>>ch2;
    cout<<"Enter your character3:";
    cin>>ch3;
if(ch1>='a'&&ch1<='z')
{
    cout<<" small letter";
}
else if(ch1>='A'&&ch1<='Z')
{
    cout<<"capital letter";
}

else
{
   cout<<"it is not small or capitall leter";
}
    }

