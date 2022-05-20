#include<stdio.h>
#include<conio.h>
int main()
{
    char name[20];
    int i=0, sum=0;
    printf("Enter your name: ");
    gets(name);
    while(name[i]!=NULL)
    {
        sum=name[i]+sum;
        i++;
    }
    printf("Sum of total ASCII Value: %d",sum);
    return 0;
}
