#include<iostream>
#include<conio.h>
#include<set>
using namespace std;
int main()
{
    set<int>s;
    s.insert(10);
    s.emplace(40);
    s.insert(20);
    s.emplace(30);
    set<int>::iterator it;
    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    s.insert({15,33,9,22});
    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    s.erase(20);
    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    it=s.begin();
    it++;
    s.erase(it,s.end());
    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    return 0;
}
