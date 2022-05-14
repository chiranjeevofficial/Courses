/*
03. Define a class Box to represent a cuboid. Declare instance member
    variables to store dimensions of the box and also define instance
    member functions to set dimensions of the box and display dimensions
    of the Box. Define one more instance member function which returns
    the volume of caller object of Box.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class cuboid
{
private:
    int length;
    int width;
    int height;
public:
    void input(int x, int y, int z)
    {
        length=x;
        width=y;
        height=z;
    }
    void display()
    {
        cout<<"Dimension of Box is: "<<endl;
        cout<<"Length: "<<length<<endl;
        cout<<"Width: "<<width<<endl;
        cout<<"Height: "<<height<<endl<<endl;
    }
    void set_value()
    {
        cout<<"Enter the legth, width & height of Cuboid(Box): "<<endl;
        cin>>length;
        cin>>width;
        cin>>height;
        cout<<endl;
    }
    int volume()
    {
        return width*length*height;
    }
};
int main()
{
    cuboid c1, c2, c3;
    c1.input(12,2,5);
    c1.display();
    c2.input(3,6,5);
    c2.display();
    c3.set_value();
    c3.display();
    cout<<"Volume of cuboid 'c1' is: "<<c1.volume()<<endl;
    cout<<"Volume of cuboid 'c2' is: "<<c2.volume()<<endl;
    cout<<"Volume of cuboid 'c3' is: "<<c3.volume()<<endl;
    getch();
    return 0;
}
