// demonstration of inline keyword with square function
#include<iostream>
inline int sqre(int); //declaration of inline function
using namespace std;
int main()
{
    int x, y;
    cout<<"Enter a numbers: ";
    cin>>x;
    cout<<"Square of "<<x<<" is: "<<sqre(x);
    return 0;
}
int sqre(int x)
{
    return x*x;
}
