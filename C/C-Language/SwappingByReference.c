#include<stdio.h>
#include<conio.h>
int main(){
    int a = 2, b = 4;
    swaping(&a, &b);
    printf("%d %d", a, b);
    getch();
}

void swaping(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
