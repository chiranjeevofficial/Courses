#include<iostream>
#include<conio.h>
#include<string>
#include<queue>
using namespace std;
class Employee{
    private:
        int empid;
        string name;
        float salary;
    public:
        void showEmployee(){
            cout<<"\n"<<empid<<" "<<name<<" "<<salary;
        }
        float getSalary(){
            return salary;
        }
        void setEmployee(int id, string n, float s){
            empid=id; name=n; salary=s;
        }
};
struct CompareSalary{
    bool operator()(Employee &e1, Employee &e2){
        return e1.getSalary() < e2.getSalary();
    }
};

int main(){
    priority_queue <Employee,vector<Employee>,CompareSalary> p1;
    Employee emp[5],e;
    emp[0].setEmployee(0,"Rahul",2000);
    emp[1].setEmployee(1,"Amit",5000);
    emp[2].setEmployee(2,"Tushar",3000);
    emp[3].setEmployee(3,"Vipin",6000);
    emp[4].setEmployee(4,"Mishra",4000);
    for(int i=0;i<5;i++)
        p1.push(emp[i]);
    e=p1.top();
    e.showEmployee();
    p1.pop();
    e=p1.top();
    e.showEmployee();
}
