#include<stdio.h>
#include<conio.h>

struct Employee
{
    int age;
    char name[20];
    float salary;
};

int main()
{
    struct Employee e1 = {21, "Coder", 24000.0};
    printf("Employee Name: %s\n",e1.name);
    printf("Employee Age: %d\n",e1.age);
    printf("Employee Salary: %0.2f\n",e1.salary);

    struct Employee *p;
    if (p == NULL) {
        p = &e1;
    }

    if (p == &e1) {
        printf("\nP contain the address of e1");
    } else {
        printf("\nP doesn't contain the address of e1");
    }
    return 0;
}
