//08. Write a C++ program to check whether a given year is a leap year or not.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< "Enter a year: ";
    cin>> n;
    if(n%4==0)
        cout<< n << " is a leap year";
    else        
        cout<< n << " is not a leap year";
    return 0;
}