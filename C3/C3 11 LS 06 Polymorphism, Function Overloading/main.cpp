#include<iostream>
#include<conio.h>
using namespace std;
int area(int);
int area(int,int);
int main()
{
    int a=12;
    float areaOfCircle;
    areaOfCircle = area(a);
    cout<<"Area of circle is: "<<areaOfCircle<<endl;

    int l=5, b=3;
    int A = area(l,b);
    cout<<"Area of rectangle is: "<<A<<endl;
    return 0;
}

int area(int x)
{
    return 3.14*x*x;
}

int area(int x, int y)
{
    return x*y;
}
