//2. Write a program to swap values of two int variables without using third variable
main(){
    int a, b;
    printf("Enter two values: ");
    scanf("%d%d",&a,&b);
    printf("\nBefore Swap: %d %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter  Swap: %d %d",a,b);
    getch();
}