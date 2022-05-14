#include<iostream>
using namespace std;
class item
{
    public:
        int a, b;
        static int k;
};
int main()
{
    item i1, i2;
    i1.a=5;
    cout<<i2.a<<endl;
    i1.k=10;    //this is technically are possible
    cout<<i2.k; //error because k is not define
    return 0;
}
