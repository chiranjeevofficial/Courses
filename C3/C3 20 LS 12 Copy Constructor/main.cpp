#include<iostream>
using namespace std;
class complex
{
private:
    int a, b;
public:
    // complex() {} //default constructor > There are only non-parameterized constructor make
    complex() { a=0; b=0; } //non-parameterized constructor
    complex(int x, int y) { a=x; b=y; } //parameterized constructor
    complex(int x) { a=x; b=0; } //single argument constructor
    complex(complex &c) { a=c.a; b=c.b; } //copy constructor
    void setData(int x, int y) { a=x; b=y; }
    void showData() { cout<<a<<"+"<<b<<"i"<<endl; }
};
int main()
{
    complex c1, c2(3,4), c3(7), c4=c2, c5;
    c5.setData(5,6);
    c1.showData();
    c2.showData();
    c3.showData();
    c4.showData();
    c5.showData();
}
