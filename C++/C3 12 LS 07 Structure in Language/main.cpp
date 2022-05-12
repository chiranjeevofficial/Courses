#include<iostream>
#include<string.h>
using namespace std;
struct Book
{
    int bookid;
    char name[20];
    float price;
};
void display(struct Book);
struct Book input();
int main()
{
    struct Book b1={1,"Java",766.89};
    struct Book b2, b3;
    b2.bookid=2;
    strcpy(b2.name,"Python");
    b2.price=450.50;
    b3=input();
    display(b1);
    display(b2);
    display(b3);
    return 0;
}

void display(struct Book b)
{
    cout<<"BookID: "<<b.bookid<<" | Name: "<<b.name<<" | Price: "<<b.price<<endl;
}

struct Book input()
{
    struct Book b;
    cout<<"Enter BookID, Title & Price of Book: "<<endl;
    cin>>b.bookid;
    cin.ignore();
    cin.getline(b.name,20);
    cin>>b.price;
    return b;
}
