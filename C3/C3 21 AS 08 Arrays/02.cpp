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
    int empId;
    char empName[20];
    float empSalary;
public:
    void setEmployee(int empployeeID, char employeeName[], float employeeSalary)
    {
        empId=empployeeID;
        strcpy(empName,employeeName);
        empSalary=employeeSalary;
    }

    void setEmployeeID(int id)
    {
        empId=id;
    }

    void setEmployeeName(char n[])
    {
        strcpy(empName,n);
    }

    void setEmployeeSalary(float s)
    {
        empSalary=s;
    }

    void showEmployee()
    {
        cout<<"Employee Details are: "<<endl;
        cout<<" - Employee ID     : "<<empId<<endl;
        cout<<" - Employee Name   : "<<empName<<endl;
        cout<<" - Employee Salary : "<<empSalary<<endl<<endl;
    }

    float getSalary()
    {
        return empSalary;
    }

    int getEmpID()
    {
        return empId;
    }

    char* getName()
    {
        return empName;
    }
};
int main()
{
    int id;
    char name[20];
    float salary;
    Employee emp1, emp2, emp3;
    emp1.setEmployeeID(1001);
    emp1.setEmployeeName("Chiranjeev");
    emp1.setEmployeeSalary(70000.00);
    cout<<"Employee ID: "<<emp1.getEmpID()<<endl;
    cout<<"Employee Name: "<<emp1.getName()<<endl;
    cout<<"Employee Salary: "<<emp1.getSalary()<<endl<<endl;

    emp2.setEmployee(1002,"Amit",10000.0);
    emp2.showEmployee();

    id=1003;
    strcpy(name,"Ayush");
    salary=15500.0;
    emp3.setEmployeeID(id);
    emp3.setEmployeeName(name);
    emp3.setEmployeeSalary(salary);
    emp3.showEmployee();
    return 0;
}
