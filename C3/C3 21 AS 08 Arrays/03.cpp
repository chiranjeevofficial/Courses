/*
    03. Create array of 10 Employees (use Employee class of Q. 2). Define
        following functions:
        a. displayEmployees(Employee []);
        b. sortEmployeesBySalary(Employee []);
        c. sortEmployeesByName(Employee []);
        d. sortEmployessByEmpID(Employee []);
*/
#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class Employee
{
private:
    int empid;
    char name[20];
    float salary;
public:
    Employee()  //Constructor
    {
        empid=1001;
        strcpy(name,"Chiranjeev Kashyap");
        salary=20000;
    }

    static setEmployeeByUser(Employee e[], int noOfUser)    //Set Employee Manually
    {
        int i;
        for(i=0;i<noOfUser;i++)
        {
            cout<<"Enter Employee Details: "<<endl;
            cout<<"Employee ID     : ";
            cin>>e[i].empid;
            cout<<"Employee Name   : ";
            cin.ignore();
            cin.get(e[i].name,20);
            if(e[i].name[0]>96&&e[i].name[0]<<123)
                e[i].name[0]=e[i].name[0]-96+64;
            cout<<"Employee Salary : ";
            cin>>e[i].salary;
            cout<<endl;
        }
        system("cls");
    }

    static void sortEmployeeBySalary(Employee e[], int noOfUser)    //Sort Employee By Salary
    {
        cout<<"Employee Sort By Salary: "<<endl;
        int i, j;
        for(i=0;i<noOfUser;i++)
        {
            for(j=0;j<noOfUser-1;j++)
            {
                Employee temp;
                if(e[j].salary>e[j+1].salary)
                {
                    temp=e[j];
                    e[j]=e[j+1];
                    e[j+1]=temp;
                }
            }
        }
    }

    static void sortEmployeeById(Employee e[], int noOfUser)    //Set Employee By ID
    {
        cout<<"Employee Sort By ID: "<<endl;
        int i, j;
        for(i=0;i<noOfUser;i++)
        {
            for(j=0;j<noOfUser-1;j++)
            {
                Employee temp;
                if(e[j].empid>e[j+1].empid)
                {
                    temp=e[j];
                    e[j]=e[j+1];
                    e[j+1]=temp;
                }
            }
        }
    }

    int sumOfCharacter()
    {
        int i=0, sum=0;
        while(name[i]!=NULL)
        {
            sum=name[i]+sum;
            i++;
        }
        return sum;
    }

    static void sortEmployeeByName(Employee e[], int noOfUser)
    {
        cout<<"Employee Sort By Name: "<<endl;
        int i, j;
        for(i=0;i<noOfUser;i++)
        {
            for(j=0;j<noOfUser-1;j++)
            {
                Employee temp;
                if(e[j].sumOfCharacter()>e[j+1].sumOfCharacter())
                {
                    temp=e[j];
                    e[j]=e[j+1];
                    e[j+1]=temp;
                }
            }
        }
    }

    static void displayEmployee(Employee e[], int noOfUser)
    {
        int i;
        cout<<"Employee Details: "<<endl;     //Display Employee in Paragrapgh
        cout<<"+------+--------+--------+"<<endl;
        cout<<"| ID   | Name   | Salary |"<<endl;
        cout<<"+------+--------+--------+"<<endl;
        for(i=0;i<noOfUser;i++)
        {
            cout<<"| "<<e[i].empid<<" |";
            cout<<" "<<e[i].name<<" |";
            cout<<" "<<e[i].salary<<"  |"<<endl;
            cout<<"+------+--------+--------+"<<endl;
        }
        getch();
        system("cls");
    }
};
int main()
{
    int n;
    cout<<"Enter Number of New Employee: ";
    cin>>n;
    Employee EMP[n];
    Employee::setEmployeeByUser(EMP,n);
    Employee::displayEmployee(EMP,n);
    Employee::sortEmployeeById(EMP,n);
    Employee::displayEmployee(EMP,n);
    Employee::sortEmployeeBySalary(EMP,n);
    Employee::displayEmployee(EMP,n);
    Employee::sortEmployeeByName(EMP,n);
    Employee::displayEmployee(EMP,n);
}
