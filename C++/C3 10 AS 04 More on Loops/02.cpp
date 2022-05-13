//02. Write a C++ program to print all Prime number between two given numbers.
#include<iostream>
using namespace std;
int main()
{
    int a, b, i, j;
    cout<<"Enter range to find all between Prime Number: ";
    cin>>a>>b;
    for(i=a+1;i<=b-1;i++)
    {
        for(j=2;j<=i-1;j++)
            if(i%j==0)
                break;
        if(i==j)
            cout<<i<<", ";
    }
    return 0;
}
