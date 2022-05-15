/*
02. Define a class Time to represents Time (like 3 hr 45 min 20 sec). Declare
    appropriate number of instance member variables and also define
    instance member function to set values for time and display values of
    time.
*/
#include<iostream>
using namespace std;
class time
{
private:
    int hour;
    int minu;
    int secn;
public:
    void input(int x, int y, int z)
    {
        hour=x;
        minu=y;
        secn=z;
    }
    void display()
    {
        cout<<"Time: "<<hour<<"hr: "<<minu<<"min: "<<secn<<"sec"<<endl;
    }
    void set_time()
    {
        cout<<"Enter integer value of time like(3hr: 15min: 39sec): "<<endl;
        cin>>hour;
        cin>>minu;
        cin>>secn;
    }
};
int main()
{
    time t1, t2, t3;
    t1.input(3, 15, 45);
    t1.display();
    t2.input(16, 00, 00);
    t2.display();
    t3.set_time();
    t3.display();
}
