//06. Write a C++ program to check whether a given number is positive, negative or zero.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< "Enter a number: ";
    cin>> n;
    if(n>0)
        cout<< n << " is positive number";
    if(n<0)
        cout<< n << " is negative number";
    if(n==0)
        cout<< n << " is zero";
    return 0;
}