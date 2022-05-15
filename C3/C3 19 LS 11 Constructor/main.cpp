#include<iostream>
using namespace std;
class complex
{
private:
    int a, b;
public:
    complex()
    {
        a=0;
        b=0;
    }
    void setData (int x, int y) { a=x; b=y; }
    void showData() { cout<<a<<"+"<<b<<"i"<<endl; }
};
int main()
{
    complex c1, c2;
    //  c1.setData(5,6);
    c2.setData(3,4);
    c1.showData();
    c2.showData();
}
