/*
    03. Create array of 10 Employees (use Employee class of Q. 2). Define
        following functions:
        a. displayEmployees(Employee [ ]);
        b. sortEmployeesBySalary(Employee [ ]);
        c. sortEmployeesByName(Employee [ ]);
        d. sortEmployessByEmpID(Employee [ ]);
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
        cout<<"Enter Employee ID: ";
        cin>>empid;
        cout<<"Enter Employee Salary: ";
        cin>>salary;
        cout<<"Enter Employee Name: ";
        cin.ignore();
        cin.get(name,20);
        cout<<endl;
    }

    void showEmployee()
    {
        cout<<"Employee Details: "<<endl;
        cout<<"Employee ID: "<<empid<<endl;
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee Salary: "<<salary<<endl<<endl;
    }
};
int main()
{
    Employee EMP[3];
    int i;
    for(i=0;i<3;i++)
    {
        EMP[i].setEmployeeByUser();
    }
    cout<<endl;
    for(i=0;i<3;i++)
    {
        EMP[i].showEmployee();
    }
}
