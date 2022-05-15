//10. Write a C++ program to calculate x power y, where values of x and y are given by user.
#include<iostream>
using namespace std;
int main()
{
    int x, y, expo=1,cnt=0;
    cout<<"Enter a number & their exponent: ";
    cin>>x>>y;
    while(y)
    {
        expo=expo*x;
        y--;
        cnt++;
    }
    cout<<x<<" ^ "<<cnt<<" is: "<<expo;
    return 0;
}
