// 8. Write a C++ program to swap values of two int variables
#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, c;
    printf("Enter two number: ");
    scanf("%d%d",&a, &b);
    printf("a: %d b: %d",a,b);
    c=a;
    a=b;
    b=c;
    printf("a: %d b: %d",a,b);
    return 0;
}
