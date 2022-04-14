//09. Write a C++ program to count digits in a given number.
#include<iostream>
using namespace std;
int main()
{
    int n, cnt=0;
    cout<< "Enter a number: ";
    cin>>n;
    while(n)
    {
        n/=10;
        cnt++;
    }
    cout<< "Given number have: " << cnt << " digits";
    return 0;
}