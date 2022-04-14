//1. Write a C++ program to check whether a given number is divisible by 7 or not.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< "Enter a number: ";
    cin>> n;
    if(n%7==0)
        cout<< n << " is divisible by 7";
    else
        cout<< n << " is not divisible by 7";
    return 0;
}