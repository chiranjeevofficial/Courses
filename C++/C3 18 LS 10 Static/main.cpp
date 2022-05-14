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
    cout<<i2.a;    //error a is not declare in scope
    return 0;
}
