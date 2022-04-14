//6. Write a C++ program to calculate volume of a cuboid. 
#include<iostream>
using namespace std;
int main()
{
    float l, w, h;
    cout<< "Enter length, width & height of Cuboid: ";
    cin>> l >> w >> h;
    cout<< "Volume of Cubid is: " << l*w*h;
    return 0;
}