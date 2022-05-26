#include<iostream>
using namespace std;
class complex
{
private:
    int real, imag;
public:
    void setValueManually(int x, int y)
    {
        real=x;
        imag=y;
    }

    void setValueDynamically()
    {
        cout<<"Enter Real part of complex number: ";
        cin>>real;
        cout<<"Enter Imaginary part of complex number: ";
        cin>>imag;
    }

    void getValue()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }

    /*complex sumOfComplex(complex c)
    {
        complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }*/

    complex operator+(complex c)
    {
        complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }

    complex operator*(complex c)
    {
        complex temp;
        temp.real=(real*c.real-imag*c.imag);
        temp.imag=(real*c.imag+imag*c.real);
        return temp;
    }
};

class time
{
private:
    int H, M, S;

public:
    time()
    {
        H=0; M=0; S=0;
    }

    void setTimeManually(int Hour, int Minute, int Second)
    {
        H=Hour;
        M=Minute;
        S=Second;
    }

    void setValueDynamically()
    {
        cout<<"Enter Time: HH:MM:SS"<<endl;
        cout<<"Enter Hour  : ";
        cin>>H;
        while(H>23||H<0)
        {
            cout<<"> Invalid Hour\nEnter Correct Hour: ";
            cin>>H;
        }
        cout<<"Enter Minute: ";
        cin>>M;
        while(M>59||M<0)
        {
            cout<<"> Invalid Minute\nEnter Correct Minutes: ";
            cin>>M;
        }
        cout<<"Enter Second: ";
        cin>>S;
        while(S>59||S<0)
        {
            cout<<"> Invalid Seconds\nEnter Correct Seconds: ";
            cin>>S;
        }
    }

    void getValue()
    {
        cout<<"Time: "<<H<<": "<<M<<": "<<S<<endl;
    }

    time operator+(time t)
    {
        time temp;
        temp.H=H+t.H;
        temp.M=M+t.M;
        temp.S=S+t.S;
        return temp;
    }

    time operator>(time t)
    {
        time temp;
        if(H>t.H)
            temp.H=H;
        else
            temp.H=t.H;
        if(M>t.M)
            temp.M=M;
        else
            temp.M=t.M;
        if(S>t.S)
            temp.S=S;
        else
            temp.S=t.S;
        return temp;
    }

    time operator-(time t)
    {
        time temp;
        if(H>t.H)
            temp.H=H-t.H;
        else
            temp.H=t.H-H;
        if(M>t.M)
            temp.M=M-t.M;
        else
            temp.M=t.M-M;
        if(S>t.S)
            temp.S=S-t.S;
        else
            temp.S=t.S-S;
        return temp;
    }
};

int main()
{
    /*complex c1, c2, c3;
    c1.setValueManually(3,4);
    c2.setValueDynamically();
    c1.getValue();
    c2.getValue();
    //c3=c1.sumOfComplex(c2);
    c3=c1+c2;
    c3.getValue();
    c3=c1*c2;
    c3.getValue();*/

    time t1, t2, t3;
    t1.setTimeManually(13,58,34);
    t2.setValueDynamically();
    t1.getValue();
    t2.getValue();
    t3=t1+t2;
    t3.getValue();
    t3=t1-t2;
    t3.getValue();
    t3=t1>t2;
    t3.getValue();
    return 0;
}
