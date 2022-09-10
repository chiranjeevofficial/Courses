#include<stdio.h>
#include<conio.h>
void printTable(int);
void rcrtable(int);
void printTable(int n){
    for(int i=1;i<=10;i++)
        printf("%d x %2d = %2d\n",n,i,n*i);
}
void rcrtable(int n){
    rcrtable(n)
}
int main(){
    int t;
    printf("Which Table: ");
    scanf("%d",&t);
    printTable(t);
    return 0;
}
