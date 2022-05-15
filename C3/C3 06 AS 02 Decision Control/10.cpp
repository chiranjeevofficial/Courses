//10. Write a C++ program to check whether a given character is a digit, lowercase alphabet, uppercase alphabet or a special character.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char c;
    cout<< "Enter a character: ";
    c=getche();
    if(c>='a'&&c<='z')
        cout<< "\n" << c << " is lowercase alphabet";
    else if(c>='A'&&c<='Z')
        cout<< "\n" << c << " is uppercase alphabet";
    else if(c>='0'&&c<='9')
        cout<< "\n" << c << " is digit";
    else if( c>='!'&&c<='/' || c>=':'&&c<='@' || c>='['&&c<='`'|| c>='{'&&c<='~')
        cout<< "\n" << c << " is special character";
    return 0;
}