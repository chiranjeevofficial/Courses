#include<iostream>
using namespace std;
//Functions Declarations
float areaOfCircle(float);
int checkEvenOdd(int);
int checkPrimeOrNot(int);
int nextPrime(int);
int betweenPrime(int, int);
int fact(int);
int permutation(int, int);
int combination(int, int);
int LCM(int, int);
int HCF(int, int);
void fibonacci(int);

//  1. Write a function to calculate area of circle. (TSRS)
float areaOfCircle(float radius)
{
    return 3.14*radius*radius;
}

//  2. Write a function to check whether a given number is even or odd.
//  Return 1 if number is even, otherwise return 0. (TSRS)
int checkEvenOdd(int n)
{
    if(n%2==0)
        return 1;
    else
        return 0;
}

//  3. Write a function to check whether a given number is Prime or not.
//  Return 1 if number is Prime, otherwise return 0. (TSRS)
int checkPrimeOrNot(int n)
{
    int i;
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
            break;
    }
    if(i==n)
        return 1;
    else
        return 0;
}

//  4. Write a function to find next Prime number of a given number. (TSRS)
/*int nextPrime(int n)
{
    // Pending //
}

//  5. Write a function to print all prime numbers between two given numbers. (TSRS)
int betweenPrime(int x, int y)
{
    // Pending //
}
*/

//  6. Write a function to calculate factorial of a number. (TSRS)
int fact(int n)
{
    int fact=1;
    while(n)
    {
        fact=fact*n;
        n--;
    }
    return fact;
}

//  7. Write a function to calculate permutation of arranging r items out of n items. (TSRS)
int permutation(int totalObject, int selectedObject)
{
    return fact(totalObject)/fact(totalObject-selectedObject);
}

//  8. Write a function to calculate combinations of selecting r items out of n items. (TSRS)
int combination(int totalObject, int selectedObject)
{
    return fact(totalObject)/(fact(selectedObject)*fact(totalObject-selectedObject));
}

//  9. Write a function to print Pascal Triangle. (TSRS)
/*
    <!-- Pending -->
*/

//  10. Write a function to calculate LCM of two numbers. (TSRS)
int LCM(int x, int y)
{
    int LCM;
    for(LCM=1;LCM<=x*y;LCM++)
    {
        if(LCM%x==0&&LCM%y==0)
            break;
    }
    return LCM;
}

//  11. Write a function to calculate HCF of two numbers. (TSRS)
int HCF(int a, int b)
{
    int HCF;
    for(HCF=(a<b)?a:b;HCF>=1;HCF--)
    {
        if(a%HCF==0&&b%HCF==0)
            break;
    }
    return HCF;
}

//  12. Write a function to print first N terms of Fibonacci series. (TSRN)
void fibonacci(int n)
{
    int a = -1, b = 1, fibo;

    while(n)
    {
        fibo=a+b;
        cout<<fibo<<" ";
        a=b;
        b=fibo;
        n--;
    }
    cout<<endl;
}
