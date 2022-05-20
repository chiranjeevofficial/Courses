#include<stdio.h>
#include<conio.h>
int main()
{
    char name[20];
    int i, sum=0;
    printf("Enter your name: ");
    for(i=0;i<20;i++)
    {
        name[i]=getche();
        sum=name[i]+sum;
    }
    printf("\nSum of total ASCII Value: %d",sum);
    return 0;
}
