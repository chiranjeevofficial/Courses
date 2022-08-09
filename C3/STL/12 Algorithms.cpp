#include<algorithm>
#include<iostream>
#include<conio.h>
#include<random>
#include<string>
#include<vector>
using namespace std;
int main()
{
    vector <int>v1={20,50,10,10,40,30,30,20,70};
    vector<int>::iterator it;
    for(it=v1.begin();it!=v1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    it=adjacent_find(v1.begin(),v1.end());
    cout<<"Element: "<<*it<<endl;
    it=adjacent_find(it+1,v1.end());
    cout<<"Element: "<<*it<<endl;

    for(it=v1.begin();it!=v1.end();it++)
        if(*it<100)
            continue;
        else
            break;
        if(it==v1.end())
            cout<<"All values are < 100";
        else
            cout<<"Not all values are < 100";
    cout<<endl;

    if(all_of(v1.begin(),v1.end(),[](int e){return e<100;}))
        cout<<"All values are < 100";
    else
        cout<<"Not all values are < 100";
    cout<<endl;

    if(any_of(v1.begin(),v1.end(),[](int e){return e<5;}))
        cout<<"At least one value is < 5";
    else
        cout<<"None of the values is < 5";
    cout<<endl;

    sort(v1.begin(),v1.end());
    for(it=v1.begin();it!=v1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    sort(v1.begin(),v1.end(),greater<int>());
    for(it=v1.begin();it!=v1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    if(binary_search(v1.begin(),v1.end(),49))
        cout<<"Found 49";
    else
        cout<<"Not Found 49";
    cout<<endl;

    it=max_element(v1.begin(),v1.end());
    cout<<"Max Value is: "<<*it<<endl;
    it=min_element(v1.begin(),v1.end());
    cout<<"Min Value is: "<<*it<<endl;

    shuffle(v1.begin(),v1.end(),default_random_engine(0));
    for(it=v1.begin();it!=v1.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    return 0;
}
