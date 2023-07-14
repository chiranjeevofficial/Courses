#include<stdio.h>
#include<conio.h>

int addition(int *x, int *y) {
    return *x + *y;
}

int main() {
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a, &b);
    c = addition(&a, &b);
    printf("Sum of %d & %d is: %d", a, b, c);
    getch();
}
