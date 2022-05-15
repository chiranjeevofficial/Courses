#include<iostream>
using namespace std;
class item
{
    private:
        int a, b;   //instance member variable declaration
        static int k;   //static member variable declaration
    public:
        void set_a(int x)
        {
            a=x;
        }
        int get_a()
        {
            return a;
        }
        static void set_k(int y)
        {
            k=y;
        }
        static int get_k()
        {
            return k;
        }
};
int item::k=1;  //definition of static member variable
int main()
{
    //  item i1, i2;
    //  i1.set_a(5);
    //  cout<<"i2.a: "<<i2.get_a()<<endl;;
    //  i1.set_k(10); //--> set_k not directly access because this is instance member function
    item::set_k(15);
    //  cout<<"k: "<<i2.get_k(); //--> get_k not directly access because this is instance member function
    cout<<"K: "<<item::get_k();

    return 0;
}
