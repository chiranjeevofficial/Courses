//3. Write a C++ program to check whether a given number is a valid octal number or not.
#include<iostream>
using namespace std;
int main()
{
    int n, rem, temp;
    cout<< "Enter a octal number: ";
    cin>> n;
    temp=n;
    while(n)
    {
        rem=n%10;
        if(rem==8||rem==9)
            break;
        n/=10;
    }
    if(n)
        cout<< temp << " are not valid octal number";
    else
        cout<< temp << " are valid octal number";
    return 0;
}
