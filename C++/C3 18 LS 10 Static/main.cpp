#include<iostream>
using namespace std;
class item
{
    public:
        int a, b;   //instance member variable declaration
        static int k;   //static member variable declaration
};
int item::k=1;  //definition of static member variable
int main()
{
    item i1, i2;
    i1.a=5;
    cout<<i2.a<<endl;
    i1.k=10;
    cout<<i2.k;
    return 0;
}
