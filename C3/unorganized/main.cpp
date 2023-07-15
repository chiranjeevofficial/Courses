#include<iostream>
#include<conio.h>
using namespace std;
class Box
{
private:
    int l, b, h;

public:
    void setter()
    {
        cout<<"Enter length, breadth, height: "<<endl;
        cin>>l>>b>>h;
    }
    void getter()
    {
        cout<<endl;
        cout<<"Box length is: "<<l<<endl;
        cout<<"Box breadth is: "<<b<<endl;
        cout<<"Box height is: "<<h<<endl;
    }
};

int main()
{
    Box b1;
    b1.setter();
    b1.getter();
    getch();
    return 0;
}
