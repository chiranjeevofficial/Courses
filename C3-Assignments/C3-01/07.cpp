// 7. Write a C++ program to calculate average of three numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
    float a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%f%f%f",&a, &b, &c);
    printf("Average of (%0.2f, %0.2f, %0.2f) is: %0.3f",a,b,c,((a+b+c)/3));
    return 0;
}