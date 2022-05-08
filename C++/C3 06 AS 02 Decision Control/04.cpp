//04. Write a C++ program to find nature of roots of quadratic equation.
#include<iostream>
using namespace std;
int main()
{
    int a, b, c, i, d;    
    cout<< "Enter a Quadratic Equation Constant's: like ax^2+bx+c\n";
    cin>> a >> b >> c;
    d=b*b-4*a*c;
    if(d==0)
        cout<< "The roots are real, equal and rational";
    if(d>0)
        {
            for(i=1;i<=d;i++)
            {
                if(d==i*i)
                    break;
            }
            if(i<d)
                cout<< "The roots are real, distinct and rational";
            else
                cout<< "The roots are real, distinct and irrational";
        }
    if(d<0)
        cout<< "The roots are imaginary";
    return 0;
}