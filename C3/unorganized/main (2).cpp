#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
class ArrayADT
{
private:
    int ary[10];
public:
    void setValue(int index, int data)
    {
        if(index>=0&&index<10)
        {
            ary[index]=data;
            cout<<"Successfully Entered"<<endl;
        }
        else
            cout<<"Incorrect Value"<<endl;
    }
};

int main()
{
    fstream fin;
    getch();
    return 0;
}
