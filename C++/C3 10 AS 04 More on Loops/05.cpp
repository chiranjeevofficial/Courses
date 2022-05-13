//05. Write a C++ program to calculate HCF of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int a, b, HCF;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    for(HCF=a<b?a:b;HCF>=1;HCF--)
        if(a%HCF==0&&b%HCF==0)
            break;
    cout<<"HCF of "<<a<<" & "<<b<<" is: "<<HCF;
    return 0;
}
