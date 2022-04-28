// Write a program to convert octal number to decimal number
#include<stdio.h>
#include<conio.h>
int main()
{
    int n=0, i=0, temp=0, rev=0, dec=0;
    printf("Enter any octal number to convert in decimal: ");
    scanf("%d",&n);
    dec=n;
    while(n)
    {
        for(i=1;i<=10;i++)
        {
            if(n<i*8)
            {
                i--;
                break;
            }
        }
        temp=temp*10;
        temp=n-8*i+temp;
        n=i;
    }
    while(temp)
    {
        rev=(temp%10+rev)*10;
        temp=temp/10;
    }
    rev=rev/10;
    printf("Decimal of (%d)octal is %d",dec,rev);
    return 0;
}
