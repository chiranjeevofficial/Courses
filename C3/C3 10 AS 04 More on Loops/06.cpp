//06. Write a C++ program to find the highest value digit in a given number.
#include<iostream>
using namespace std;
int main()
{
    int n, temp, i, hgst=0;
    cout<<"Enter a number: ";
    cin>>n;
    temp=n;
    while(n)
    {
        if(n%10==9)
        {
            hgst=n%10;
            break;
        }
        for(i=hgst;i<9;i++)
        {
            if(n%10==i)
                hgst=n%10;
        }
        n=n/10;
    }
    cout<<"Highest value digit in "<<temp<<" is: "<<hgst;
    return 0;
}
