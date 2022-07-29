#include<iostream>
#include<conio.h>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int,vector<int>> p;
    p.push(10);
    p.push(50);
    p.push(30);
    p.push(40);
    p.push(20);
    cout<<p.top()<<endl;
    // if you store integer value on it then highest value is on top.
    p.pop();
    cout<<p.top();
    getch();
    return 0;
}
