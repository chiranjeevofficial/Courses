//03. Write a C++ program to print first N terms of Fibonacci series.
#include<iostream>
using namespace std;
int main()
{
    int n, a=-1, b=1, f;
    cout<< "Enter a number: ";
    cin>>n;
    while(n)
    {
        f=a+b;
        a=b;
        b=f;
        cout<<f<<endl;
        n--;
    }
    return 0;
}
