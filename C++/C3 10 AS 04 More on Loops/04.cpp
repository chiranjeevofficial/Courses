//04. Write a C++ program to calculate LCM of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int a, b, i;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    for(i=1;i<=a*b;i++)
        if(i%a==0&&i%b==0)
            break;
    cout<<"LCM of "<<a<<" & "<<b<<" is: "<<i;
    return 0;
}
