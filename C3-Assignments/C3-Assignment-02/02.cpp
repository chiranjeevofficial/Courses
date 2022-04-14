//2. Write a C++ program to check whether a triangle is right angled triangle or not. Takes lengths of the sides from the user.
#include<iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout<< "Enter three angle of triangle: ";
    cin>> a >> b >> c;
    if( a*a == b*b + c*c)
        cout<< "This is right angled Triangle";
    else
        cout<< "This is not right angled Triangle";
    return 0;
}