#include<iostream>
#include "main.cpp"
using namespace std;
int main()
{
    int x;
    cout<<"Calculate area of circle"<<endl;
    cout<<"Enter a radius of circle: : ";
    cin>>x;
    cout<<"Area of Circle is: "<<areaOfCircle(x)<<endl;

    cout<<endl<<"Check whether number is Even or Odd"<<endl;
    cout<<"Enter a number: ";
    cin>>x;
    if(checkEvenOdd(x))
        cout<<x<<" is Odd Number"<<endl;
    else
        cout<<x<<" is Even Number"<<endl;

    cout<<endl<<"Check whether number is Prime or Not"<<endl;
    cout<<"Enter a number: ";
    cin>>x;
    if(checkPrimeOrNot(x))
        cout<<x<<" is Not Prime Number"<<endl;
    else
        cout<<x<<" is Prime Number"<<endl;

    cout<<endl<<"Find next Prime number of a number"<<endl;
    cout<<"Sorry! This Function is under Construction"<<endl;

    cout<<endl<<"Find all Prime Number between given range"<<endl;
    cout<<"Sorry! This Function is under Construction"<<endl;

    cout<<endl<<"Calculate Factorial of Number"<<endl;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<"Factorial of "<<x<<" is: "<<fact(x);

    cout<<endl<<"Calculate Permutation of N Numbers of Object"<<endl;
    cout<<"Enter total number of objects: ";
    cin>>x;
    int y;
    cout<<"Enter selected number of objects: ";
    cin>>y;
    cout<<"Number of Permutation is: "<<permutation(x,y)<<endl;

    cout<<endl<<"Calculate Combination of N Numbers of Object"<<endl;
    cout<<"Enter total number of objects: ";
    cin>>x;
    cout<<"Enter choosing number of objects in the set: ";
    cin>>y;
    cout<<"Number of Combination is: "<<combination(x,y)<<endl;


    cout<<endl<<"Print pascal Triangle"<<endl;
    cout<<"Sorry! This Function is under Construction"<<endl;

    cout<<endl<<"Calculate LCM of two numbers"<<endl;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    cout<<"LCM of "<<x<<" & "<<y<<" is: "<<LCM(x,y);

    cout<<endl<<"Calculate HCF of two numbers"<<endl;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    cout<<"HCF of "<<x<<" & "<<y<<" is: "<<HCF(x,y);

    cout<<endl<<"Print n terms of Fibonacci Series"<<endl;
    cout<<"Enter 1 to nth term to print Fibonacci series: ";
    cin>>x;

    cout<<endl<<"Thank You"<<endl<<"Please Visit Again"<<endl;
    return 0;
}
