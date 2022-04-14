//07. Write a C++ program to calculate sum of squares of first N natural numbers.
#include<iostream>
using namespace std;
int main()
{
    int n, sum=0;
    cout<< "Enter a number: ";
    cin>>n;
    cout<< "Sum of first " << n << " natural number square is: ";
    for(n;n;n--)
        sum=sum+n*n;
    cout<<sum;
    return 0;
}