#include<iostream>
#include<string.h>
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
        empid=1000;
        strcpy(name,"Undefinied");
        salary=145900;
    }

    static void setEmployee(Employee e[])
    {
        int i;
        for(i=0;i<3;i++)
        {
            cout<<"Enter Employee Details: "<<endl;
            cout<<"Employee ID: ";
            cin>>e[i].empid;
            cout<<"Employee Name: ";
            cin.ignore();
            cin.get(e[i].name,20);
            cout<<"Employee Salary: ";
            cin>>e[i].salary;
            cout<<endl;
        }
    }

    static void sortEmployeeBySalary(Employee e[])
    {
        int i, j;
        for(i=0;i<3;i++)
        {
            for(j=0;j<2;j++)
            {
                int temp;
                if(e[j].salary>e[j+1].salary)
                {
                    temp=e[j].salary;
                    e[j].salary=e[j+1].salary;
                    e[j+1].salary=temp;
                }
            }
        }
    }

    static void sortEmployeeByName()
    {
        int i, j;
        for()
    }

    static void showEmployee(Employee e[])
    {
        int i;
        for(i=0;i<3;i++)
        {
            cout<<"Employee Details: "<<endl;
            cout<<"Employee ID     : "<<e[i].empid<<endl;
            cout<<"Employee Name   : "<<e[i].name<<endl;
            cout<<"Employee Salary : "<<e[i].salary<<endl<<endl;
        }
        /*
        cout<<"+------+------------+--------+"<<endl;
        cout<<"|  ID  |    Name    | Salary |"<<endl;
        cout<<"+------+------------+--------+"<<endl;
        {
            cout<<"| "<<e[i].empid<<" | "<<e[i].name<<" | "<<e[i].salary<<" |"<<endl;
        }
        cout<<"+------+------------+--------+"<<endl<<endl;*/
    }
};
int main()
{
    Employee e[3];
    Employee::setEmployee(e);
    Employee::showEmployee(e);
    cout<<"Employee Sort By Salary in Ascending order: "<<endl;
    Employee::sortEmployeeBySalary(e);
    Employee::showEmployee(e);
    return 0;
}
