//08. Write a C++ program to print octal of a given decimal number.
#include<iostream>
using namespace std;
int main()
{
    int n, rem, oct=0, i=1;
    cout<<"Decimal Number: ";
    cin>>n;
    while(n)
    {
        rem=n%8;
        oct=oct+(rem*i);
        i=i*10;
        n=n/8;
    }
    cout<<"Octal Number: "<<oct;
    return 0;
}
