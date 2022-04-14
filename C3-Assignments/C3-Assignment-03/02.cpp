//02. Write a C++ program to print first N natural numbers in reverse order.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< "Enter a number: ";
    cin>>n;
    for(n;n;n--)
        cout<< n << " ";
    return 0;
}