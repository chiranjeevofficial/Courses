#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    printf("Sum is: %d",sumis(&a, &b));
    return 0;
}

int sumis(int *p, int *q)
{
    return *p + *q;
}
