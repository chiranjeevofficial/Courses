// Program to find sum of elements in a given array
#include<iostream>
#include<conio.h>
using namespace std;
int sumOfArray(int a[], int n)
{
    int i, sum = 0;
    for(i=0;i<n;i++)
    {
        sum = sum + a[i];
    }
    return sum;
}
int main()
{
    int ary[]={12,24,36,48};
    int n = sizeof(ary) / sizeof(ary[0]); //int type 4 byte = 4*4=16 / 
    //cout<<n;
    cout<<"Sum of +ve integer elements is: "<<sumOfArray(ary,n)<<endl;
}