//07. Write a C++ program to print binary of a given decimal number.
#include<iostream>
using namespace std;
int main()
{
    int n, rem, bin=0, i=1;
    cout<<"Decimal Number: ";
    cin>>n;
    while(n)
    {
        rem=n%2;
        bin=bin+(rem*i);
        i=i*10;
        n=n/2;
    }
    cout<<"Binary  Number: "<<bin;
    return 0;
}
