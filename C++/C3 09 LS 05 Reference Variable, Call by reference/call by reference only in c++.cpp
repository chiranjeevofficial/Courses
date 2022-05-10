#include<iostream>
using namespace std;
void f3(int &);
int main()
{
    int a=5, temp;
    temp=a;
    f3(a);
    cout<<"Square of "<<temp<<" is: "<<a;
    return 0;
}
void f3(int &x)
{
    x=x*x;
}
