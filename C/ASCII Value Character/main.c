// Write a program to print ASCII Character's of given Range (like: 70 to 90 between all ASCII Characters)
#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b;
	printf("ASCII Value from: ");
	scanf("%d",&a);
	printf("ASCII Value to: ");
	scanf("%d",&b);
	if(a>b)
	{
		a=a+b;
		b=a-b;
		a=a-b;
	}
	printf("\nASCII Value --- ASCII Character");
	while(a<=b)
	{
		printf("\n%10.0d ----- %c",a,a);
        a++;
	}
	getch();
}
