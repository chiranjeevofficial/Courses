/*
int big(int a, int b){
    if(a>b)
        return a;
    else
        return b;
 }
float big(float a, float b){
    if(a>b)
        return a;
    else
        return b;
 }
*/
#include<iostream>
using namespace std;
template <typename X>
X big(X a, X b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    cout<<big(45,9)<<endl;
    cout<<big(5.4,6.6)<<endl;
    cout<<big("APPLE","apple")<<endl;
}
