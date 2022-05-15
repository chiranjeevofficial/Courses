//08. Write a C++ program to calculate factorial of a number.
#include<iostream>
using namespace std;
int main()
{
    int n, fact=1;
    cout<< "Enter a number: ";
    cin>>n;
    cout<< "Factorial of " << n << " is: ";
    for(n;n;n--)
        fact*=n;
    cout<< fact;
}