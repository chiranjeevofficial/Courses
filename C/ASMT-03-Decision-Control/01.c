//1. Write a program to check whether a given number is positive or non positive
main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n>0)
        printf("%d is Positive Number",n);
    else
        printf("%d is Non Positive Number",n);
    getch();
}