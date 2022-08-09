#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    string s="Hello_I_am_Chiranjeev";
    cout<<s<<endl;
    //s.erase(11);
    //Hello_I_am_Chiranjeev
    //Hello_I_am_

    //s.erase(8,9);
    //Hello_I_am_Chiranjeev
    //Hello_I_jeev

    //s.erase('C'); //error

    //s.append("_Kashyap");
    //Hello_I_am_Chiranjeev
    //Hello_I_am_Chiranjeev_Kashyap

    //s+="_Kashyap";
    //Hello_I_am_Chiranjeev
    //Hello_I_am_Chiranjeev_Kashyap

    //s.insert(5,"_&_Namaste");
    //Hello_I_am_Chiranjeev
    //Hello_&_Namaste_I_am_Chiranjeev

    //cout<<s.front();
    //Hello_I_am_Chiranjeev
    //H

    //s.pop_back();
    //cout<<s<<endl;
    //Hello_I_am_Chiranjeev
    //Hello_I_am_Chiranjee

    //char str[50];
    //strcpy(str,s.c_str());
    //cout<<str<<endl;
    //Hello_I_am_Chiranjeev
    //Hello_I_am_Chiranjeev

    //string :: iterator it;
    //for(it=s.begin();it!=s.end();it++)
    //    cout<<*it;
    //Hello_I_am_Chiranjeev
    //Hello_I_am_Chiranjeev

    return 0;
}
