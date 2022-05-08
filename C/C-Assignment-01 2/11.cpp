//11. Write a C++ program which takes a character from user and display its ASCII code.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char ch;
    int c;
    cout<< "Enter a character: ";
    ch = getche();
    c=ch;
    cout<< " " << c;
    return 0;
}