//1. Write a program to swap values of two int variables
main(){
    int a, b, c;
    printf("Enter two values: ");
    scanf("%d%d",&a,&b);
    printf("\nBefore Swap: %d %d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nAfter  Swap: %d %d",a,b);
    getch();
}