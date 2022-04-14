//04. Write a C++ program to print first N odd natural number in reverse order
#include<iostream>
using namespace std;
int main()
{
    int n, i;
    cout<< "Enter a number: ";
    cin>>n;
    n*=2;
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
            cout<< i << " ";
    }
    return 0;
}