// 3. Write a C++ program to add two numbers taken from user.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b;
    printf("Enter two number: ");
    scanf("%d%d",&a, &b);
    printf("%d + %d = %d",a, b, a+b);
    return 0;
}