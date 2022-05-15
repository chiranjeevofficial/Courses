#include<iostream>
using namespace std;
int f1(int, int);
int main()
{
    int a=5, b=6, c=0;
    c=f1(a,b);
    cout<<"Sum of "<<a<<" & "<<b<<" is: "<<c;
    return 0;
}
int f1(int x, int y)
{
    return x+y;
}
