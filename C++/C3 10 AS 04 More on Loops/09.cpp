//09. Write a C++ program to reverse a number.
#include<iostream>
using namespace std;
int main()
{
    int n, rev=0, temp;
    cout<<"Enter a Number: ";
    cin>>n;
    temp=n;
    while(n)
    {
        rev=n%10+rev*10;
        n/=10;
    }
    cout<<"Reverse Number: "<<rev;
    return 0;
}
