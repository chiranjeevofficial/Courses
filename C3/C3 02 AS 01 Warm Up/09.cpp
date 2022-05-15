// 9. Write a C++ program to swap values of two int variables without using third variable
#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b;
    printf("Enter two number: ");
    scanf("%d%d",&a, &b);
    printf("a: %d b: %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a: %d b: %d",a,b);
    return 0;
}