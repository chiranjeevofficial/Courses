//05. Write a C++ program to compare two numbers.
#include<iostream>
using namespace std;
int main()
{
    int a, b;            
    cout<< "Enter two numbers: ";
    cin>> a >> b;
    if(a==b)
        cout<< "Both are Equal";
    if(a<b)
        cout<< a << " is less than " << b;
    if(a>b)
        cout<< a << " is greater than " << b;
    return 0;
}