//3. Write a program to print last digit of a given number
main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Last digit %d of %d",n%10,n);
    getch();
}