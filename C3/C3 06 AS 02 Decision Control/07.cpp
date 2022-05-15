//07. Write a C++ program to check whether a given number is even or odd.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< "Enter a number: ";
    cin>> n;
    if(n%2==0)
        cout<< n << " is even number";
    else        
        cout<< n << " is odd number";
    return 0;
}