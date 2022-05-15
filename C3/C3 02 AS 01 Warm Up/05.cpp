// 5. Write a C++ program to calculate area of a rectangle.
#include<stdio.h>
#include<conio.h>
int main()
{
    float l, w;
    printf("Enter length, width of rectangle: ");
    scanf("%f%f",&l, &w);
    printf("Area of rectangle is: %0.3f",l*w);
    return 0;
}