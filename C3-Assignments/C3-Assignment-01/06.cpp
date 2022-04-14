// 6. Write a C++ program to calculate volume of a cuboid.
#include<stdio.h>
#include<conio.h>
int main()
{
    float l, w, h;
    printf("Enter length, width & height of cuboid: ");
    scanf("%f%f%f",&l, &w, &h);
    printf("Volume of cuboid is: %0.3f",(l*w*h));
    return 0;
}