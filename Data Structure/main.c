#include<stdio.h>
#include<conio.h>
int main()
{
    int a = 5;
    int *p;
    printf("Value of a is  : %d\n",a);
    printf("Address of a is: %d\n",&a);
    p = &a;
    printf("Value of p is  : %d\n",p);
    printf("Address of p is: %d\n",&p);
    return 0;
}
