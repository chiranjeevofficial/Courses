// write a program to print fibonacci series nth term
// 1th 2th 3th 4th 5th 6th .... nth term
// 0   1   1   2   3   5   ---- n
#include<stdio.h>
#include<conio.h>
int main()
{
    // Namaste-Coder
    /*
        Algorithm ---
        let 1st & 2nd term is a & b
        a=-1, b=1 then,
        c=a+b == 0
        the, a=b; b=c;
        then so on
        Logic:
        a=-1; b=1
        c=a+b;
        a=b;
        c=b;
    */
    // Thank You So Much
    int a=-1, b=1, n, c;
    printf("0th to which term to print fibonacci series: ");
    scanf("%d",&n);
    while(n)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        n--;
    }
    return 0;
}
