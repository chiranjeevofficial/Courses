//06. Write a C++ program to print table of user’s choice.
#include<iostream>
using namespace std;
int main()
{
    int n, i;
    cout<< "Enter a number: ";
    cin>>n;
    for(i=1;i<=10;i++)
        cout<< n << " x " << i << " = " << i*n << "\n";
    return 0;
}