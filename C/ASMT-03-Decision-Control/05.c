// 5. Write a program to check whether an year is a leap year or not
main(){
    int n;
    printf("Enter a year: ");
    scanf("%d",&n);
    if(n%4)
        printf("%d is not a leap year",n);
    else
        printf("%d is a leap year",n);
}