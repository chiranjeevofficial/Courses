#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;
int main()
{
    vector <int>v={10,20,30};
    vector <int>::iterator it;
    v.push_back(40);
    for(it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    v.insert(it,50);
    for(it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    v.erase(it-2);
    for(it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    v.insert(it-2,44);
    for(it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;

    v.push_back(12);
    v.push_back(34);
    v.push_back(88);
    v.push_back(98);
    for(it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;

    v.shrink_to_fit();
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Size: "<<v.size()<<endl;

    getch();
    return 0;
}
