// 4. Write a program to check whether a given number is even or odd without using % Operator
main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if((n/2)*2==n)
        printf("%d is Even Number",n);
    else
        printf("%d is Odd Number",n);
}