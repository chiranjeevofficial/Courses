//01. Write a C++ program to check whether a given number is Prime or not.
// !!! - UNDER PROCESS - !!! //
#include<iostream>
using namespace std;
int main()
{
    int n, i, j, prm=0;
    cout<< "Enter a number: ";
    cin>>n;
    for(i=2;i<=n;i++)
    {
        for(j=2;j<=10;j++)
        {
            if(i*j==n)
            {
                prm=1;
                break;
            }
        break;
        }
    break;
    }
    if(prm)
        cout<< n << " is not prime number";
    else
        cout<< n << " is prime number";
    return 0;
}
