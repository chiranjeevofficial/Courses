/*
    1. Define a class Array, which contains an int array of size 10 as instance
    member variable. Now define the following member functions to access
    this array:
        a. inputArrayElements();
        b. findMaxElement();
        c. findMinElement();
        d. sort();
        e. editElement(int index, int newData);
        f. sumOfElement();
        g. averageOfElement();
*/
#include<iostream>
using namespace std;
class Array
{
private:
    int element[10];
public:
    void inputArrayElements()
    {
        cout<<"Enter Array Elements: "<<endl;
        int i;
        for(i=0;i<10;i++)
        {
            cout<<"Element["<<i<<"]: ";
            cin>>element[i];
        }
        cout<<"Elements are successfully entered"<<endl;
    }

    void outputArrayElement()
    {
        int i;
        for(i=0;i<10;i++)
        {
            cout<<"Element["<<i<<"]: "<<element[i]<<endl;
        }
        cout<<endl;
    }

    int findMaxElement()
    {
        int maxEle=0, i;
        for(i=0;i<10;i++)
        {
            if(element[i]>maxEle)
                maxEle=element[i];
        }
        return maxEle;
    }

    int findMinElement()
    {
        int minEle=findMaxElement(), i;
        for(i=0;i<10;i++)
        {
            if(element[i]<minEle)
                minEle=element[i];
        }
        return minEle;
    }

    // <!-- sort() under construction -->

    void editElement(int index, int newData)
    {
        element[index]=newData;
    }

    int sumOfElement()
    {
        int sum=0, i;
        for(i=0;i<10;i++)
        {
            sum=element[i]+sum;
        }
        return sum;
    }

    float averageOfElements()
    {
        return sumOfElement()/10.0;
    }
};
int main()
{
    Array A1;
    A1.inputArrayElements();
    int x, y;
    cout<<"Maximum Element is: "<<A1.findMaxElement()<<endl;
    cout<<"Minimum Element is: "<<A1.findMinElement()<<endl;
    cout<<"Enter Index Value & New Data for edit the element: ";
    cin>>x>>y;
    A1.editElement(x, y);
    A1.outputArrayElement();
    cout<<"Sum of Elements is: "<<A1.sumOfElement();
    cout<<"Average of Elements is: "<<A1.averageOfElements();
}
