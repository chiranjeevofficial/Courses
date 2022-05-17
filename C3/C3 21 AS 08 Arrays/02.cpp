/*
    02. Define a class Employee with empid, name and salary as instance
        member variable. Define following instance member function in it:
        a. setEmployeeID(int id);
        b. setEmployeeName(char n[ ]);
        c. setEmployeeSalary(float s);
        d. showEmployee();
        e. getSalary();
        f. getEmpID();
        g. getName();
*/
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
    void setEmployee(int empployeeID, float employeeSalary, char employeeName[])
    {
        empid=empployeeID;
        salary=employeeSalary;
        strcpy(name,employeeName);
    }

    void setEmployeeID(int id)
    {
        empid=id;
    }

    void setEmployeeName(char n[])
    {
        strcpy(name,n);
    }

    void setEmployeeSalary(float s)
    {
        salary=s;
    }

    void showEmployee()
    {
        cout<<"Employee ID: "<<empid<<endl;
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee Salary: "<<salary<<endl<<endl;
    }

    float getSalary()
    {
        return salary;
    }

    int getEmpID()
    {
        return empid;
    }

/*    char getName()
    {
        return &name[];
    }*/
};
int main()
{
    Employee emp;
    emp.setEmployeeID(1001);
    emp.setEmployeeName("Chiranjeev");
    emp.setEmployeeSalary(70000.00);
    emp.showEmployee();
    cout<<"Employee ID: "<<emp.getEmpID()<<endl;
    //  cout<<"Employee Name: "<<emp.getName();
    cout<<"Employee Salary: "<<emp.getSalary()<<endl;
    return 0;
}
