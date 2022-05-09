#include<iostream>
using namespace std;
int main()
{
    int n, rem=0, bin=0, x;
    cout<<"Enter a number: ";
    cin>>n;
    x=n;
    while(n)
    {
        rem=rem*10;
        rem=rem+n%2;
        n=n/2;
    }
    while(rem)
    {
        bin=bin+rem%10;
        bin=bin*10;
        rem=rem/10;
    }
    cout<<"decimal of "<<x<<" in binary is: "<<bin;
    return 0;
}
