//2. Write a program to check whether a given number is divisible by 5 or not
main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%5==0)
        printf("%d is Divisible by 5",n);
    else
        printf("%d is Not Divisible by 5",n);
    getch();
}