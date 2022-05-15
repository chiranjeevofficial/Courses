// demonstration of inline function with default arguments
#include<iostream>
using namespace std;
inline add(int=0,int=0,int=0); //declaration of inline function with default arguments
int main()
{
    int a, b, c;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Sum of: "<<a<<" & "<<b<<" is: "<<add(a,b)<<endl;

    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    cout<<"Sum of: "<<a<<", "<<b<<" & "<<c<<" is: "<<add(a,b,c);
    return 0;
}
add(int x, int y, int z)
{
    return x+y+z;
}
