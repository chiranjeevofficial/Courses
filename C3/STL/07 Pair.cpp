#include<iostream>
#include<conio.h>
#include<utility>
using namespace std;
int main()
{
    pair <int,double> p1(1, 2.5);
    cout<<p1.first<<" "<<p1.second<<endl;
    pair <int,string>p2;
    p2=make_pair(5,"Python");
    cout<<p2.first<<" "<<p2.second<<endl;
    return 0;
}
