// 11. Write a C++ program which takes a character from user and display its ASCII code.
#include<stdio.h>
#include<conio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    c=getche();
    printf("\n%c %d",c,c);
    return 0;
}