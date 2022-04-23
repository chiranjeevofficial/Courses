//09. Write a C++ program to find the greater among in 3 given numbers.
#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<< "Enter three numbers: ";
    cin>> a >> b >> c;
    if(a>b&&a>c)
        cout<< a << " is Greater";
    else if(b>a&&b>c)
        cout<< b << " is Greater";
    else
        cout<< c << " is Greater";
        return 0;
}