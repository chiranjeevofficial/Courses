//10. Write a C++ program to calculate the sum of digits in a given number.
#include<iostream>
using namespace std;
int main()
{
    int n, sum=0;
    cout<< "Enter a number: ";
    cin>>n;
    cout<< "Sum of digits in " << n << " is: ";
    while(n)
    {
        sum=n%10+sum;
        n/=10;
    }
    cout<<sum;
    return 0;
}