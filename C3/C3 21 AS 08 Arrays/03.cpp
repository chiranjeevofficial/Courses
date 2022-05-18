/*
    03. Create array of 10 Employees (use Employee class of Q. 2). Define
        following functions:
        a. displayEmployees(Employee []);
        b. sortEmployeesBySalary(Employee []);
        c. sortEmployeesByName(Employee []);
        d. sortEmployessByEmpID(Employee []);
*/
#include<iostream>
using namespace std;
class Employee
{
private:
    int empid;
    char name[20];
    float salary;
public:
    void setEmployeeByUser()
    {
        cout<<"Enter Employee Details: "<<endl;
        cout<<"Employee ID     : ";
        cin>>empid;
        cout<<"Employee Name   : ";
        cin.ignore();
        cin.get(name,20);
        if(name[0]>96&&name[0]<<123)
            name[0]=name[0]-96+64;
        cout<<"Employee Salary : ";
        cin>>salary;
        cout<<endl;
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

    void showEmployee()
    {
        cout<<"Employee Details: "<<endl;
        cout<<"Employee ID     : "<<empid<<endl;
        cout<<"Employee Name   : "<<name<<endl;
        cout<<"Employee Salary : "<<salary<<endl<<endl;
        cout<<"+------+--------+--------+";
        cout<<"|--ID--+--Name--+-Salary-+";
        cout<<"+------+--------+--------+";
        cout<<"|"<<empid;
        cout<<"+------+--------+--------+";
        cout<<"|";
        cout<<"+------+--------+--------+";
        cout<<"|";
        cout<<"+------+--------+--------+";
    }
};
int main()
{
    int n=3;
    Employee EMP[n];
    int i;
    for(i=0;i<n;i++)
    {
        EMP[i].setEmployeeByUser();
    }
    Employee::sortEmployeeBySalary(EMP);
    for(i=0;i<n;i++)
    {
        EMP[i].showEmployee();
    }
}
