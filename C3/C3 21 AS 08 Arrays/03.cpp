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
using namespace std;
class Employee
{
private:
    int empid;
    char name[20];
    float salary;
public:
    Employee()
    {
        empid=1001;
        strcpy(name,"Name  ");
        salary=20000;
    }

    static setEmployeeByUser(Employee e[], int noOfUser)
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
    }

    static void sortEmployeeBySalary(Employee e[], int noOfUser)
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

    static void sortEmployeeById(Employee e[], int noOfUser)
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

    int sumOfCharacter(Employee e)
    {
        int i, sum=0;
        while(e.name[i]!=NULL)
        {
            sum=e.name[i]+sum;
            i++;
        }
        return sum;
    }

    static void sortEmployeeByName(Employee e[], int noOfUser)
    {
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
        cout<<"+------+--------+--------+"<<endl;
        cout<<"| ID   | Name   | Salary |"<<endl;
        cout<<"+------+--------+--------+"<<endl;
        for(i=0;i<noOfUser;i++)
        {
            /*cout<<"Employee Details: "<<endl;
            cout<<"Employee ID     : "<<e[i].empid<<endl;
            cout<<"Employee Name   : "<<e[i].name<<endl;
            cout<<"Employee Salary : "<<e[i].salary<<endl<<endl;*/
            cout<<"| "<<e[i].empid<<" |";
            cout<<" "<<e[i].name<<" |";
            cout<<" "<<e[i].salary<<"  |"<<endl;
            cout<<"+------+--------+--------+"<<endl;
        }
        cout<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter Number of New Employee: ";
    cin>>n;
    Employee EMP[n];
    Employee::setEmployeeByUser(EMP,n);
    Employee::sortEmployeeById(EMP,n);
    Employee::displayEmployee(EMP,n);
    Employee::sortEmployeeBySalary(EMP,n);
    Employee::displayEmployee(EMP,n);
    //getch();
}
