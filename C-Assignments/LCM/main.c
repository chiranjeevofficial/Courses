#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, l;
    printf("Enter two number to calculate those LCM: ");
    scanf("%d%d",&a,&b);
    for(l=1;l<=a*b;l++)
    {
        if(l%a==0&&l%b==0)
        break;
    }
    printf("LCM of %d & %d is: %d",a,b,l);
    return 0;
}