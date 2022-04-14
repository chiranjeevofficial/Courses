//8. Write a C++ program to swap values of two int variables
#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<< "Enter two integer number: \n";
    cin>> a >> b;
    c=a;
    a=b;
    b=c;
    cout<< a << " " << b;
    return 0;
}