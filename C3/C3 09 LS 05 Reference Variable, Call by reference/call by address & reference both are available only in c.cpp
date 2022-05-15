#include<iostream>
using namespace std;
void f2(int*);
int main()
{
    int a=5, temp;
    temp=a;
    f2(&a); //call by address & reference
    cout<<"Square of "<<temp<<" is: "<<a;
    return 0;
}
void f2(int *x)
{
    *x=(*x)*(*x);
}
