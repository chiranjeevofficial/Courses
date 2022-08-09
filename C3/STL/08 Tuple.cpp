#include<iostream>
#include<conio.h>
#include<tuple>
using namespace std;
int main()
{
    tuple <int,string,double> t1(1,"Rahul",5.6);
    tuple <int,string,double> t2;
    t2=make_tuple(2,"Naeem",6.9);
    cout<<get<0>(t1)<<" "<<get<1>(t1)<<" "<<get<2>(t1)<<endl;
    return 0;
}
