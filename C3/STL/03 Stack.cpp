#include<iostream>
#include<conio.h>
#include<stack>
using namespace std;
int main()
{
    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(40);
    s.push(35);
    s.push(65);
    s.push(50);
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}