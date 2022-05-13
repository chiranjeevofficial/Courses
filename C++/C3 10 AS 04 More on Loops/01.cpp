//01. Write a C++ program to check whether a given number is Prime or not.
#include<iostream>
using namespace std;
int main()
{
    int n, i;
    cout<<"Enter a number: ";
    cin>>n;
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
            break;
    }
    if(i==n)
        cout<<n<<" is Prime Number";
    else
        cout<<n<<" is Not Prime Number";
    return 0;
}
