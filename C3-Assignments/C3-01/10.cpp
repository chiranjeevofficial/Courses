// 10. Write a C++ program to calculate simple interest.
#include<stdio.h>
#include<conio.h>
int main()
{
    int t;
    float p, r;
    printf("Enter total amount: ");
    scanf("%f",&p);
    printf("Enter rate: ");
    scanf("%f",&r);
    printf("Enter time (in years): ");
    scanf("%d",&t);
    printf("Simple interest is: %0.2f",((p*r*t)/100));
    return 0;
}