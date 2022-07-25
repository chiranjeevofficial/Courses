#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i, n[5]={10,20,44,89,90};
    for(i=0;i<5;i++)
    {
        cout<<n[i]<<", ";
    }
    cout<<endl;
    for(int x:n)
        cout<<x<<" ";
    return 0;
}