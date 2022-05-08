//10. Write a C++ program to calculate simple interest.
#include<iostream>
using namespace std;
int main()
{
    int time;
    float prn, rate, smp_int;
    cout<< "Enter Total Amount: ";
    cin>> prn;
    cout<< "Enter taken time(in years): ";
    cin>> time;
    cout<< "Enter decided rate(without % sign): ";
    cin>> rate;
    smp_int = (prn*time*rate)/100;
    cout<< "Simple interest is: " << smp_int;
    return 0;    
}