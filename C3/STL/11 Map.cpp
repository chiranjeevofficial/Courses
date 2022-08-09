#include<iostream>
#include<conio.h>
#include<map>
#include<utility>
using namespace std;
int main()
{
    map<int,string> m1;
    m1.insert(make_pair(1,"Python"));
    m1.insert(make_pair(2,"C Plus Plus"));
    m1.emplace(3,"HTML & CSS");
    map<int,string>::iterator it;
    for(it=m1.begin();it!=m1.end();it++)
        cout<<it->first<<" "<<it->second<<endl;
    cout<<endl;
    for(it=m1.begin();it!=m1.end();it++)
        cout<<it->first<<" "<<m1.at(it->first)<<endl;
    cout<<endl;
    return 0;
}
