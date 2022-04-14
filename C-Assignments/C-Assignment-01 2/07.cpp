//7. Write a C++ program to calculate average of three numbers.
#include<iostream>
using namespace std;
int main()
{
    float a1, a2, a3, avg;
    cout<< "Enter three numbers: ";
    cin>> a1 >> a2 >> a3;
    avg = (a1+a2+a3)/3;
    cout<< "Average of given number is: " << avg;
    return 0;
}