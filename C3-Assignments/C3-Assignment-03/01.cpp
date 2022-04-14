//01. Write a C++ program to print first N natural numbers.
#include<iostream>
using namespace std;
int main()
{
    int n, i;
    cout<< "Enter a number: ";
    cin>>n;
    for(i=1;i<=n;i++)
        cout<< i << " ";
    return 0;
}