#include<stdio.h>
#include<conio.h>
class quiz{
private:
    int table;
public:
    char startMenu(){
        printf("Practice Table : 1\n");
        printf("Print Table    : 2\n");
        printf(" ---> ");
        return getche();
    }
    char EndMenu(){
        printf("Choose Another Table: 1\n");
        printf("Same Table          : 2\n");
        printf("Exit                : 3\n");
        printf(" ---> ");
        return getche();
    }
};
int main(){
    char c;
    quiz q1;
    c=q1.startMenu();
    printf("\nReturn Value: %c\n\n",c);
    c=q1.EndMenu();
    printf("\nReturn Value: %c\n\n",c);
    return 0;
}
