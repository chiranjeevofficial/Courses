/*
01. Define a class complex to represents a complex number. Declare instance member
    variables to store real and imaginary part of a complex number, also define
    instance member functions to set values of complex number and print values
    of complex number.
*/
#include<iostream>
using namespace std;
class complex
{
    private:
        int real;
        int img;
    public:
        void input(int x, int y)
        {
            real = x;
            img = y;
        }
        void set()
        {
            cout<<"Enter real part of complex number: ";
            cin>>real;
            cout<<"Enter imaginary part of complex number: ";
            cin>>img;
        }
        void output()
        {
            cout<<real<<"+"<<img<<"i"<<endl;
        }
};
int main()
{
    complex c1, c2, c3;
    c1.input(5,4);
    c1.output();
    c2.input(2,5);
    c2.output();
    c3.set();
    c3.output();
    return 0;
}
